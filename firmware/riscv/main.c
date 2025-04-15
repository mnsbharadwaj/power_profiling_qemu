
#include <stdint.h>
#include "kyber512_api.h"

uint8_t pk[KYBER_PUBLICKEYBYTES];
uint8_t sk[KYBER_SECRETKEYBYTES];
uint8_t ct[KYBER_CIPHERTEXTBYTES];
uint8_t key[KYBER_SSBYTES];
uint8_t key_dec[KYBER_SSBYTES];

void run_kyber() {
    kyber512_keypair(pk, sk);
    kyber512_enc(ct, key, pk);
    kyber512_dec(key_dec, ct, sk);
}

int main() {
    for (int i = 0; i < 10; i++) run_kyber();
    return 0;
}
