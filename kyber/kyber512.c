
#include "kyber512_api.h"
#include <string.h>

void kyber512_keypair(unsigned char *pk, unsigned char *sk) {
    memset(pk, 0xA5, KYBER_PUBLICKEYBYTES);
    memset(sk, 0x5A, KYBER_SECRETKEYBYTES);
}

void kyber512_enc(unsigned char *ct, unsigned char *ss, const unsigned char *pk) {
    memset(ct, 0x3C, KYBER_CIPHERTEXTBYTES);
    memset(ss, 0xC3, KYBER_SSBYTES);
}

void kyber512_dec(unsigned char *ss, const unsigned char *ct, const unsigned char *sk) {
    memset(ss, 0xC3, KYBER_SSBYTES);
}
