#include <stdio.h>

int main(void) {
	long sum = 0, n;

	printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
	
	do {
		scanf("%ld", &n);
		sum += n;
	} while (n != 0);

	printf("The sum is: %ld\n", sum);

	return 0;
}