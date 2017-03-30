// 학습시간: 2016년 4월 13일 수요일 오전 12시 23분.
// 장호연.
// 교재: K.N.King C Programming.
//
// 빚 계산.
//

#include <stdio.h>

int main(void)
{
	float loan, rateYear, rateMonth, payment, pay;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rateYear);
	rateMonth = 1 + ((rateYear / 12) / 100);
	printf("Enter monthly playment: ");
	scanf("%f", &payment);

	pay = (loan * rateMonth) - payment;
	printf("Balance remaining after first payment: %.2f\n", pay);
	pay = (((loan * rateMonth) - payment) * rateMonth) - payment;
	printf("Balance remaining after second payment: %.2f\n", pay);
	pay = ((((((loan * rateMonth) - payment) * rateMonth) - payment)) * rateMonth) - payment;
	printf("Balance remaining after third payment: %.2f\n", pay);

	return 0;
}