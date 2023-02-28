#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint64_t w0 : 64;
    uint64_t w1 : 64;
} uint128_t;

int main() {
    uint128_t x = {0xffffffffffffffff, 0xffffffffffffffff};
    uint128_t y = {1, 0};
    uint128_t z = {0};

    z.w0 = x.w0 + y.w0;
    z.w1 = x.w1 + y.w1 + (z.w0 < x.w0);

    printf("%016lx%016lx + %016lx%016lx = %016lx%016lx\n",
           x.w1, x.w0, y.w1, y.w0, z.w1, z.w0);

    return 0;
}
