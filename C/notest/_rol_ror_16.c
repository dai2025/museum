#include <stdio.h>
#include <stdint.h>

// Define a function to perform a left rotation (ROL) on a uint16_t word
uint16_t rol16(uint16_t word, uint32_t n) {
    return (word << n | word >> (16 - n));
}

// Define a function to perform a right rotation (ROR) on a uint16_t word
uint16_t ror16(uint16_t word, uint32_t n) {
    return (word >> n | word << (16 - n));
}

// Example usage
int main() {
    uint16_t word16 = 0b1101001100001011;
    uint32_t n = 2;

    // Perform a left rotation
    uint16_t word16_rol = rol16(word16, n);
    printf("ROL: %04x\n", word16_rol);

    // Perform a right rotation
    uint16_t word16_ror = ror16(word16, n);
    printf("ROR: %04x\n", word16_ror);

    return 0;
}
