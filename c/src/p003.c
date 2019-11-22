#include <stdio.h>
#include <inttypes.h>

#define true (1)

int64_t divide_out_factor(int64_t x, int64_t factor) {
    while (x % factor == 0) {
        x /= factor;
    }
    return x;
}

int64_t largest_prime_factor(int64_t x) {
    int64_t y;

    x = divide_out_factor(x, 2);
    if (x == 1) return 2;

    x = divide_out_factor(x, 3);
    if (x == 1) return 3;
    y = 5;
    while (true) {
        x = divide_out_factor(x, y);
        if (x == 1) return y;
        y += 2;

        x = divide_out_factor(x, y);
        if (x == 1) return y;
        y += 4;
    }
}

int main(void) {
    int64_t p = largest_prime_factor(600851475143);
    printf("%d\n", (int)p);
    return 0;
}
