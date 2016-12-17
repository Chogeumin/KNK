#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool digit_check[10] = {false};
	long n;
	int digit;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_check[digit] == true)
			break;
		digit_check[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated number.\n");
	else
		printf("No Repeated number.\n");
	return 0;
}
