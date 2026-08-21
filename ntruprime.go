// Package ntruprime provides a Go wrapper for the libntruprime Streamlined
// NTRU Prime post-quantum key encapsulation mechanism (KEM).
package ntruprime

// #cgo CFLAGS: -I${SRCDIR}/lib/include
// #cgo amd64 LDFLAGS: -L${SRCDIR}/lib/amd64 -lntruprime -lrandombytes-kernel
// #cgo arm64 LDFLAGS: -L${SRCDIR}/lib/arm64 -lntruprime -lrandombytes-kernel
// #include <ntruprime.h>
import "C"
import (
	"errors"
	"unsafe"
)

// Variant identifies one of the 6 Streamlined NTRU Prime parameter sets.
type Variant int

const (
	Variant653 Variant = iota
	Variant761
	Variant857
	Variant953
	Variant1013
	Variant1277
)

// KEM holds the chosen parameter set and exposes the KEM operations.
type KEM struct {
	variant Variant
}

// New returns a KEM instance for the given variant.
func New(v Variant) *KEM {
	return &KEM{variant: v}
}

// PublicKeySize returns the public key size in bytes for this variant.
func (k *KEM) PublicKeySize() int {
	switch k.variant {
	case Variant653:
		return 994
	case Variant761:
		return 1158
	case Variant857:
		return 1322
	case Variant953:
		return 1505
	case Variant1013:
		return 1623
	case Variant1277:
		return 2067
	default:
		panic("ntruprime: unknown variant")
	}
}

// SecretKeySize returns the secret key size in bytes for this variant.
func (k *KEM) SecretKeySize() int {
	switch k.variant {
	case Variant653:
		return 1518
	case Variant761:
		return 1763
	case Variant857:
		return 1999
	case Variant953:
		return 2254
	case Variant1013:
		return 2417
	case Variant1277:
		return 3059
	default:
		panic("ntruprime: unknown variant")
	}
}

// CiphertextSize returns the ciphertext size in bytes for this variant.
func (k *KEM) CiphertextSize() int {
	switch k.variant {
	case Variant653:
		return 897
	case Variant761:
		return 1039
	case Variant857:
		return 1184
	case Variant953:
		return 1349
	case Variant1013:
		return 1455
	case Variant1277:
		return 1847
	default:
		panic("ntruprime: unknown variant")
	}
}

// SharedSecretSize returns 32 for all variants.
func (k *KEM) SharedSecretSize() int {
	return 32
}

// GenerateKeyPair generates a new key pair.
func (k *KEM) GenerateKeyPair() (publicKey, secretKey []byte, err error) {
	pk := make([]byte, k.PublicKeySize())
	sk := make([]byte, k.SecretKeySize())
	pkPtr := (*C.uchar)(unsafe.Pointer(&pk[0]))
	skPtr := (*C.uchar)(unsafe.Pointer(&sk[0]))

	switch k.variant {
	case Variant653:
		C.sntrup653_keypair(pkPtr, skPtr)
	case Variant761:
		C.sntrup761_keypair(pkPtr, skPtr)
	case Variant857:
		C.sntrup857_keypair(pkPtr, skPtr)
	case Variant953:
		C.sntrup953_keypair(pkPtr, skPtr)
	case Variant1013:
		C.sntrup1013_keypair(pkPtr, skPtr)
	case Variant1277:
		C.sntrup1277_keypair(pkPtr, skPtr)
	default:
		return nil, nil, errors.New("ntruprime: unknown variant")
	}
	return pk, sk, nil
}

// Encapsulate generates a ciphertext and shared secret using the public key.
func (k *KEM) Encapsulate(publicKey []byte) (ciphertext, sharedSecret []byte, err error) {
	if len(publicKey) != k.PublicKeySize() {
		return nil, nil, errors.New("ntruprime: invalid public key size")
	}
	ct := make([]byte, k.CiphertextSize())
	ss := make([]byte, k.SharedSecretSize())
	pkPtr := (*C.uchar)(unsafe.Pointer(&publicKey[0]))
	ctPtr := (*C.uchar)(unsafe.Pointer(&ct[0]))
	ssPtr := (*C.uchar)(unsafe.Pointer(&ss[0]))

	switch k.variant {
	case Variant653:
		C.sntrup653_enc(ctPtr, ssPtr, pkPtr)
	case Variant761:
		C.sntrup761_enc(ctPtr, ssPtr, pkPtr)
	case Variant857:
		C.sntrup857_enc(ctPtr, ssPtr, pkPtr)
	case Variant953:
		C.sntrup953_enc(ctPtr, ssPtr, pkPtr)
	case Variant1013:
		C.sntrup1013_enc(ctPtr, ssPtr, pkPtr)
	case Variant1277:
		C.sntrup1277_enc(ctPtr, ssPtr, pkPtr)
	default:
		return nil, nil, errors.New("ntruprime: unknown variant")
	}
	return ct, ss, nil
}

// Decapsulate recovers the shared secret from a ciphertext using the secret
// key. Streamlined NTRU Prime uses implicit rejection: an invalid ciphertext
// does not produce an error but instead yields a shared secret that is a
// deterministic pseudorandom function of the ciphertext and secret key.
func (k *KEM) Decapsulate(ciphertext, secretKey []byte) (sharedSecret []byte, err error) {
	if len(ciphertext) != k.CiphertextSize() {
		return nil, errors.New("ntruprime: invalid ciphertext size")
	}
	if len(secretKey) != k.SecretKeySize() {
		return nil, errors.New("ntruprime: invalid secret key size")
	}
	ss := make([]byte, k.SharedSecretSize())
	ctPtr := (*C.uchar)(unsafe.Pointer(&ciphertext[0]))
	skPtr := (*C.uchar)(unsafe.Pointer(&secretKey[0]))
	ssPtr := (*C.uchar)(unsafe.Pointer(&ss[0]))

	switch k.variant {
	case Variant653:
		C.sntrup653_dec(ssPtr, ctPtr, skPtr)
	case Variant761:
		C.sntrup761_dec(ssPtr, ctPtr, skPtr)
	case Variant857:
		C.sntrup857_dec(ssPtr, ctPtr, skPtr)
	case Variant953:
		C.sntrup953_dec(ssPtr, ctPtr, skPtr)
	case Variant1013:
		C.sntrup1013_dec(ssPtr, ctPtr, skPtr)
	case Variant1277:
		C.sntrup1277_dec(ssPtr, ctPtr, skPtr)
	default:
		return nil, errors.New("ntruprime: unknown variant")
	}
	return ss, nil
}
