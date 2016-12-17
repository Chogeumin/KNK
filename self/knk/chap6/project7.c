#include <stdio.h>

int main(void) {
	int i, square, odd, n;

	printf("This progrma prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);
	
	odd = 3;
	square = 1;
	for (i = 1; i <= n; ++i) {
		printf("%10d%10d\n", i, square);
		square += odd;
		odd += 2
	}

	return 0;
}