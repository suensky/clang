#include "stdio.h"
#include "stdlib.h"

int main(void) {
    double a[5] = {
        [0] = 0.0,
        [1] = 1.0,
        [4] = 4.0,
    };

    for (size_t i = 0; i < 5; ++i) {
        printf("Element %zu is %g, \tits square is %g\n", i, a[i], a[i] * a[i]);
    }
    return 0;
} 