// Problem Set: Two Knights

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h>

#define EXLRG_BUFFER 65536
#define LRG_BUFFER 8192
#define SML_BUFFER 128

typedef long long unsigned int llu;
typedef double dbl;

int main() {
    llu n;
    scanf("%llu", &n);
    for (llu i = 1; i <= n; ++i) {
        llu cmb = ((i * i) * (i * i - 1)) / 2;
        llu r = cmb - ((i - 1) * (i - 2)) * 4;
        printf("%llu\n", r);
    }
    return 0;
}
