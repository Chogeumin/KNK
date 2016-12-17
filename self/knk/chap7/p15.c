#include <stdio.h>

int main(void) {
	typedef long double Factorial;
	Factorial end = 0.0, result = 1.0;

	printf("Enter a positive integer: ");
	scanf("%Lf", &end);

	for (Factorial i = 2.0; i <= end; i++) {
		result *= i;
	} 

	printf("Factorial of %Lg: %Lg\n", end, result);

	return 0;
}