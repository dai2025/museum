#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t w0 : 8;
    uint8_t w1 : 8;
} uint16_t;

int main() {
    uint16_t x = {0xffff, 0xffff};
    uint16_t y = {1, 0};
    uint16_t z = {0};

    z.w0 = x.w0 + y.w0;
    z.w1 = x.w1 + y.w1 + (z.w0 < x.w0);

    printf("%04x + %04x = %04x\n", (x.w1 << 8) | x.w0, (y.w1 << 8) | y.w0, (z.w1 << 8) | z.w0);

    return 0;
}
