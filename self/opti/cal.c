#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start = clock();
    int count, price;
    double exetime;

    printf("%s\n", "How many apples do you buy?");
    count = getchar();
	printf("%s\n", "How much is it?");
	scanf("%d", &price);
    printf("%s\n%s%d\n", "------------------------------------", "The amount of apples is ", price * count);

    clock_t end = clock();
    exetime = end - start;
    printf("Excute Time: %5.2fms\n", exetime);
    return 0;
}
