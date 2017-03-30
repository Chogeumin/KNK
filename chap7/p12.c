#include <stdio.h>

int main(void) {
	int operator;
	float f, result;
	char ch;

	printf ("Enter an expression: ");
	scanf ("%f%c", &f, &ch);
	result = f;

	while (ch != '\n') {
		switch (ch) {
			case '+': operator = 1; break;
			case '-': operator = 2; break;
			case '*': operator = 3; break;
			case '/': operator = 4; break;
		}
		
		scanf ("%f%c", &f, &ch);

		switch (operator) {
			case 1: result += f; break;
			case 2: result -= f; break;
			case 3: result *= f; break;
			case 4: result /= f; break;
		}
	}

	printf ("Value of expression: %g\n", result);

	return 0;
}