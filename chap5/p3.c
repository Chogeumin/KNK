#include <stdio.h>

int main(void)
{
	float share, price, commission, rival, value;

	printf("Enter the number of shares: ");
	scanf("%f", &share);
	printf("Enter the price per share: ");
	scanf("%f", &price);

	value = price * share;

	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.00f + 0.0009f * value;

	if (share < 2000)
		rival = 33.00f + 0.3f * share;
	else
		rival = 33.00f + 0.2f * share;

	printf("The rival's commission: $%.2f\nThe origianl broker's Commission: $%.2f\n", rival, commission);

	return 0;
}