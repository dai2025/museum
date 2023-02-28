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

/*
This code defines two functions, rol and ror, that take a uint8_t byte and a uint32_t integer representing the number of bits to rotate. The rol function performs a left rotation, while the ror function performs a right rotation. The code then demonstrates how to use these functions with an example byte 0b11010011 (which is binary notation for 0xD3) and a rotation of 2 bits. The output shows the results of performing a left rotation and a right rotation on the input byte, using the %02x format specifier to print the resulting bytes in hexadecimal notation with leading zeros to fill 2 digits.
*/
