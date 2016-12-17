#include <stdio.h>

int main(void)
{
	float loan, rateYear, rateMonth, payment, pay, i;

	printf("Enter amount of loan: ");
	scanf("%g", &loan);
	printf("Enter interest rate: ");
	scanf("%g", &rateYear);
	rateMonth = 1 + ((rateYear / 12) / 100);
	printf("Enter monthly payment: ");
	scanf("%g", &payment);

	pay = loan * rateMonth - payment;
	for (i = 1; i <= 3; i++) {
		printf("Balance remaining after %gth payment: $%.2f\n", i, pay);
		pay = pay * rateMonth - payment;
	}

	return 0;
}