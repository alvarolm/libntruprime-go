/*

All of the stable libntruprime API functions have names beginning

    sntrup{653,761,857,953,1013,1277}

whereas functions beginning ntruprime_ (e.g., functions used for internal
tests and benchmarks) may change.

*/

#ifndef ntruprime_h
#define ntruprime_h

#ifdef __cplusplus
extern "C" {
#endif

#define sntrup653_keypair ntruprime_kem_sntrup653_keypair
#define sntrup653_enc ntruprime_kem_sntrup653_enc
#define sntrup653_dec ntruprime_kem_sntrup653_dec
#define sntrup653_SECRETKEYBYTES ntruprime_kem_sntrup653_SECRETKEYBYTES
#define sntrup653_PUBLICKEYBYTES ntruprime_kem_sntrup653_PUBLICKEYBYTES
#define sntrup653_CIPHERTEXTBYTES ntruprime_kem_sntrup653_CIPHERTEXTBYTES
#define sntrup653_BYTES ntruprime_kem_sntrup653_BYTES

#define sntrup761_keypair ntruprime_kem_sntrup761_keypair
#define sntrup761_enc ntruprime_kem_sntrup761_enc
#define sntrup761_dec ntruprime_kem_sntrup761_dec
#define sntrup761_SECRETKEYBYTES ntruprime_kem_sntrup761_SECRETKEYBYTES
#define sntrup761_PUBLICKEYBYTES ntruprime_kem_sntrup761_PUBLICKEYBYTES
#define sntrup761_CIPHERTEXTBYTES ntruprime_kem_sntrup761_CIPHERTEXTBYTES
#define sntrup761_BYTES ntruprime_kem_sntrup761_BYTES

#define sntrup857_keypair ntruprime_kem_sntrup857_keypair
#define sntrup857_enc ntruprime_kem_sntrup857_enc
#define sntrup857_dec ntruprime_kem_sntrup857_dec
#define sntrup857_SECRETKEYBYTES ntruprime_kem_sntrup857_SECRETKEYBYTES
#define sntrup857_PUBLICKEYBYTES ntruprime_kem_sntrup857_PUBLICKEYBYTES
#define sntrup857_CIPHERTEXTBYTES ntruprime_kem_sntrup857_CIPHERTEXTBYTES
#define sntrup857_BYTES ntruprime_kem_sntrup857_BYTES

#define sntrup953_keypair ntruprime_kem_sntrup953_keypair
#define sntrup953_enc ntruprime_kem_sntrup953_enc
#define sntrup953_dec ntruprime_kem_sntrup953_dec
#define sntrup953_SECRETKEYBYTES ntruprime_kem_sntrup953_SECRETKEYBYTES
#define sntrup953_PUBLICKEYBYTES ntruprime_kem_sntrup953_PUBLICKEYBYTES
#define sntrup953_CIPHERTEXTBYTES ntruprime_kem_sntrup953_CIPHERTEXTBYTES
#define sntrup953_BYTES ntruprime_kem_sntrup953_BYTES

#define sntrup1013_keypair ntruprime_kem_sntrup1013_keypair
#define sntrup1013_enc ntruprime_kem_sntrup1013_enc
#define sntrup1013_dec ntruprime_kem_sntrup1013_dec
#define sntrup1013_SECRETKEYBYTES ntruprime_kem_sntrup1013_SECRETKEYBYTES
#define sntrup1013_PUBLICKEYBYTES ntruprime_kem_sntrup1013_PUBLICKEYBYTES
#define sntrup1013_CIPHERTEXTBYTES ntruprime_kem_sntrup1013_CIPHERTEXTBYTES
#define sntrup1013_BYTES ntruprime_kem_sntrup1013_BYTES

#define sntrup1277_keypair ntruprime_kem_sntrup1277_keypair
#define sntrup1277_enc ntruprime_kem_sntrup1277_enc
#define sntrup1277_dec ntruprime_kem_sntrup1277_dec
#define sntrup1277_SECRETKEYBYTES ntruprime_kem_sntrup1277_SECRETKEYBYTES
#define sntrup1277_PUBLICKEYBYTES ntruprime_kem_sntrup1277_PUBLICKEYBYTES
#define sntrup1277_CIPHERTEXTBYTES ntruprime_kem_sntrup1277_CIPHERTEXTBYTES
#define sntrup1277_BYTES ntruprime_kem_sntrup1277_BYTES


#define ntruprime_version "20260717"
#define ntruprime_arch "amd64"

extern void ntruprime_cpuid(unsigned int *,long long);

#define ntruprime_verify_BYTES 897

#define ntruprime_verify_897_BYTES 897

#define ntruprime_verify ntruprime_verify_897
#define ntruprime_dispatch_verify ntruprime_dispatch_verify_897

extern int ntruprime_verify_897(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_897(long long))(const unsigned char *,const unsigned char *);

#define ntruprime_verify_implementation ntruprime_verify_897_implementation
#define ntruprime_verify_compiler ntruprime_verify_897_compiler
#define ntruprime_dispatch_verify_implementation ntruprime_dispatch_verify_897_implementation
#define ntruprime_dispatch_verify_compiler ntruprime_dispatch_verify_897_compiler
#define ntruprime_numimpl_verify ntruprime_numimpl_verify_897

extern const char *ntruprime_verify_897_implementation(void);
extern const char *ntruprime_verify_897_compiler(void);
extern const char *ntruprime_dispatch_verify_897_implementation(long long);
extern const char *ntruprime_dispatch_verify_897_compiler(long long);
extern long long ntruprime_numimpl_verify_897(void);

#define ntruprime_verify_1039_BYTES 1039

extern int ntruprime_verify_1039(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_1039(long long))(const unsigned char *,const unsigned char *);

extern const char *ntruprime_verify_1039_implementation(void);
extern const char *ntruprime_verify_1039_compiler(void);
extern const char *ntruprime_dispatch_verify_1039_implementation(long long);
extern const char *ntruprime_dispatch_verify_1039_compiler(long long);
extern long long ntruprime_numimpl_verify_1039(void);

#define ntruprime_verify_1184_BYTES 1184

extern int ntruprime_verify_1184(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_1184(long long))(const unsigned char *,const unsigned char *);

extern const char *ntruprime_verify_1184_implementation(void);
extern const char *ntruprime_verify_1184_compiler(void);
extern const char *ntruprime_dispatch_verify_1184_implementation(long long);
extern const char *ntruprime_dispatch_verify_1184_compiler(long long);
extern long long ntruprime_numimpl_verify_1184(void);

#define ntruprime_verify_1349_BYTES 1349

extern int ntruprime_verify_1349(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_1349(long long))(const unsigned char *,const unsigned char *);

extern const char *ntruprime_verify_1349_implementation(void);
extern const char *ntruprime_verify_1349_compiler(void);
extern const char *ntruprime_dispatch_verify_1349_implementation(long long);
extern const char *ntruprime_dispatch_verify_1349_compiler(long long);
extern long long ntruprime_numimpl_verify_1349(void);

#define ntruprime_verify_1455_BYTES 1455

extern int ntruprime_verify_1455(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_1455(long long))(const unsigned char *,const unsigned char *);

extern const char *ntruprime_verify_1455_implementation(void);
extern const char *ntruprime_verify_1455_compiler(void);
extern const char *ntruprime_dispatch_verify_1455_implementation(long long);
extern const char *ntruprime_dispatch_verify_1455_compiler(long long);
extern long long ntruprime_numimpl_verify_1455(void);

#define ntruprime_verify_1847_BYTES 1847

extern int ntruprime_verify_1847(const unsigned char *,const unsigned char *);
extern int (*ntruprime_dispatch_verify_1847(long long))(const unsigned char *,const unsigned char *);

extern const char *ntruprime_verify_1847_implementation(void);
extern const char *ntruprime_verify_1847_compiler(void);
extern const char *ntruprime_dispatch_verify_1847_implementation(long long);
extern const char *ntruprime_dispatch_verify_1847_compiler(long long);
extern long long ntruprime_numimpl_verify_1847(void);

#define ntruprime_decode_STRBYTES 164
#define ntruprime_decode_ITEMS 653
#define ntruprime_decode_ITEMBYTES 1

#define ntruprime_decode_653x3_STRBYTES 164
#define ntruprime_decode_653x3_ITEMS 653
#define ntruprime_decode_653x3_ITEMBYTES 1

#define ntruprime_decode ntruprime_decode_653x3
#define ntruprime_dispatch_decode ntruprime_dispatch_decode_653x3

extern void ntruprime_decode_653x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_653x3(long long))(void *,const unsigned char *);

#define ntruprime_decode_implementation ntruprime_decode_653x3_implementation
#define ntruprime_decode_compiler ntruprime_decode_653x3_compiler
#define ntruprime_dispatch_decode_implementation ntruprime_dispatch_decode_653x3_implementation
#define ntruprime_dispatch_decode_compiler ntruprime_dispatch_decode_653x3_compiler
#define ntruprime_numimpl_decode ntruprime_numimpl_decode_653x3

extern const char *ntruprime_decode_653x3_implementation(void);
extern const char *ntruprime_decode_653x3_compiler(void);
extern const char *ntruprime_dispatch_decode_653x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_653x3_compiler(long long);
extern long long ntruprime_numimpl_decode_653x3(void);

#define ntruprime_decode_653x1541_STRBYTES 865
#define ntruprime_decode_653x1541_ITEMS 653
#define ntruprime_decode_653x1541_ITEMBYTES 2

extern void ntruprime_decode_653x1541(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_653x1541(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_653x1541_implementation(void);
extern const char *ntruprime_decode_653x1541_compiler(void);
extern const char *ntruprime_dispatch_decode_653x1541_implementation(long long);
extern const char *ntruprime_dispatch_decode_653x1541_compiler(long long);
extern long long ntruprime_numimpl_decode_653x1541(void);

#define ntruprime_decode_653x4621_STRBYTES 994
#define ntruprime_decode_653x4621_ITEMS 653
#define ntruprime_decode_653x4621_ITEMBYTES 2

extern void ntruprime_decode_653x4621(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_653x4621(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_653x4621_implementation(void);
extern const char *ntruprime_decode_653x4621_compiler(void);
extern const char *ntruprime_dispatch_decode_653x4621_implementation(long long);
extern const char *ntruprime_dispatch_decode_653x4621_compiler(long long);
extern long long ntruprime_numimpl_decode_653x4621(void);

#define ntruprime_decode_653xint16_STRBYTES 1306
#define ntruprime_decode_653xint16_ITEMS 653
#define ntruprime_decode_653xint16_ITEMBYTES 2

extern void ntruprime_decode_653xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_653xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_653xint16_implementation(void);
extern const char *ntruprime_decode_653xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_653xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_653xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_653xint16(void);

#define ntruprime_decode_653xint32_STRBYTES 2612
#define ntruprime_decode_653xint32_ITEMS 653
#define ntruprime_decode_653xint32_ITEMBYTES 4

extern void ntruprime_decode_653xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_653xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_653xint32_implementation(void);
extern const char *ntruprime_decode_653xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_653xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_653xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_653xint32(void);

#define ntruprime_decode_761x3_STRBYTES 191
#define ntruprime_decode_761x3_ITEMS 761
#define ntruprime_decode_761x3_ITEMBYTES 1

extern void ntruprime_decode_761x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_761x3(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_761x3_implementation(void);
extern const char *ntruprime_decode_761x3_compiler(void);
extern const char *ntruprime_dispatch_decode_761x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_761x3_compiler(long long);
extern long long ntruprime_numimpl_decode_761x3(void);

#define ntruprime_decode_761x1531_STRBYTES 1007
#define ntruprime_decode_761x1531_ITEMS 761
#define ntruprime_decode_761x1531_ITEMBYTES 2

extern void ntruprime_decode_761x1531(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_761x1531(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_761x1531_implementation(void);
extern const char *ntruprime_decode_761x1531_compiler(void);
extern const char *ntruprime_dispatch_decode_761x1531_implementation(long long);
extern const char *ntruprime_dispatch_decode_761x1531_compiler(long long);
extern long long ntruprime_numimpl_decode_761x1531(void);

#define ntruprime_decode_761x4591_STRBYTES 1158
#define ntruprime_decode_761x4591_ITEMS 761
#define ntruprime_decode_761x4591_ITEMBYTES 2

extern void ntruprime_decode_761x4591(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_761x4591(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_761x4591_implementation(void);
extern const char *ntruprime_decode_761x4591_compiler(void);
extern const char *ntruprime_dispatch_decode_761x4591_implementation(long long);
extern const char *ntruprime_dispatch_decode_761x4591_compiler(long long);
extern long long ntruprime_numimpl_decode_761x4591(void);

#define ntruprime_decode_761xint16_STRBYTES 1522
#define ntruprime_decode_761xint16_ITEMS 761
#define ntruprime_decode_761xint16_ITEMBYTES 2

extern void ntruprime_decode_761xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_761xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_761xint16_implementation(void);
extern const char *ntruprime_decode_761xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_761xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_761xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_761xint16(void);

#define ntruprime_decode_761xint32_STRBYTES 3044
#define ntruprime_decode_761xint32_ITEMS 761
#define ntruprime_decode_761xint32_ITEMBYTES 4

extern void ntruprime_decode_761xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_761xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_761xint32_implementation(void);
extern const char *ntruprime_decode_761xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_761xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_761xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_761xint32(void);

#define ntruprime_decode_857x3_STRBYTES 215
#define ntruprime_decode_857x3_ITEMS 857
#define ntruprime_decode_857x3_ITEMBYTES 1

extern void ntruprime_decode_857x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_857x3(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_857x3_implementation(void);
extern const char *ntruprime_decode_857x3_compiler(void);
extern const char *ntruprime_dispatch_decode_857x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_857x3_compiler(long long);
extern long long ntruprime_numimpl_decode_857x3(void);

#define ntruprime_decode_857x1723_STRBYTES 1152
#define ntruprime_decode_857x1723_ITEMS 857
#define ntruprime_decode_857x1723_ITEMBYTES 2

extern void ntruprime_decode_857x1723(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_857x1723(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_857x1723_implementation(void);
extern const char *ntruprime_decode_857x1723_compiler(void);
extern const char *ntruprime_dispatch_decode_857x1723_implementation(long long);
extern const char *ntruprime_dispatch_decode_857x1723_compiler(long long);
extern long long ntruprime_numimpl_decode_857x1723(void);

#define ntruprime_decode_857x5167_STRBYTES 1322
#define ntruprime_decode_857x5167_ITEMS 857
#define ntruprime_decode_857x5167_ITEMBYTES 2

extern void ntruprime_decode_857x5167(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_857x5167(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_857x5167_implementation(void);
extern const char *ntruprime_decode_857x5167_compiler(void);
extern const char *ntruprime_dispatch_decode_857x5167_implementation(long long);
extern const char *ntruprime_dispatch_decode_857x5167_compiler(long long);
extern long long ntruprime_numimpl_decode_857x5167(void);

#define ntruprime_decode_857xint16_STRBYTES 1714
#define ntruprime_decode_857xint16_ITEMS 857
#define ntruprime_decode_857xint16_ITEMBYTES 2

extern void ntruprime_decode_857xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_857xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_857xint16_implementation(void);
extern const char *ntruprime_decode_857xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_857xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_857xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_857xint16(void);

#define ntruprime_decode_857xint32_STRBYTES 3428
#define ntruprime_decode_857xint32_ITEMS 857
#define ntruprime_decode_857xint32_ITEMBYTES 4

extern void ntruprime_decode_857xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_857xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_857xint32_implementation(void);
extern const char *ntruprime_decode_857xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_857xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_857xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_857xint32(void);

#define ntruprime_decode_953x3_STRBYTES 239
#define ntruprime_decode_953x3_ITEMS 953
#define ntruprime_decode_953x3_ITEMBYTES 1

extern void ntruprime_decode_953x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_953x3(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_953x3_implementation(void);
extern const char *ntruprime_decode_953x3_compiler(void);
extern const char *ntruprime_dispatch_decode_953x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_953x3_compiler(long long);
extern long long ntruprime_numimpl_decode_953x3(void);

#define ntruprime_decode_953x2115_STRBYTES 1317
#define ntruprime_decode_953x2115_ITEMS 953
#define ntruprime_decode_953x2115_ITEMBYTES 2

extern void ntruprime_decode_953x2115(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_953x2115(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_953x2115_implementation(void);
extern const char *ntruprime_decode_953x2115_compiler(void);
extern const char *ntruprime_dispatch_decode_953x2115_implementation(long long);
extern const char *ntruprime_dispatch_decode_953x2115_compiler(long long);
extern long long ntruprime_numimpl_decode_953x2115(void);

#define ntruprime_decode_953x6343_STRBYTES 1505
#define ntruprime_decode_953x6343_ITEMS 953
#define ntruprime_decode_953x6343_ITEMBYTES 2

extern void ntruprime_decode_953x6343(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_953x6343(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_953x6343_implementation(void);
extern const char *ntruprime_decode_953x6343_compiler(void);
extern const char *ntruprime_dispatch_decode_953x6343_implementation(long long);
extern const char *ntruprime_dispatch_decode_953x6343_compiler(long long);
extern long long ntruprime_numimpl_decode_953x6343(void);

#define ntruprime_decode_953xint16_STRBYTES 1906
#define ntruprime_decode_953xint16_ITEMS 953
#define ntruprime_decode_953xint16_ITEMBYTES 2

extern void ntruprime_decode_953xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_953xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_953xint16_implementation(void);
extern const char *ntruprime_decode_953xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_953xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_953xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_953xint16(void);

#define ntruprime_decode_953xint32_STRBYTES 3812
#define ntruprime_decode_953xint32_ITEMS 953
#define ntruprime_decode_953xint32_ITEMBYTES 4

extern void ntruprime_decode_953xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_953xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_953xint32_implementation(void);
extern const char *ntruprime_decode_953xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_953xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_953xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_953xint32(void);

#define ntruprime_decode_1013x3_STRBYTES 254
#define ntruprime_decode_1013x3_ITEMS 1013
#define ntruprime_decode_1013x3_ITEMBYTES 1

extern void ntruprime_decode_1013x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1013x3(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1013x3_implementation(void);
extern const char *ntruprime_decode_1013x3_compiler(void);
extern const char *ntruprime_dispatch_decode_1013x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_1013x3_compiler(long long);
extern long long ntruprime_numimpl_decode_1013x3(void);

#define ntruprime_decode_1013x2393_STRBYTES 1423
#define ntruprime_decode_1013x2393_ITEMS 1013
#define ntruprime_decode_1013x2393_ITEMBYTES 2

extern void ntruprime_decode_1013x2393(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1013x2393(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1013x2393_implementation(void);
extern const char *ntruprime_decode_1013x2393_compiler(void);
extern const char *ntruprime_dispatch_decode_1013x2393_implementation(long long);
extern const char *ntruprime_dispatch_decode_1013x2393_compiler(long long);
extern long long ntruprime_numimpl_decode_1013x2393(void);

#define ntruprime_decode_1013x7177_STRBYTES 1623
#define ntruprime_decode_1013x7177_ITEMS 1013
#define ntruprime_decode_1013x7177_ITEMBYTES 2

extern void ntruprime_decode_1013x7177(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1013x7177(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1013x7177_implementation(void);
extern const char *ntruprime_decode_1013x7177_compiler(void);
extern const char *ntruprime_dispatch_decode_1013x7177_implementation(long long);
extern const char *ntruprime_dispatch_decode_1013x7177_compiler(long long);
extern long long ntruprime_numimpl_decode_1013x7177(void);

#define ntruprime_decode_1013xint16_STRBYTES 2026
#define ntruprime_decode_1013xint16_ITEMS 1013
#define ntruprime_decode_1013xint16_ITEMBYTES 2

extern void ntruprime_decode_1013xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1013xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1013xint16_implementation(void);
extern const char *ntruprime_decode_1013xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_1013xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_1013xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_1013xint16(void);

#define ntruprime_decode_1013xint32_STRBYTES 4052
#define ntruprime_decode_1013xint32_ITEMS 1013
#define ntruprime_decode_1013xint32_ITEMBYTES 4

extern void ntruprime_decode_1013xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1013xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1013xint32_implementation(void);
extern const char *ntruprime_decode_1013xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_1013xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_1013xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_1013xint32(void);

#define ntruprime_decode_1277x3_STRBYTES 320
#define ntruprime_decode_1277x3_ITEMS 1277
#define ntruprime_decode_1277x3_ITEMBYTES 1

extern void ntruprime_decode_1277x3(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1277x3(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1277x3_implementation(void);
extern const char *ntruprime_decode_1277x3_compiler(void);
extern const char *ntruprime_dispatch_decode_1277x3_implementation(long long);
extern const char *ntruprime_dispatch_decode_1277x3_compiler(long long);
extern long long ntruprime_numimpl_decode_1277x3(void);

#define ntruprime_decode_1277x2627_STRBYTES 1815
#define ntruprime_decode_1277x2627_ITEMS 1277
#define ntruprime_decode_1277x2627_ITEMBYTES 2

extern void ntruprime_decode_1277x2627(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1277x2627(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1277x2627_implementation(void);
extern const char *ntruprime_decode_1277x2627_compiler(void);
extern const char *ntruprime_dispatch_decode_1277x2627_implementation(long long);
extern const char *ntruprime_dispatch_decode_1277x2627_compiler(long long);
extern long long ntruprime_numimpl_decode_1277x2627(void);

#define ntruprime_decode_1277x7879_STRBYTES 2067
#define ntruprime_decode_1277x7879_ITEMS 1277
#define ntruprime_decode_1277x7879_ITEMBYTES 2

extern void ntruprime_decode_1277x7879(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1277x7879(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1277x7879_implementation(void);
extern const char *ntruprime_decode_1277x7879_compiler(void);
extern const char *ntruprime_dispatch_decode_1277x7879_implementation(long long);
extern const char *ntruprime_dispatch_decode_1277x7879_compiler(long long);
extern long long ntruprime_numimpl_decode_1277x7879(void);

#define ntruprime_decode_1277xint16_STRBYTES 2554
#define ntruprime_decode_1277xint16_ITEMS 1277
#define ntruprime_decode_1277xint16_ITEMBYTES 2

extern void ntruprime_decode_1277xint16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1277xint16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1277xint16_implementation(void);
extern const char *ntruprime_decode_1277xint16_compiler(void);
extern const char *ntruprime_dispatch_decode_1277xint16_implementation(long long);
extern const char *ntruprime_dispatch_decode_1277xint16_compiler(long long);
extern long long ntruprime_numimpl_decode_1277xint16(void);

#define ntruprime_decode_1277xint32_STRBYTES 5108
#define ntruprime_decode_1277xint32_ITEMS 1277
#define ntruprime_decode_1277xint32_ITEMBYTES 4

extern void ntruprime_decode_1277xint32(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_1277xint32(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_1277xint32_implementation(void);
extern const char *ntruprime_decode_1277xint32_compiler(void);
extern const char *ntruprime_dispatch_decode_1277xint32_implementation(long long);
extern const char *ntruprime_dispatch_decode_1277xint32_compiler(long long);
extern long long ntruprime_numimpl_decode_1277xint32(void);

#define ntruprime_decode_int16_STRBYTES 2
#define ntruprime_decode_int16_ITEMS 1
#define ntruprime_decode_int16_ITEMBYTES 2

extern void ntruprime_decode_int16(void *,const unsigned char *);
extern void (*ntruprime_dispatch_decode_int16(long long))(void *,const unsigned char *);

extern const char *ntruprime_decode_int16_implementation(void);
extern const char *ntruprime_decode_int16_compiler(void);
extern const char *ntruprime_dispatch_decode_int16_implementation(long long);
extern const char *ntruprime_dispatch_decode_int16_compiler(long long);
extern long long ntruprime_numimpl_decode_int16(void);

#define ntruprime_encode_STRBYTES 164
#define ntruprime_encode_ITEMS 653
#define ntruprime_encode_ITEMBYTES 1

#define ntruprime_encode_653x3_STRBYTES 164
#define ntruprime_encode_653x3_ITEMS 653
#define ntruprime_encode_653x3_ITEMBYTES 1

#define ntruprime_encode ntruprime_encode_653x3
#define ntruprime_dispatch_encode ntruprime_dispatch_encode_653x3

extern void ntruprime_encode_653x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653x3(long long))(unsigned char *,const void *);

#define ntruprime_encode_implementation ntruprime_encode_653x3_implementation
#define ntruprime_encode_compiler ntruprime_encode_653x3_compiler
#define ntruprime_dispatch_encode_implementation ntruprime_dispatch_encode_653x3_implementation
#define ntruprime_dispatch_encode_compiler ntruprime_dispatch_encode_653x3_compiler
#define ntruprime_numimpl_encode ntruprime_numimpl_encode_653x3

extern const char *ntruprime_encode_653x3_implementation(void);
extern const char *ntruprime_encode_653x3_compiler(void);
extern const char *ntruprime_dispatch_encode_653x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_653x3_compiler(long long);
extern long long ntruprime_numimpl_encode_653x3(void);

#define ntruprime_encode_653x1541_STRBYTES 865
#define ntruprime_encode_653x1541_ITEMS 653
#define ntruprime_encode_653x1541_ITEMBYTES 2

extern void ntruprime_encode_653x1541(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653x1541(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_653x1541_implementation(void);
extern const char *ntruprime_encode_653x1541_compiler(void);
extern const char *ntruprime_dispatch_encode_653x1541_implementation(long long);
extern const char *ntruprime_dispatch_encode_653x1541_compiler(long long);
extern long long ntruprime_numimpl_encode_653x1541(void);

#define ntruprime_encode_653x1541round_STRBYTES 865
#define ntruprime_encode_653x1541round_ITEMS 653
#define ntruprime_encode_653x1541round_ITEMBYTES 2

extern void ntruprime_encode_653x1541round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653x1541round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_653x1541round_implementation(void);
extern const char *ntruprime_encode_653x1541round_compiler(void);
extern const char *ntruprime_dispatch_encode_653x1541round_implementation(long long);
extern const char *ntruprime_dispatch_encode_653x1541round_compiler(long long);
extern long long ntruprime_numimpl_encode_653x1541round(void);

#define ntruprime_encode_653x4621_STRBYTES 994
#define ntruprime_encode_653x4621_ITEMS 653
#define ntruprime_encode_653x4621_ITEMBYTES 2

extern void ntruprime_encode_653x4621(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653x4621(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_653x4621_implementation(void);
extern const char *ntruprime_encode_653x4621_compiler(void);
extern const char *ntruprime_dispatch_encode_653x4621_implementation(long long);
extern const char *ntruprime_dispatch_encode_653x4621_compiler(long long);
extern long long ntruprime_numimpl_encode_653x4621(void);

#define ntruprime_encode_653xfreeze3_STRBYTES 653
#define ntruprime_encode_653xfreeze3_ITEMS 653
#define ntruprime_encode_653xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_653xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_653xfreeze3_implementation(void);
extern const char *ntruprime_encode_653xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_653xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_653xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_653xfreeze3(void);

#define ntruprime_encode_653xint16_STRBYTES 1306
#define ntruprime_encode_653xint16_ITEMS 653
#define ntruprime_encode_653xint16_ITEMBYTES 2

extern void ntruprime_encode_653xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_653xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_653xint16_implementation(void);
extern const char *ntruprime_encode_653xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_653xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_653xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_653xint16(void);

#define ntruprime_encode_761x3_STRBYTES 191
#define ntruprime_encode_761x3_ITEMS 761
#define ntruprime_encode_761x3_ITEMBYTES 1

extern void ntruprime_encode_761x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761x3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761x3_implementation(void);
extern const char *ntruprime_encode_761x3_compiler(void);
extern const char *ntruprime_dispatch_encode_761x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_761x3_compiler(long long);
extern long long ntruprime_numimpl_encode_761x3(void);

#define ntruprime_encode_761x1531_STRBYTES 1007
#define ntruprime_encode_761x1531_ITEMS 761
#define ntruprime_encode_761x1531_ITEMBYTES 2

extern void ntruprime_encode_761x1531(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761x1531(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761x1531_implementation(void);
extern const char *ntruprime_encode_761x1531_compiler(void);
extern const char *ntruprime_dispatch_encode_761x1531_implementation(long long);
extern const char *ntruprime_dispatch_encode_761x1531_compiler(long long);
extern long long ntruprime_numimpl_encode_761x1531(void);

#define ntruprime_encode_761x1531round_STRBYTES 1007
#define ntruprime_encode_761x1531round_ITEMS 761
#define ntruprime_encode_761x1531round_ITEMBYTES 2

extern void ntruprime_encode_761x1531round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761x1531round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761x1531round_implementation(void);
extern const char *ntruprime_encode_761x1531round_compiler(void);
extern const char *ntruprime_dispatch_encode_761x1531round_implementation(long long);
extern const char *ntruprime_dispatch_encode_761x1531round_compiler(long long);
extern long long ntruprime_numimpl_encode_761x1531round(void);

#define ntruprime_encode_761x4591_STRBYTES 1158
#define ntruprime_encode_761x4591_ITEMS 761
#define ntruprime_encode_761x4591_ITEMBYTES 2

extern void ntruprime_encode_761x4591(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761x4591(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761x4591_implementation(void);
extern const char *ntruprime_encode_761x4591_compiler(void);
extern const char *ntruprime_dispatch_encode_761x4591_implementation(long long);
extern const char *ntruprime_dispatch_encode_761x4591_compiler(long long);
extern long long ntruprime_numimpl_encode_761x4591(void);

#define ntruprime_encode_761xfreeze3_STRBYTES 761
#define ntruprime_encode_761xfreeze3_ITEMS 761
#define ntruprime_encode_761xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_761xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761xfreeze3_implementation(void);
extern const char *ntruprime_encode_761xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_761xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_761xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_761xfreeze3(void);

#define ntruprime_encode_761xint16_STRBYTES 1522
#define ntruprime_encode_761xint16_ITEMS 761
#define ntruprime_encode_761xint16_ITEMBYTES 2

extern void ntruprime_encode_761xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_761xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_761xint16_implementation(void);
extern const char *ntruprime_encode_761xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_761xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_761xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_761xint16(void);

#define ntruprime_encode_857x3_STRBYTES 215
#define ntruprime_encode_857x3_ITEMS 857
#define ntruprime_encode_857x3_ITEMBYTES 1

extern void ntruprime_encode_857x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857x3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857x3_implementation(void);
extern const char *ntruprime_encode_857x3_compiler(void);
extern const char *ntruprime_dispatch_encode_857x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_857x3_compiler(long long);
extern long long ntruprime_numimpl_encode_857x3(void);

#define ntruprime_encode_857x1723_STRBYTES 1152
#define ntruprime_encode_857x1723_ITEMS 857
#define ntruprime_encode_857x1723_ITEMBYTES 2

extern void ntruprime_encode_857x1723(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857x1723(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857x1723_implementation(void);
extern const char *ntruprime_encode_857x1723_compiler(void);
extern const char *ntruprime_dispatch_encode_857x1723_implementation(long long);
extern const char *ntruprime_dispatch_encode_857x1723_compiler(long long);
extern long long ntruprime_numimpl_encode_857x1723(void);

#define ntruprime_encode_857x1723round_STRBYTES 1152
#define ntruprime_encode_857x1723round_ITEMS 857
#define ntruprime_encode_857x1723round_ITEMBYTES 2

extern void ntruprime_encode_857x1723round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857x1723round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857x1723round_implementation(void);
extern const char *ntruprime_encode_857x1723round_compiler(void);
extern const char *ntruprime_dispatch_encode_857x1723round_implementation(long long);
extern const char *ntruprime_dispatch_encode_857x1723round_compiler(long long);
extern long long ntruprime_numimpl_encode_857x1723round(void);

#define ntruprime_encode_857x5167_STRBYTES 1322
#define ntruprime_encode_857x5167_ITEMS 857
#define ntruprime_encode_857x5167_ITEMBYTES 2

extern void ntruprime_encode_857x5167(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857x5167(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857x5167_implementation(void);
extern const char *ntruprime_encode_857x5167_compiler(void);
extern const char *ntruprime_dispatch_encode_857x5167_implementation(long long);
extern const char *ntruprime_dispatch_encode_857x5167_compiler(long long);
extern long long ntruprime_numimpl_encode_857x5167(void);

#define ntruprime_encode_857xfreeze3_STRBYTES 857
#define ntruprime_encode_857xfreeze3_ITEMS 857
#define ntruprime_encode_857xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_857xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857xfreeze3_implementation(void);
extern const char *ntruprime_encode_857xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_857xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_857xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_857xfreeze3(void);

#define ntruprime_encode_857xint16_STRBYTES 1714
#define ntruprime_encode_857xint16_ITEMS 857
#define ntruprime_encode_857xint16_ITEMBYTES 2

extern void ntruprime_encode_857xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_857xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_857xint16_implementation(void);
extern const char *ntruprime_encode_857xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_857xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_857xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_857xint16(void);

#define ntruprime_encode_953x3_STRBYTES 239
#define ntruprime_encode_953x3_ITEMS 953
#define ntruprime_encode_953x3_ITEMBYTES 1

extern void ntruprime_encode_953x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953x3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953x3_implementation(void);
extern const char *ntruprime_encode_953x3_compiler(void);
extern const char *ntruprime_dispatch_encode_953x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_953x3_compiler(long long);
extern long long ntruprime_numimpl_encode_953x3(void);

#define ntruprime_encode_953x2115_STRBYTES 1317
#define ntruprime_encode_953x2115_ITEMS 953
#define ntruprime_encode_953x2115_ITEMBYTES 2

extern void ntruprime_encode_953x2115(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953x2115(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953x2115_implementation(void);
extern const char *ntruprime_encode_953x2115_compiler(void);
extern const char *ntruprime_dispatch_encode_953x2115_implementation(long long);
extern const char *ntruprime_dispatch_encode_953x2115_compiler(long long);
extern long long ntruprime_numimpl_encode_953x2115(void);

#define ntruprime_encode_953x2115round_STRBYTES 1317
#define ntruprime_encode_953x2115round_ITEMS 953
#define ntruprime_encode_953x2115round_ITEMBYTES 2

extern void ntruprime_encode_953x2115round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953x2115round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953x2115round_implementation(void);
extern const char *ntruprime_encode_953x2115round_compiler(void);
extern const char *ntruprime_dispatch_encode_953x2115round_implementation(long long);
extern const char *ntruprime_dispatch_encode_953x2115round_compiler(long long);
extern long long ntruprime_numimpl_encode_953x2115round(void);

#define ntruprime_encode_953x6343_STRBYTES 1505
#define ntruprime_encode_953x6343_ITEMS 953
#define ntruprime_encode_953x6343_ITEMBYTES 2

extern void ntruprime_encode_953x6343(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953x6343(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953x6343_implementation(void);
extern const char *ntruprime_encode_953x6343_compiler(void);
extern const char *ntruprime_dispatch_encode_953x6343_implementation(long long);
extern const char *ntruprime_dispatch_encode_953x6343_compiler(long long);
extern long long ntruprime_numimpl_encode_953x6343(void);

#define ntruprime_encode_953xfreeze3_STRBYTES 953
#define ntruprime_encode_953xfreeze3_ITEMS 953
#define ntruprime_encode_953xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_953xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953xfreeze3_implementation(void);
extern const char *ntruprime_encode_953xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_953xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_953xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_953xfreeze3(void);

#define ntruprime_encode_953xint16_STRBYTES 1906
#define ntruprime_encode_953xint16_ITEMS 953
#define ntruprime_encode_953xint16_ITEMBYTES 2

extern void ntruprime_encode_953xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_953xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_953xint16_implementation(void);
extern const char *ntruprime_encode_953xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_953xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_953xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_953xint16(void);

#define ntruprime_encode_1013x3_STRBYTES 254
#define ntruprime_encode_1013x3_ITEMS 1013
#define ntruprime_encode_1013x3_ITEMBYTES 1

extern void ntruprime_encode_1013x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013x3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013x3_implementation(void);
extern const char *ntruprime_encode_1013x3_compiler(void);
extern const char *ntruprime_dispatch_encode_1013x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013x3_compiler(long long);
extern long long ntruprime_numimpl_encode_1013x3(void);

#define ntruprime_encode_1013x2393_STRBYTES 1423
#define ntruprime_encode_1013x2393_ITEMS 1013
#define ntruprime_encode_1013x2393_ITEMBYTES 2

extern void ntruprime_encode_1013x2393(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013x2393(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013x2393_implementation(void);
extern const char *ntruprime_encode_1013x2393_compiler(void);
extern const char *ntruprime_dispatch_encode_1013x2393_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013x2393_compiler(long long);
extern long long ntruprime_numimpl_encode_1013x2393(void);

#define ntruprime_encode_1013x2393round_STRBYTES 1423
#define ntruprime_encode_1013x2393round_ITEMS 1013
#define ntruprime_encode_1013x2393round_ITEMBYTES 2

extern void ntruprime_encode_1013x2393round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013x2393round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013x2393round_implementation(void);
extern const char *ntruprime_encode_1013x2393round_compiler(void);
extern const char *ntruprime_dispatch_encode_1013x2393round_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013x2393round_compiler(long long);
extern long long ntruprime_numimpl_encode_1013x2393round(void);

#define ntruprime_encode_1013x7177_STRBYTES 1623
#define ntruprime_encode_1013x7177_ITEMS 1013
#define ntruprime_encode_1013x7177_ITEMBYTES 2

extern void ntruprime_encode_1013x7177(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013x7177(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013x7177_implementation(void);
extern const char *ntruprime_encode_1013x7177_compiler(void);
extern const char *ntruprime_dispatch_encode_1013x7177_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013x7177_compiler(long long);
extern long long ntruprime_numimpl_encode_1013x7177(void);

#define ntruprime_encode_1013xfreeze3_STRBYTES 1013
#define ntruprime_encode_1013xfreeze3_ITEMS 1013
#define ntruprime_encode_1013xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_1013xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013xfreeze3_implementation(void);
extern const char *ntruprime_encode_1013xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_1013xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_1013xfreeze3(void);

#define ntruprime_encode_1013xint16_STRBYTES 2026
#define ntruprime_encode_1013xint16_ITEMS 1013
#define ntruprime_encode_1013xint16_ITEMBYTES 2

extern void ntruprime_encode_1013xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1013xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1013xint16_implementation(void);
extern const char *ntruprime_encode_1013xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_1013xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_1013xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_1013xint16(void);

#define ntruprime_encode_1277x3_STRBYTES 320
#define ntruprime_encode_1277x3_ITEMS 1277
#define ntruprime_encode_1277x3_ITEMBYTES 1

extern void ntruprime_encode_1277x3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277x3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277x3_implementation(void);
extern const char *ntruprime_encode_1277x3_compiler(void);
extern const char *ntruprime_dispatch_encode_1277x3_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277x3_compiler(long long);
extern long long ntruprime_numimpl_encode_1277x3(void);

#define ntruprime_encode_1277x2627_STRBYTES 1815
#define ntruprime_encode_1277x2627_ITEMS 1277
#define ntruprime_encode_1277x2627_ITEMBYTES 2

extern void ntruprime_encode_1277x2627(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277x2627(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277x2627_implementation(void);
extern const char *ntruprime_encode_1277x2627_compiler(void);
extern const char *ntruprime_dispatch_encode_1277x2627_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277x2627_compiler(long long);
extern long long ntruprime_numimpl_encode_1277x2627(void);

#define ntruprime_encode_1277x2627round_STRBYTES 1815
#define ntruprime_encode_1277x2627round_ITEMS 1277
#define ntruprime_encode_1277x2627round_ITEMBYTES 2

extern void ntruprime_encode_1277x2627round(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277x2627round(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277x2627round_implementation(void);
extern const char *ntruprime_encode_1277x2627round_compiler(void);
extern const char *ntruprime_dispatch_encode_1277x2627round_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277x2627round_compiler(long long);
extern long long ntruprime_numimpl_encode_1277x2627round(void);

#define ntruprime_encode_1277x7879_STRBYTES 2067
#define ntruprime_encode_1277x7879_ITEMS 1277
#define ntruprime_encode_1277x7879_ITEMBYTES 2

extern void ntruprime_encode_1277x7879(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277x7879(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277x7879_implementation(void);
extern const char *ntruprime_encode_1277x7879_compiler(void);
extern const char *ntruprime_dispatch_encode_1277x7879_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277x7879_compiler(long long);
extern long long ntruprime_numimpl_encode_1277x7879(void);

#define ntruprime_encode_1277xfreeze3_STRBYTES 1277
#define ntruprime_encode_1277xfreeze3_ITEMS 1277
#define ntruprime_encode_1277xfreeze3_ITEMBYTES 2

extern void ntruprime_encode_1277xfreeze3(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277xfreeze3(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277xfreeze3_implementation(void);
extern const char *ntruprime_encode_1277xfreeze3_compiler(void);
extern const char *ntruprime_dispatch_encode_1277xfreeze3_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277xfreeze3_compiler(long long);
extern long long ntruprime_numimpl_encode_1277xfreeze3(void);

#define ntruprime_encode_1277xint16_STRBYTES 2554
#define ntruprime_encode_1277xint16_ITEMS 1277
#define ntruprime_encode_1277xint16_ITEMBYTES 2

extern void ntruprime_encode_1277xint16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_1277xint16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_1277xint16_implementation(void);
extern const char *ntruprime_encode_1277xint16_compiler(void);
extern const char *ntruprime_dispatch_encode_1277xint16_implementation(long long);
extern const char *ntruprime_dispatch_encode_1277xint16_compiler(long long);
extern long long ntruprime_numimpl_encode_1277xint16(void);

#define ntruprime_encode_int16_STRBYTES 2
#define ntruprime_encode_int16_ITEMS 1
#define ntruprime_encode_int16_ITEMBYTES 2

extern void ntruprime_encode_int16(unsigned char *,const void *);
extern void (*ntruprime_dispatch_encode_int16(long long))(unsigned char *,const void *);

extern const char *ntruprime_encode_int16_implementation(void);
extern const char *ntruprime_encode_int16_compiler(void);
extern const char *ntruprime_dispatch_encode_int16_implementation(long long);
extern const char *ntruprime_dispatch_encode_int16_compiler(long long);
extern long long ntruprime_numimpl_encode_int16(void);

#define ntruprime_sort_BYTES 4

#define ntruprime_sort_int32_BYTES 4

#define ntruprime_sort ntruprime_sort_int32
#define ntruprime_dispatch_sort ntruprime_dispatch_sort_int32

extern void ntruprime_sort_int32(void *,long long);
extern void (*ntruprime_dispatch_sort_int32(long long))(void *,long long);

#define ntruprime_sort_implementation ntruprime_sort_int32_implementation
#define ntruprime_sort_compiler ntruprime_sort_int32_compiler
#define ntruprime_dispatch_sort_implementation ntruprime_dispatch_sort_int32_implementation
#define ntruprime_dispatch_sort_compiler ntruprime_dispatch_sort_int32_compiler
#define ntruprime_numimpl_sort ntruprime_numimpl_sort_int32

extern const char *ntruprime_sort_int32_implementation(void);
extern const char *ntruprime_sort_int32_compiler(void);
extern const char *ntruprime_dispatch_sort_int32_implementation(long long);
extern const char *ntruprime_dispatch_sort_int32_compiler(long long);
extern long long ntruprime_numimpl_sort_int32(void);

#define ntruprime_sort_uint32_BYTES 4

extern void ntruprime_sort_uint32(void *,long long);
extern void (*ntruprime_dispatch_sort_uint32(long long))(void *,long long);

extern const char *ntruprime_sort_uint32_implementation(void);
extern const char *ntruprime_sort_uint32_compiler(void);
extern const char *ntruprime_dispatch_sort_uint32_implementation(long long);
extern const char *ntruprime_dispatch_sort_uint32_compiler(long long);
extern long long ntruprime_numimpl_sort_uint32(void);

#define ntruprime_core_OUTPUTBYTES 654
#define ntruprime_core_INPUTBYTES 653
#define ntruprime_core_KEYBYTES 0
#define ntruprime_core_CONSTBYTES 0

#define ntruprime_core_inv3sntrup653_OUTPUTBYTES 654
#define ntruprime_core_inv3sntrup653_INPUTBYTES 653
#define ntruprime_core_inv3sntrup653_KEYBYTES 0
#define ntruprime_core_inv3sntrup653_CONSTBYTES 0

#define ntruprime_core ntruprime_core_inv3sntrup653
#define ntruprime_dispatch_core ntruprime_dispatch_core_inv3sntrup653

extern void ntruprime_core_inv3sntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

#define ntruprime_core_implementation ntruprime_core_inv3sntrup653_implementation
#define ntruprime_core_compiler ntruprime_core_inv3sntrup653_compiler
#define ntruprime_dispatch_core_implementation ntruprime_dispatch_core_inv3sntrup653_implementation
#define ntruprime_dispatch_core_compiler ntruprime_dispatch_core_inv3sntrup653_compiler
#define ntruprime_numimpl_core ntruprime_numimpl_core_inv3sntrup653

extern const char *ntruprime_core_inv3sntrup653_implementation(void);
extern const char *ntruprime_core_inv3sntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup653(void);

#define ntruprime_core_inv3sntrup761_OUTPUTBYTES 762
#define ntruprime_core_inv3sntrup761_INPUTBYTES 761
#define ntruprime_core_inv3sntrup761_KEYBYTES 0
#define ntruprime_core_inv3sntrup761_CONSTBYTES 0

extern void ntruprime_core_inv3sntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_inv3sntrup761_implementation(void);
extern const char *ntruprime_core_inv3sntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup761(void);

#define ntruprime_core_inv3sntrup857_OUTPUTBYTES 858
#define ntruprime_core_inv3sntrup857_INPUTBYTES 857
#define ntruprime_core_inv3sntrup857_KEYBYTES 0
#define ntruprime_core_inv3sntrup857_CONSTBYTES 0

extern void ntruprime_core_inv3sntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_inv3sntrup857_implementation(void);
extern const char *ntruprime_core_inv3sntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup857(void);

#define ntruprime_core_inv3sntrup953_OUTPUTBYTES 954
#define ntruprime_core_inv3sntrup953_INPUTBYTES 953
#define ntruprime_core_inv3sntrup953_KEYBYTES 0
#define ntruprime_core_inv3sntrup953_CONSTBYTES 0

extern void ntruprime_core_inv3sntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_inv3sntrup953_implementation(void);
extern const char *ntruprime_core_inv3sntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup953(void);

#define ntruprime_core_inv3sntrup1013_OUTPUTBYTES 1014
#define ntruprime_core_inv3sntrup1013_INPUTBYTES 1013
#define ntruprime_core_inv3sntrup1013_KEYBYTES 0
#define ntruprime_core_inv3sntrup1013_CONSTBYTES 0

extern void ntruprime_core_inv3sntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_inv3sntrup1013_implementation(void);
extern const char *ntruprime_core_inv3sntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup1013(void);

#define ntruprime_core_inv3sntrup1277_OUTPUTBYTES 1278
#define ntruprime_core_inv3sntrup1277_INPUTBYTES 1277
#define ntruprime_core_inv3sntrup1277_KEYBYTES 0
#define ntruprime_core_inv3sntrup1277_CONSTBYTES 0

extern void ntruprime_core_inv3sntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_inv3sntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_inv3sntrup1277_implementation(void);
extern const char *ntruprime_core_inv3sntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_inv3sntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_inv3sntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_inv3sntrup1277(void);

#define ntruprime_core_invsntrup653_OUTPUTBYTES 1307
#define ntruprime_core_invsntrup653_INPUTBYTES 653
#define ntruprime_core_invsntrup653_KEYBYTES 0
#define ntruprime_core_invsntrup653_CONSTBYTES 0

extern void ntruprime_core_invsntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup653_implementation(void);
extern const char *ntruprime_core_invsntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup653(void);

#define ntruprime_core_invsntrup761_OUTPUTBYTES 1523
#define ntruprime_core_invsntrup761_INPUTBYTES 761
#define ntruprime_core_invsntrup761_KEYBYTES 0
#define ntruprime_core_invsntrup761_CONSTBYTES 0

extern void ntruprime_core_invsntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup761_implementation(void);
extern const char *ntruprime_core_invsntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup761(void);

#define ntruprime_core_invsntrup857_OUTPUTBYTES 1715
#define ntruprime_core_invsntrup857_INPUTBYTES 857
#define ntruprime_core_invsntrup857_KEYBYTES 0
#define ntruprime_core_invsntrup857_CONSTBYTES 0

extern void ntruprime_core_invsntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup857_implementation(void);
extern const char *ntruprime_core_invsntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup857(void);

#define ntruprime_core_invsntrup953_OUTPUTBYTES 1907
#define ntruprime_core_invsntrup953_INPUTBYTES 953
#define ntruprime_core_invsntrup953_KEYBYTES 0
#define ntruprime_core_invsntrup953_CONSTBYTES 0

extern void ntruprime_core_invsntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup953_implementation(void);
extern const char *ntruprime_core_invsntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup953(void);

#define ntruprime_core_invsntrup1013_OUTPUTBYTES 2027
#define ntruprime_core_invsntrup1013_INPUTBYTES 1013
#define ntruprime_core_invsntrup1013_KEYBYTES 0
#define ntruprime_core_invsntrup1013_CONSTBYTES 0

extern void ntruprime_core_invsntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup1013_implementation(void);
extern const char *ntruprime_core_invsntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup1013(void);

#define ntruprime_core_invsntrup1277_OUTPUTBYTES 2555
#define ntruprime_core_invsntrup1277_INPUTBYTES 1277
#define ntruprime_core_invsntrup1277_KEYBYTES 0
#define ntruprime_core_invsntrup1277_CONSTBYTES 0

extern void ntruprime_core_invsntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_invsntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_invsntrup1277_implementation(void);
extern const char *ntruprime_core_invsntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_invsntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_invsntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_invsntrup1277(void);

#define ntruprime_core_mult3sntrup653_OUTPUTBYTES 653
#define ntruprime_core_mult3sntrup653_INPUTBYTES 653
#define ntruprime_core_mult3sntrup653_KEYBYTES 653
#define ntruprime_core_mult3sntrup653_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup653_implementation(void);
extern const char *ntruprime_core_mult3sntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup653(void);

#define ntruprime_core_mult3sntrup761_OUTPUTBYTES 761
#define ntruprime_core_mult3sntrup761_INPUTBYTES 761
#define ntruprime_core_mult3sntrup761_KEYBYTES 761
#define ntruprime_core_mult3sntrup761_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup761_implementation(void);
extern const char *ntruprime_core_mult3sntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup761(void);

#define ntruprime_core_mult3sntrup857_OUTPUTBYTES 857
#define ntruprime_core_mult3sntrup857_INPUTBYTES 857
#define ntruprime_core_mult3sntrup857_KEYBYTES 857
#define ntruprime_core_mult3sntrup857_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup857_implementation(void);
extern const char *ntruprime_core_mult3sntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup857(void);

#define ntruprime_core_mult3sntrup953_OUTPUTBYTES 953
#define ntruprime_core_mult3sntrup953_INPUTBYTES 953
#define ntruprime_core_mult3sntrup953_KEYBYTES 953
#define ntruprime_core_mult3sntrup953_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup953_implementation(void);
extern const char *ntruprime_core_mult3sntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup953(void);

#define ntruprime_core_mult3sntrup1013_OUTPUTBYTES 1013
#define ntruprime_core_mult3sntrup1013_INPUTBYTES 1013
#define ntruprime_core_mult3sntrup1013_KEYBYTES 1013
#define ntruprime_core_mult3sntrup1013_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup1013_implementation(void);
extern const char *ntruprime_core_mult3sntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup1013(void);

#define ntruprime_core_mult3sntrup1277_OUTPUTBYTES 1277
#define ntruprime_core_mult3sntrup1277_INPUTBYTES 1277
#define ntruprime_core_mult3sntrup1277_KEYBYTES 1277
#define ntruprime_core_mult3sntrup1277_CONSTBYTES 0

extern void ntruprime_core_mult3sntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_mult3sntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_mult3sntrup1277_implementation(void);
extern const char *ntruprime_core_mult3sntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_mult3sntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_mult3sntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_mult3sntrup1277(void);

#define ntruprime_core_multsntrup653_OUTPUTBYTES 1306
#define ntruprime_core_multsntrup653_INPUTBYTES 1306
#define ntruprime_core_multsntrup653_KEYBYTES 653
#define ntruprime_core_multsntrup653_CONSTBYTES 0

extern void ntruprime_core_multsntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup653_implementation(void);
extern const char *ntruprime_core_multsntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup653(void);

#define ntruprime_core_multsntrup761_OUTPUTBYTES 1522
#define ntruprime_core_multsntrup761_INPUTBYTES 1522
#define ntruprime_core_multsntrup761_KEYBYTES 761
#define ntruprime_core_multsntrup761_CONSTBYTES 0

extern void ntruprime_core_multsntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup761_implementation(void);
extern const char *ntruprime_core_multsntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup761(void);

#define ntruprime_core_multsntrup857_OUTPUTBYTES 1714
#define ntruprime_core_multsntrup857_INPUTBYTES 1714
#define ntruprime_core_multsntrup857_KEYBYTES 857
#define ntruprime_core_multsntrup857_CONSTBYTES 0

extern void ntruprime_core_multsntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup857_implementation(void);
extern const char *ntruprime_core_multsntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup857(void);

#define ntruprime_core_multsntrup953_OUTPUTBYTES 1906
#define ntruprime_core_multsntrup953_INPUTBYTES 1906
#define ntruprime_core_multsntrup953_KEYBYTES 953
#define ntruprime_core_multsntrup953_CONSTBYTES 0

extern void ntruprime_core_multsntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup953_implementation(void);
extern const char *ntruprime_core_multsntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup953(void);

#define ntruprime_core_multsntrup1013_OUTPUTBYTES 2026
#define ntruprime_core_multsntrup1013_INPUTBYTES 2026
#define ntruprime_core_multsntrup1013_KEYBYTES 1013
#define ntruprime_core_multsntrup1013_CONSTBYTES 0

extern void ntruprime_core_multsntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup1013_implementation(void);
extern const char *ntruprime_core_multsntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup1013(void);

#define ntruprime_core_multsntrup1277_OUTPUTBYTES 2554
#define ntruprime_core_multsntrup1277_INPUTBYTES 2554
#define ntruprime_core_multsntrup1277_KEYBYTES 1277
#define ntruprime_core_multsntrup1277_CONSTBYTES 0

extern void ntruprime_core_multsntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_multsntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_multsntrup1277_implementation(void);
extern const char *ntruprime_core_multsntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_multsntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_multsntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_multsntrup1277(void);

#define ntruprime_core_scale3sntrup653_OUTPUTBYTES 1306
#define ntruprime_core_scale3sntrup653_INPUTBYTES 1306
#define ntruprime_core_scale3sntrup653_KEYBYTES 0
#define ntruprime_core_scale3sntrup653_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup653_implementation(void);
extern const char *ntruprime_core_scale3sntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup653(void);

#define ntruprime_core_scale3sntrup761_OUTPUTBYTES 1522
#define ntruprime_core_scale3sntrup761_INPUTBYTES 1522
#define ntruprime_core_scale3sntrup761_KEYBYTES 0
#define ntruprime_core_scale3sntrup761_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup761_implementation(void);
extern const char *ntruprime_core_scale3sntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup761(void);

#define ntruprime_core_scale3sntrup857_OUTPUTBYTES 1714
#define ntruprime_core_scale3sntrup857_INPUTBYTES 1714
#define ntruprime_core_scale3sntrup857_KEYBYTES 0
#define ntruprime_core_scale3sntrup857_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup857_implementation(void);
extern const char *ntruprime_core_scale3sntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup857(void);

#define ntruprime_core_scale3sntrup953_OUTPUTBYTES 1906
#define ntruprime_core_scale3sntrup953_INPUTBYTES 1906
#define ntruprime_core_scale3sntrup953_KEYBYTES 0
#define ntruprime_core_scale3sntrup953_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup953_implementation(void);
extern const char *ntruprime_core_scale3sntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup953(void);

#define ntruprime_core_scale3sntrup1013_OUTPUTBYTES 2026
#define ntruprime_core_scale3sntrup1013_INPUTBYTES 2026
#define ntruprime_core_scale3sntrup1013_KEYBYTES 0
#define ntruprime_core_scale3sntrup1013_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup1013_implementation(void);
extern const char *ntruprime_core_scale3sntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup1013(void);

#define ntruprime_core_scale3sntrup1277_OUTPUTBYTES 2554
#define ntruprime_core_scale3sntrup1277_INPUTBYTES 2554
#define ntruprime_core_scale3sntrup1277_KEYBYTES 0
#define ntruprime_core_scale3sntrup1277_CONSTBYTES 0

extern void ntruprime_core_scale3sntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_scale3sntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_scale3sntrup1277_implementation(void);
extern const char *ntruprime_core_scale3sntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_scale3sntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_scale3sntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_scale3sntrup1277(void);

#define ntruprime_core_weightsntrup653_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup653_INPUTBYTES 653
#define ntruprime_core_weightsntrup653_KEYBYTES 0
#define ntruprime_core_weightsntrup653_CONSTBYTES 0

extern void ntruprime_core_weightsntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup653_implementation(void);
extern const char *ntruprime_core_weightsntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup653(void);

#define ntruprime_core_weightsntrup761_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup761_INPUTBYTES 761
#define ntruprime_core_weightsntrup761_KEYBYTES 0
#define ntruprime_core_weightsntrup761_CONSTBYTES 0

extern void ntruprime_core_weightsntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup761_implementation(void);
extern const char *ntruprime_core_weightsntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup761(void);

#define ntruprime_core_weightsntrup857_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup857_INPUTBYTES 857
#define ntruprime_core_weightsntrup857_KEYBYTES 0
#define ntruprime_core_weightsntrup857_CONSTBYTES 0

extern void ntruprime_core_weightsntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup857_implementation(void);
extern const char *ntruprime_core_weightsntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup857(void);

#define ntruprime_core_weightsntrup953_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup953_INPUTBYTES 953
#define ntruprime_core_weightsntrup953_KEYBYTES 0
#define ntruprime_core_weightsntrup953_CONSTBYTES 0

extern void ntruprime_core_weightsntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup953_implementation(void);
extern const char *ntruprime_core_weightsntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup953(void);

#define ntruprime_core_weightsntrup1013_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup1013_INPUTBYTES 1013
#define ntruprime_core_weightsntrup1013_KEYBYTES 0
#define ntruprime_core_weightsntrup1013_CONSTBYTES 0

extern void ntruprime_core_weightsntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup1013_implementation(void);
extern const char *ntruprime_core_weightsntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup1013(void);

#define ntruprime_core_weightsntrup1277_OUTPUTBYTES 2
#define ntruprime_core_weightsntrup1277_INPUTBYTES 1277
#define ntruprime_core_weightsntrup1277_KEYBYTES 0
#define ntruprime_core_weightsntrup1277_CONSTBYTES 0

extern void ntruprime_core_weightsntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_weightsntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_weightsntrup1277_implementation(void);
extern const char *ntruprime_core_weightsntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_weightsntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_weightsntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_weightsntrup1277(void);

#define ntruprime_core_wforcesntrup653_OUTPUTBYTES 653
#define ntruprime_core_wforcesntrup653_INPUTBYTES 653
#define ntruprime_core_wforcesntrup653_KEYBYTES 0
#define ntruprime_core_wforcesntrup653_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup653(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup653(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup653_implementation(void);
extern const char *ntruprime_core_wforcesntrup653_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup653_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup653_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup653(void);

#define ntruprime_core_wforcesntrup761_OUTPUTBYTES 761
#define ntruprime_core_wforcesntrup761_INPUTBYTES 761
#define ntruprime_core_wforcesntrup761_KEYBYTES 0
#define ntruprime_core_wforcesntrup761_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup761(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup761(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup761_implementation(void);
extern const char *ntruprime_core_wforcesntrup761_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup761_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup761_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup761(void);

#define ntruprime_core_wforcesntrup857_OUTPUTBYTES 857
#define ntruprime_core_wforcesntrup857_INPUTBYTES 857
#define ntruprime_core_wforcesntrup857_KEYBYTES 0
#define ntruprime_core_wforcesntrup857_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup857(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup857(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup857_implementation(void);
extern const char *ntruprime_core_wforcesntrup857_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup857_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup857_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup857(void);

#define ntruprime_core_wforcesntrup953_OUTPUTBYTES 953
#define ntruprime_core_wforcesntrup953_INPUTBYTES 953
#define ntruprime_core_wforcesntrup953_KEYBYTES 0
#define ntruprime_core_wforcesntrup953_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup953(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup953(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup953_implementation(void);
extern const char *ntruprime_core_wforcesntrup953_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup953_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup953_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup953(void);

#define ntruprime_core_wforcesntrup1013_OUTPUTBYTES 1013
#define ntruprime_core_wforcesntrup1013_INPUTBYTES 1013
#define ntruprime_core_wforcesntrup1013_KEYBYTES 0
#define ntruprime_core_wforcesntrup1013_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup1013(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup1013(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup1013_implementation(void);
extern const char *ntruprime_core_wforcesntrup1013_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup1013_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup1013(void);

#define ntruprime_core_wforcesntrup1277_OUTPUTBYTES 1277
#define ntruprime_core_wforcesntrup1277_INPUTBYTES 1277
#define ntruprime_core_wforcesntrup1277_KEYBYTES 0
#define ntruprime_core_wforcesntrup1277_CONSTBYTES 0

extern void ntruprime_core_wforcesntrup1277(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_core_wforcesntrup1277(long long))(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_core_wforcesntrup1277_implementation(void);
extern const char *ntruprime_core_wforcesntrup1277_compiler(void);
extern const char *ntruprime_dispatch_core_wforcesntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_core_wforcesntrup1277_compiler(long long);
extern long long ntruprime_numimpl_core_wforcesntrup1277(void);

#define ntruprime_hashblocks_STATEBYTES 64
#define ntruprime_hashblocks_BLOCKBYTES 128

#define ntruprime_hashblocks_sha512_STATEBYTES 64
#define ntruprime_hashblocks_sha512_BLOCKBYTES 128

#define ntruprime_hashblocks ntruprime_hashblocks_sha512
#define ntruprime_dispatch_hashblocks ntruprime_dispatch_hashblocks_sha512

extern int ntruprime_hashblocks_sha512(unsigned char *,const unsigned char *,long long);
extern int (*ntruprime_dispatch_hashblocks_sha512(long long))(unsigned char *,const unsigned char *,long long);

#define ntruprime_hashblocks_implementation ntruprime_hashblocks_sha512_implementation
#define ntruprime_hashblocks_compiler ntruprime_hashblocks_sha512_compiler
#define ntruprime_dispatch_hashblocks_implementation ntruprime_dispatch_hashblocks_sha512_implementation
#define ntruprime_dispatch_hashblocks_compiler ntruprime_dispatch_hashblocks_sha512_compiler
#define ntruprime_numimpl_hashblocks ntruprime_numimpl_hashblocks_sha512

extern const char *ntruprime_hashblocks_sha512_implementation(void);
extern const char *ntruprime_hashblocks_sha512_compiler(void);
extern const char *ntruprime_dispatch_hashblocks_sha512_implementation(long long);
extern const char *ntruprime_dispatch_hashblocks_sha512_compiler(long long);
extern long long ntruprime_numimpl_hashblocks_sha512(void);

#define ntruprime_hash_BYTES 64

#define ntruprime_hash_sha512_BYTES 64

#define ntruprime_hash ntruprime_hash_sha512
#define ntruprime_dispatch_hash ntruprime_dispatch_hash_sha512

extern void ntruprime_hash_sha512(unsigned char *,const unsigned char *,long long);
extern void (*ntruprime_dispatch_hash_sha512(long long))(unsigned char *,const unsigned char *,long long);

#define ntruprime_hash_implementation ntruprime_hash_sha512_implementation
#define ntruprime_hash_compiler ntruprime_hash_sha512_compiler
#define ntruprime_dispatch_hash_implementation ntruprime_dispatch_hash_sha512_implementation
#define ntruprime_dispatch_hash_compiler ntruprime_dispatch_hash_sha512_compiler
#define ntruprime_numimpl_hash ntruprime_numimpl_hash_sha512

extern const char *ntruprime_hash_sha512_implementation(void);
extern const char *ntruprime_hash_sha512_compiler(void);
extern const char *ntruprime_dispatch_hash_sha512_implementation(long long);
extern const char *ntruprime_dispatch_hash_sha512_compiler(long long);
extern long long ntruprime_numimpl_hash_sha512(void);

#define ntruprime_kem_SECRETKEYBYTES 1518
#define ntruprime_kem_PUBLICKEYBYTES 994
#define ntruprime_kem_CIPHERTEXTBYTES 897
#define ntruprime_kem_BYTES 32

#define ntruprime_kem_sntrup653_SECRETKEYBYTES 1518
#define ntruprime_kem_sntrup653_PUBLICKEYBYTES 994
#define ntruprime_kem_sntrup653_CIPHERTEXTBYTES 897
#define ntruprime_kem_sntrup653_BYTES 32

#define ntruprime_kem_keypair ntruprime_kem_sntrup653_keypair
#define ntruprime_dispatch_kem_keypair ntruprime_dispatch_kem_sntrup653_keypair

extern void ntruprime_kem_sntrup653_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup653_keypair(long long))(unsigned char *,unsigned char *);

#define ntruprime_kem_enc ntruprime_kem_sntrup653_enc
#define ntruprime_dispatch_kem_enc ntruprime_dispatch_kem_sntrup653_enc

extern void ntruprime_kem_sntrup653_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup653_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

#define ntruprime_kem_dec ntruprime_kem_sntrup653_dec
#define ntruprime_dispatch_kem_dec ntruprime_dispatch_kem_sntrup653_dec

extern void ntruprime_kem_sntrup653_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup653_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

#define ntruprime_kem_implementation ntruprime_kem_sntrup653_implementation
#define ntruprime_kem_compiler ntruprime_kem_sntrup653_compiler
#define ntruprime_dispatch_kem_implementation ntruprime_dispatch_kem_sntrup653_implementation
#define ntruprime_dispatch_kem_compiler ntruprime_dispatch_kem_sntrup653_compiler
#define ntruprime_numimpl_kem ntruprime_numimpl_kem_sntrup653

extern const char *ntruprime_kem_sntrup653_implementation(void);
extern const char *ntruprime_kem_sntrup653_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup653_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup653_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup653(void);

#define ntruprime_kem_sntrup761_SECRETKEYBYTES 1763
#define ntruprime_kem_sntrup761_PUBLICKEYBYTES 1158
#define ntruprime_kem_sntrup761_CIPHERTEXTBYTES 1039
#define ntruprime_kem_sntrup761_BYTES 32

extern void ntruprime_kem_sntrup761_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup761_keypair(long long))(unsigned char *,unsigned char *);

extern void ntruprime_kem_sntrup761_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup761_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

extern void ntruprime_kem_sntrup761_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup761_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_kem_sntrup761_implementation(void);
extern const char *ntruprime_kem_sntrup761_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup761_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup761_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup761(void);

#define ntruprime_kem_sntrup857_SECRETKEYBYTES 1999
#define ntruprime_kem_sntrup857_PUBLICKEYBYTES 1322
#define ntruprime_kem_sntrup857_CIPHERTEXTBYTES 1184
#define ntruprime_kem_sntrup857_BYTES 32

extern void ntruprime_kem_sntrup857_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup857_keypair(long long))(unsigned char *,unsigned char *);

extern void ntruprime_kem_sntrup857_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup857_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

extern void ntruprime_kem_sntrup857_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup857_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_kem_sntrup857_implementation(void);
extern const char *ntruprime_kem_sntrup857_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup857_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup857_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup857(void);

#define ntruprime_kem_sntrup953_SECRETKEYBYTES 2254
#define ntruprime_kem_sntrup953_PUBLICKEYBYTES 1505
#define ntruprime_kem_sntrup953_CIPHERTEXTBYTES 1349
#define ntruprime_kem_sntrup953_BYTES 32

extern void ntruprime_kem_sntrup953_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup953_keypair(long long))(unsigned char *,unsigned char *);

extern void ntruprime_kem_sntrup953_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup953_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

extern void ntruprime_kem_sntrup953_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup953_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_kem_sntrup953_implementation(void);
extern const char *ntruprime_kem_sntrup953_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup953_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup953_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup953(void);

#define ntruprime_kem_sntrup1013_SECRETKEYBYTES 2417
#define ntruprime_kem_sntrup1013_PUBLICKEYBYTES 1623
#define ntruprime_kem_sntrup1013_CIPHERTEXTBYTES 1455
#define ntruprime_kem_sntrup1013_BYTES 32

extern void ntruprime_kem_sntrup1013_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1013_keypair(long long))(unsigned char *,unsigned char *);

extern void ntruprime_kem_sntrup1013_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1013_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

extern void ntruprime_kem_sntrup1013_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1013_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_kem_sntrup1013_implementation(void);
extern const char *ntruprime_kem_sntrup1013_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup1013_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup1013_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup1013(void);

#define ntruprime_kem_sntrup1277_SECRETKEYBYTES 3059
#define ntruprime_kem_sntrup1277_PUBLICKEYBYTES 2067
#define ntruprime_kem_sntrup1277_CIPHERTEXTBYTES 1847
#define ntruprime_kem_sntrup1277_BYTES 32

extern void ntruprime_kem_sntrup1277_keypair(unsigned char *,unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1277_keypair(long long))(unsigned char *,unsigned char *);

extern void ntruprime_kem_sntrup1277_enc(unsigned char *,unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1277_enc(long long))(unsigned char *,unsigned char *,const unsigned char *);

extern void ntruprime_kem_sntrup1277_dec(unsigned char *,const unsigned char *,const unsigned char *);
extern void (*ntruprime_dispatch_kem_sntrup1277_dec(long long))(unsigned char *,const unsigned char *,const unsigned char *);

extern const char *ntruprime_kem_sntrup1277_implementation(void);
extern const char *ntruprime_kem_sntrup1277_compiler(void);
extern const char *ntruprime_dispatch_kem_sntrup1277_implementation(long long);
extern const char *ntruprime_dispatch_kem_sntrup1277_compiler(long long);
extern long long ntruprime_numimpl_kem_sntrup1277(void);

#ifdef __cplusplus
}
#endif

#endif
