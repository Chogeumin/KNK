// 학습시간: 2016년 4월 22일 금요일 오후 9시 32분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project6.
//

#include <stdio.h>

int main(void)
{
	int num1, num2, denom1, denom2;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	printf("The sum is %d/%d\n", num1 * denom2 + num2 * denom1, denom1 * denom2);

	return 0;
}