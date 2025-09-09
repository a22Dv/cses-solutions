// Problem Set: Permutations

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
    llu n = 0;
    scanf("%llu", &n);
    switch (n) {
        case 1: printf("1\n"); return 0;
        case 2: printf("NO SOLUTION\n"); return 0;
        case 3: printf("NO SOLUTION\n"); return 0;
        default:
            for (llu i = 2; i <= n; i += 2) printf("%llu ", i);
            for (llu i = 1; i <= n; i += 2) printf("%llu ", i);
    }
    return 0;
}
