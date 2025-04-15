#ifndef RANDOMBYTES_H
#define RANDOMBYTES_H

#include <stddef.h>
#include <stdint.h>

/**
 * Fills `buf` with `len` bytes of pseudo-random data.
 * 
 * This is a deterministic mock implementation for profiling.
 */
void randombytes(uint8_t *buf, size_t len);

#endif
