#include <stdio.h>
#include <limits.h>

#if (UINT_MAX >= 0xffffffff)
typedef unsigned int  uint32_t;
#else
typedef unsigned long uint32_t;
#endif

static uint32_t triangular_num(unsigned m) {
    uint32_t n = (uint32_t)m;
    return n * (n + 1) / 2;
}

int main(void) {
    uint32_t limit = 1000 - 1;

    uint32_t sum_mul3  = 3  * triangular_num(limit / 3);
    uint32_t sum_mul5  = 5  * triangular_num(limit / 5);
    uint32_t sum_mul15 = 15 * triangular_num(limit / 15);

    /* Multiples of 15 were double-counted, so we
    ** should subtract them from the result.
    */
    uint32_t total = sum_mul3 + sum_mul5 - sum_mul15;
    printf("%lu\n", (unsigned long)total);
    return 0;
}
