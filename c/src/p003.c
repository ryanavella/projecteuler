#include <stdio.h>
#include <inttypes.h>

#define true (1)

static uint64_t divide_out_factor(uint64_t x, uint64_t factor) {
    while (x % factor == 0) {
        x /= factor;
    }
    return x;
}

static uint64_t largest_prime_factor(uint64_t x) {
    uint64_t y;

    x = divide_out_factor(x, 2);
    if (x == 1) return 2;

    x = divide_out_factor(x, 3);
    if (x == 1) return 3;
    y = 5;
    while (true) {
        x = divide_out_factor(x, y);
        if (x == 1) return (uint32_t)y;
        y += 2;

        x = divide_out_factor(x, y);
        if (x == 1) return (uint32_t)y;
        y += 4;
    }
}

int main(void) {
    uint64_t p = largest_prime_factor(600851475143);
    printf("%lu\n", (unsigned long)p);
    return 0;
}
