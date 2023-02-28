#include <stdio.h>
#include <stdint.h>

// Define a function to perform a left rotation (ROL) on a uint32_t word
uint32_t rol32(uint32_t word, uint32_t n) {
    return (word << n | word >> (32 - n));
}

// Define a function to perform a right rotation (ROR) on a uint32_t word
uint32_t ror32(uint32_t word, uint32_t n) {
    return (word >> n | word << (32 - n));
}

// Example usage
int main() {
    uint32_t word32 = 0b11010011000010111110101000101010;
    uint32_t n = 5;

    // Perform a left rotation
    uint32_t word32_rol = rol32(word32, n);
    printf("ROL: %08x\n", word32_rol);

    // Perform a right rotation
    uint32_t word32_ror = ror32(word32, n);
    printf("ROR: %08x\n", word32_ror);

    return 0;
}
