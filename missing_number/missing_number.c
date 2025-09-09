// Problem Set: Missing Number

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
   llu s = n * (n + 1) / 2;
    
   for (llu i = 0; i < n - 1; ++i) {
        llu m = 0;
        scanf("%llu", &m);
        s -= m;
   }

   printf("%llu\n", s);

   return 0;    
}
