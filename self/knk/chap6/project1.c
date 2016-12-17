#include <stdio.h>

int main(void) {
	float num = 0, large = 0;

	do {
		printf("Enter a number: ");
		scanf("%g", &num);
		if (num > large)
			large = num;
	} while (num > 0);

	printf("The largest number entered was %g\n", large);

	return 0;
}