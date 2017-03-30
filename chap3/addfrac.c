// 학습시간: 2016년 4월 14일 목요일 오후 3시 13분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Adds two fractions.
//

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}