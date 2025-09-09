// Problem Set: Repetitions

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
    char* bf = malloc(1000000); scanf("%s", bf);
    llu ln = strlen(bf), mx = 0, cl = 0;
    char ch = bf[0];
    for (llu i = 0; i < ln; ++i) 
        (ch == bf[i] ? ++cl : (cl > mx ? (mx = cl, 1) && (cl = 1, 1) : (cl = 1))) && (ch = bf[i]);
    cl > mx ? (mx = cl) : 0;
    printf("%llu\n", mx);
    return 0;
}
