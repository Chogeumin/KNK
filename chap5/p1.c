#include <stdio.h>

int main(void) {
	int input, digit;

	printf("Enter a number: ");
	scanf("%d", &input);

	if (input < 10)
		digit = 1;
	else if (input < 100)
		digit = 2;
	else
		digit = 3;

	printf("The number %d has %d digit.\n", input, digit);

	return 0;
}