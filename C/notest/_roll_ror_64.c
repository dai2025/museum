#include <stdio.h>
#include <stdint.h>

// Define a function to perform a left rotation (ROL) on a uint64_t word
uint64_t rol64(uint64_t word, uint32_t n) {
    return (word << n | word >> (64 - n));
}

// Define a function to perform a right rotation (ROR) on a uint64_t word
uint64_t ror64(uint64_t word, uint32_t n) {
    return (word >> n | word << (64 - n));
}

// Example usage
int main() {
    uint64_t word64 = 0b1101001100001011111010100010101010101010100101011110001100111001;
    uint32_t n = 13;

    // Perform a left rotation
    uint64_t word64_rol = rol64(word64, n);
    printf("ROL: %016lx\n", word64_rol);

    // Perform a right rotation
    uint64_t word64_ror = ror64(word64, n);
    printf("ROR: %016lx\n", word64_ror);

    return 0;
}
