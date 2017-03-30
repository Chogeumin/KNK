#include <stdio.h>

int main(void) {
	double sum = 0, n;

	printf("This program sums a series of integers.\nEnter integers (0 to terminate): ");
	
	do {
		scanf("%lf", &n);
		sum += n;
	} while (n != 0);

	printf("The sum is: %lf\n", sum);

	return 0;
}