package ntruprime

import (
	"bytes"
	"testing"
)

var allVariants = []struct {
	name    string
	variant Variant
}{
	{"653", Variant653},
	{"761", Variant761},
	{"857", Variant857},
	{"953", Variant953},
	{"1013", Variant1013},
	{"1277", Variant1277},
}

func TestRoundTrip(t *testing.T) {
	for _, tc := range allVariants {
		tc := tc
		t.Run(tc.name, func(t *testing.T) {
			kem := New(tc.variant)

			pk, sk, err := kem.GenerateKeyPair()
			if err != nil {
				t.Fatalf("GenerateKeyPair: %v", err)
			}
			if len(pk) != kem.PublicKeySize() {
				t.Errorf("pk length = %d, want %d", len(pk), kem.PublicKeySize())
			}
			if len(sk) != kem.SecretKeySize() {
				t.Errorf("sk length = %d, want %d", len(sk), kem.SecretKeySize())
			}

			ct, ss1, err := kem.Encapsulate(pk)
			if err != nil {
				t.Fatalf("Encapsulate: %v", err)
			}
			if len(ct) != kem.CiphertextSize() {
				t.Errorf("ct length = %d, want %d", len(ct), kem.CiphertextSize())
			}
			if len(ss1) != kem.SharedSecretSize() {
				t.Errorf("ss1 length = %d, want %d", len(ss1), kem.SharedSecretSize())
			}

			ss2, err := kem.Decapsulate(ct, sk)
			if err != nil {
				t.Fatalf("Decapsulate: %v", err)
			}
			if len(ss2) != kem.SharedSecretSize() {
				t.Errorf("ss2 length = %d, want %d", len(ss2), kem.SharedSecretSize())
			}

			if !bytes.Equal(ss1, ss2) {
				t.Error("shared secrets do not match")
			}
		})
	}
}

func TestImplicitRejection(t *testing.T) {
	kem := New(Variant761)

	pk, sk, err := kem.GenerateKeyPair()
	if err != nil {
		t.Fatalf("GenerateKeyPair: %v", err)
	}

	ct, ss1, err := kem.Encapsulate(pk)
	if err != nil {
		t.Fatalf("Encapsulate: %v", err)
	}

	// Corrupt the ciphertext: decapsulation must still succeed (implicit
	// rejection) but yield a different shared secret.
	bad := append([]byte(nil), ct...)
	bad[0] ^= 1
	ss2, err := kem.Decapsulate(bad, sk)
	if err != nil {
		t.Fatalf("Decapsulate: %v", err)
	}
	if bytes.Equal(ss1, ss2) {
		t.Error("corrupted ciphertext produced the same shared secret")
	}
}

func TestInvalidInputs(t *testing.T) {
	kem := New(Variant761)

	pk, sk, err := kem.GenerateKeyPair()
	if err != nil {
		t.Fatalf("GenerateKeyPair: %v", err)
	}

	// Wrong public key size for Encapsulate
	_, _, err = kem.Encapsulate(pk[:10])
	if err == nil {
		t.Error("Encapsulate with short pk: expected error, got nil")
	}

	ct, _, err := kem.Encapsulate(pk)
	if err != nil {
		t.Fatalf("Encapsulate: %v", err)
	}

	// Wrong ciphertext size for Decapsulate
	_, err = kem.Decapsulate(ct[:10], sk)
	if err == nil {
		t.Error("Decapsulate with short ct: expected error, got nil")
	}

	// Wrong secret key size for Decapsulate
	_, err = kem.Decapsulate(ct, sk[:10])
	if err == nil {
		t.Error("Decapsulate with short sk: expected error, got nil")
	}
}
