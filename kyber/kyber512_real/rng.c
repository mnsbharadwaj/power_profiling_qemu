#include <stdint.h>
#include <stddef.h>

static uint8_t mock_rng_state = 123;

void randombytes(uint8_t *buf, size_t len) {
    for (size_t i = 0; i < len; i++) {
        buf[i] = mock_rng_state;
        mock_rng_state = (mock_rng_state * 37 + 17) & 0xFF;
    }
}
