#include <stdio.h>
#include <limits.h>

#if (UINT_MAX >= 0xffffffff)
typedef int  int32_t;
#else
typedef long int32_t;
#endif

static int32_t triangular_num(int32_t n) {
    return n * (n + 1) / 2;
}

int main(void) {
    int32_t limit = 1000 - 1;

    int32_t sum_mul3  = 3  * triangular_num(limit / 3);
    int32_t sum_mul5  = 5  * triangular_num(limit / 5);
    int32_t sum_mul15 = 15 * triangular_num(limit / 15);

    /* Multiples of 15 were double-counted, so we
    ** should subtract them from the result.
    */
    int32_t total = sum_mul3 + sum_mul5 - sum_mul15;
    printf("%d\n", total);
    return 0;
}
