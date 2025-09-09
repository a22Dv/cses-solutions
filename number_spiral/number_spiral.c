// Problem Set: Number Spiral

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
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

typedef long long unsigned int llu;
typedef double dbl;

int main() {
    llu nt;
    scanf("%llu", &nt);
    for (llu i = 0; i < nt; ++i) {
        llu x, y;
        scanf("%llu %llu", &y, &x);
        llu mx = MAX(x, y), sq = 1 + (mx & 1 ? mx * 2 * ((mx - 1) / 2) : ((mx + 1) * 2 * ((mx) / 2)) - (2 * mx));
        llu r = mx & 1 ? (mx == x ? sq + (mx - y) : sq - (mx - x)) : (mx == x ? sq - (mx - y) : sq + (mx - x));
        printf("%llu\n", r);
    }
    return 0;
}
