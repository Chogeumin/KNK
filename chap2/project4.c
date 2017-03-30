// 학습시간 2016년 4월 13일 수요일 오전 12시 00분.
// 장호연.
// K.N.King C Programming.
//
// 세금 추가 계산기.
//

#include <stdio.h>

int main(void)
{
	float amount, taxPlus;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	taxPlus = amount * 1.05f;
	printf("With tax added: $%.2f\n", taxPlus);

	return 0;
}