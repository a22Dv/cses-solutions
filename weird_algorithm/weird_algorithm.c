// Problem Set: Weird Algorithm

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

int main() {
    char ibuffer[SML_BUFFER];
    char* ret = fgets(ibuffer, SML_BUFFER, stdin);
    if (!ret) {
        return -1;
    }
    long long unsigned int n = 0;
    sscanf(ibuffer, "%llu", &n);

    char temp[SML_BUFFER];
    char obuffer[LRG_BUFFER];
    sprintf(obuffer, "%llu ", n);
    int counter = strlen(obuffer);
    while (n != 1) {
        n & 1 ?  (n = n * 3 + 1) : (n /= 2);
        sprintf(temp, "%llu ", n);
        int out_len = strlen(temp);
        strcpy(obuffer + counter, temp);
        counter += out_len;
    }
    obuffer[counter - 1] = '\0';
    printf("%s", obuffer);
    return 0;
}
