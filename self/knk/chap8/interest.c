#include <stdio.h>
#define SIZE ((int) (sizeof(value) / sizeof(value[0])))

int main()
{
	int rate, years;
	float value[5] = {100, 100, 100, 100, 100};

	printf("Enter interest rate: ");
	scanf("%d", &rate);
	printf("Enter number of years: ");
	scanf("%d", &years);

	printf("\nYears ");
	for (int i = 0; i < 5; i++)
		printf("%6d%%", rate + i);
	printf("\n");

	for (int i = 0; i < years; i++) {
		printf("%3d\t", i+1);
		for (int j = 0; j < SIZE; j++) {
			value[i] += (rate + i) / 100.0 * value[i];
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
}
