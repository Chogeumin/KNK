#include <stdio.h>

int main(void)
{
	int input, output;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &input);
	output = (((((input / 8) / 8) / 8) / 8) % 8) * 10000 + ((((input / 8) / 8) / 8) % 8) * 1000 + (((input / 8) / 8) % 8) * 100 + ((input / 8) % 8) * 10 + (input % 8);
	printf("In octal, your number is: %.5d\n", output);

	return 0;
}