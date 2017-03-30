#include <stdio.h>

int main(void) {
	int days, start, i;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for (i = start; i > 0; i--)
		printf("  ");

	for (i = 1; i <= days; i++) {
		printf("%2d ", i);
		if (i % 7 == 8 - start)
			printf("\n");
	}
	printf("\n");

	return 0;
}