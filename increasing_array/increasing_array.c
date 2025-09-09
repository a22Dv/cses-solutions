// Problem Set: Increasing Array

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
    llu n = 0, m = 0, o = 0, s = 0;
    scanf("%llu", &n);
    scanf("%llu", &o);
    for (llu i = 0; i < n - 1; ++i) {
        scanf("%llu", &m);
        m < o ? (s += o - m) : (o = m);
    }
    printf("%llu\n", s);
}
