// 학습시간: 2016년 4월 13일 수요일 오전 12시 16분.
// 장호연.
// 교재: K.N.King C Programming.
//
// Write a program that asks the user to enter a U.S. dollar amount 
// and then shows how to pay that amount using the smalles number of $20, $10, $5, and $1 bills.
//

#include <stdio.h>

int main(void)
{
	int amount, num20, num10, num5, num1;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	num20 = amount/20;
	num10 = (amount - (20 * num20))/10;
	num5 = (amount - (20 * num20) - (10 * num10))/5;
	num1 = (amount - (20 * num20) - (10 * num10) - (5 * num5));
	printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", num20, num10, num5, num1);

	return 0;
}