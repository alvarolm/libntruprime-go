# libntruprime-go

Go wrapper for [libntruprime](https://libntruprime.cr.yp.to/) which implements Streamlined NTRU Prime, a post-quantum key encapsulation mechanism (KEM). The sntrup761 parameter set is used by OpenSSH as its default key exchange.

- prebuilt libraries for `linux/amd64` and `linux/arm64` included; run `./update_libs.sh` to refresh them from Debian packages (requires `curl` and `dpkg-deb`)

## Usage

```go
package main

import (
	"fmt"
	"github.com/alvarolm/libntruprime-go"
)

func main() {
	kem := ntruprime.New(ntruprime.Variant761)

	pk, sk, err := kem.GenerateKeyPair()
	if err != nil {
		panic(err)
	}

	ct, ss1, err := kem.Encapsulate(pk)
	if err != nil {
		panic(err)
	}

	ss2, err := kem.Decapsulate(ct, sk)
	if err != nil {
		panic(err)
	}

	fmt.Println("shared secrets match:", string(ss1) == string(ss2))
}
```

## Install

```
go get github.com/alvarolm/libntruprime-go
```

Requires CGO (`CGO_ENABLED=1`).

## Variants

All 6 Streamlined NTRU Prime parameter sets are supported:

| Variant       | Public key | Secret key | Ciphertext |
|---------------|------------|------------|------------|
| `Variant653`  | 994 B      | 1518 B     | 897 B      |
| `Variant761`  | 1158 B     | 1763 B     | 1039 B     |
| `Variant857`  | 1322 B     | 1999 B     | 1184 B     |
| `Variant953`  | 1505 B     | 2254 B     | 1349 B     |
| `Variant1013` | 1623 B     | 2417 B     | 1455 B     |
| `Variant1277` | 2067 B     | 3059 B     | 1847 B     |

The shared secret is always 32 bytes regardless of variant.

Note that Streamlined NTRU Prime uses implicit rejection: `Decapsulate` never fails on a syntactically valid but corrupted ciphertext; it instead returns a shared secret that is a deterministic pseudorandom function of the ciphertext and secret key, which will not match the sender's.

## Updating the C libraries

`update_libs.sh` downloads the latest prebuilt `.deb` packages for `libntruprime-dev` and `librandombytes-dev` from Debian and copies the static libraries and headers into `lib/`:

```
./update_libs.sh
```

Requirements: `curl`, `dpkg-deb` (available on any Debian/Ubuntu system).

After running, `lib/` will contain:

```
lib/
  amd64/  libntruprime.a  librandombytes.a  librandombytes-kernel.a
  arm64/  libntruprime.a  librandombytes.a  librandombytes-kernel.a
  include/ ntruprime.h
```

## Benchmark results

```bash
goos: linux
goarch: amd64
pkg: github.com/alvarolm/libntruprime-go
cpu: 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz
BenchmarkGenerateKeyPair/653-6         	    6309	    194348 ns/op	    2560 B/op	       2 allocs/op
BenchmarkGenerateKeyPair/761-6         	    4668	    260405 ns/op	    3072 B/op	       2 allocs/op
BenchmarkGenerateKeyPair/857-6         	    3928	    318204 ns/op	    3456 B/op	       2 allocs/op
BenchmarkGenerateKeyPair/953-6         	    3170	    382521 ns/op	    3840 B/op	       2 allocs/op
BenchmarkGenerateKeyPair/1013-6        	    2612	    466889 ns/op	    4480 B/op	       2 allocs/op
BenchmarkGenerateKeyPair/1277-6        	    1860	    670484 ns/op	    5376 B/op	       2 allocs/op
BenchmarkEncapsulate/653-6             	   72250	     16923 ns/op	    1056 B/op	       2 allocs/op
BenchmarkEncapsulate/761-6             	   61393	     19149 ns/op	    1184 B/op	       2 allocs/op
BenchmarkEncapsulate/857-6             	   55004	     21984 ns/op	    1312 B/op	       2 allocs/op
BenchmarkEncapsulate/953-6             	   52140	     26358 ns/op	    1440 B/op	       2 allocs/op
BenchmarkEncapsulate/1013-6            	   46342	     23601 ns/op	    1568 B/op	       2 allocs/op
BenchmarkEncapsulate/1277-6            	   32910	     34141 ns/op	    2080 B/op	       2 allocs/op
BenchmarkDecapsulate/653-6             	   53144	     22560 ns/op	      32 B/op	       1 allocs/op
BenchmarkDecapsulate/761-6             	   51910	     21316 ns/op	      32 B/op	       1 allocs/op
BenchmarkDecapsulate/857-6             	   45534	     28705 ns/op	      32 B/op	       1 allocs/op
BenchmarkDecapsulate/953-6             	   37863	     34131 ns/op	      32 B/op	       1 allocs/op
BenchmarkDecapsulate/1013-6            	   40609	     30487 ns/op	      32 B/op	       1 allocs/op
BenchmarkDecapsulate/1277-6            	   29337	     38129 ns/op	      32 B/op	       1 allocs/op
```

claude code was used to implement most of this project
