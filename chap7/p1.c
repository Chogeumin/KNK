#include <stdio.h>

int main(void) {
	int n;
    long i;

	printf("This progrma prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1000000000000; i <= n; i = i + 1000) {
		printf("%ld\t%ld\n", i, i * i);
	}

	return 0;
}