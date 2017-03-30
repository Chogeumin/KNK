#include <stdio.h>

int main(void) {
	int number, i;

	printf("This program prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &number);

	i = 1;
	while (i <= number) {
		printf("%10d%10d\n", i, i * i);
		i ++;
	}

	return 0;
}