#include <stdio.h>
#include <stdint.h>

// Define a function to perform a left rotation (ROL) on a uint8_t byte
uint8_t rol(uint8_t byte, uint32_t n) {
    return (byte << n | byte >> (8 - n));
}

// Define a function to perform a right rotation (ROR) on a uint8_t byte
uint8_t ror(uint8_t byte, uint32_t n) {
    return (byte >> n | byte << (8 - n));
}

// Example usage
int main() {
    uint8_t byte = 0b11010011;
    uint32_t n = 2;

    // Perform a left rotation
    uint8_t byte_rol = rol(byte, n);
    printf("ROL: %02x\n", byte_rol);

    // Perform a right rotation
    uint8_t byte_ror = ror(byte, n);
    printf("ROR: %02x\n", byte_ror);

    return 0;
}
