#include <stdio.h>

int main(void)
{
	int original, reverse;

	printf("Enter a two-digit number: ");
	scanf("%d", &original);

	reverse = (original % 10) * 10 + (original / 10);
	printf("The reversal is %.2d\n", reverse);

	return 0;
}