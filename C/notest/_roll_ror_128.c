#include <stdio.h>
#include <stdint.h>

// Define a function to perform a left rotation (ROL) on a uint128_t word
typedef unsigned __int128 uint128_t;
uint128_t rol128(uint128_t word, uint32_t n) {
    return (word << n | word >> (128 - n));
}

// Define a function to perform a right rotation (ROR) on a uint128_t word
uint128_t ror128(uint128_t word, uint32_t n) {
    return (word >> n | word << (128 - n));
}

// Example usage
int main() {
    uint128_t word128 = 0b110100110000101111101010001010101010101010010101111000110011100101010101010101001010111100011001110010101010101010100101011110001100111001;
    uint32_t n = 19;

    // Perform a left rotation
    uint128_t word128_rol = rol128(word128, n);
    printf("ROL: %032lx%032lx\n", (uint64_t)(word128_rol >> 64), (uint64_t)word128_rol);

    // Perform a right rotation
    uint128_t word128_ror = ror128(word128, n);
    printf("ROR: %032lx%032lx\n", (uint64_t)(word128_ror >> 64), (uint64_t)word128_ror);

    return 0;
}
