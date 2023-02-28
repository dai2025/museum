#include <stdio.h>
#include <stdint.h>

struct my_data {
    uint16_t a;
    uint8_t b;
    int16_t c;
    int8_t d;
} __attribute__((packed));

int main(void) {
    struct my_data data;
    data.a = 0x1234;
    data.b = 0x56;
    data.c = -1234;
    data.d = -56;

    printf("a: %04x\n", data.a);
    printf("b: %02x\n", data.b);
    printf("c: %d\n", data.c);
    printf("d: %d\n", data.d);

    return 0;
}
