
#ifndef KYBER_API_H
#define KYBER_API_H

#define KYBER_PUBLICKEYBYTES 800
#define KYBER_SECRETKEYBYTES 1632
#define KYBER_CIPHERTEXTBYTES 768
#define KYBER_SSBYTES 32

void kyber512_keypair(unsigned char *pk, unsigned char *sk);
void kyber512_enc(unsigned char *ct, unsigned char *ss, const unsigned char *pk);
void kyber512_dec(unsigned char *ss, const unsigned char *ct, const unsigned char *sk);

#endif
