#include <stdio.h>

int main(void)
{
	int original, reverse;

	printf("Enter a three-digit number: ");
	scanf("%d", &original);

	reverse = (original % 10) * 100 + (((original / 10) - ((original / 100) * 10)) * 10) + (original / 100);
	printf("The reversal is %.3d\n", reverse);

	return 0;
}