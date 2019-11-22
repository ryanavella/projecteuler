#include <stdio.h>
#include <limits.h>

#if (UINT_MAX >= 0xffffffff)
typedef unsigned int  uint32_t;
#else
typedef unsigned long uint32_t;
#endif

int main(void) {
    uint32_t i, j, prod, tmp;
    unsigned d1, d2, d3, d4, d5, d6;
    uint32_t max_seen = 0;

    for (i=100; i<1000; i++) {
        for (j=i; j<1000; j++) {
            prod = i*j;
            tmp = prod;

            d1 = tmp % 10; tmp /= 10;
            d2 = tmp % 10; tmp /= 10;
            d3 = tmp % 10; tmp /= 10;
            d4 = tmp % 10; tmp /= 10;
            d5 = tmp % 10; tmp /= 10;
            d6 = tmp % 10; tmp /= 10;

            if (d1 == d6 && d2 == d5 && d3 == d4) {
                if (prod > max_seen) {
                    max_seen = prod;
                }
            }
        }
    }
    
    printf("%lu\n", (unsigned long)max_seen);
}
