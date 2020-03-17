#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    size_t sz = 7500000000;
    char *a = malloc(sz);

    memset(a, 'a', sz);

    printf("%.4s", &a[sz-5]);

    sleep(120);

    return 0;
}
