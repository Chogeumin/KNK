#include <stdio.h>

int main(void) {
	int i, n;

	printf("This progrma prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i * i);
	}

	return 0;
}