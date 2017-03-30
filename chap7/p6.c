#include <stdio.h>

int main(void) {
    printf("%zu\n%zu\n%zu\n", sizeof(int), sizeof(short), sizeof(long));
    printf("%lu\n%lu\n%lu\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}