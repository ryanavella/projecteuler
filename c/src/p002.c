#include <stdio.h>
#include <limits.h>

#if (UINT_MAX >= 0xffffffff)
typedef int  int32_t;
#else
typedef long int32_t;
#endif

#define true (1)

int main(void) {
    int32_t limit = 4000000;
    int32_t a1 = 0;
    int32_t a2 = 2;
    int32_t sum = 2;

    while (true) {
        /* Every third term is even
        ** f(n) = 4*f(n-3) + f(n-6)
        */
        int32_t a3 = 4*a2 + a1;
        a1 = a2;
        a2 = a3;
        if (a3 > limit) {
            break;
        }
        sum += a3;
    }
    printf("%d\n", sum);
}
