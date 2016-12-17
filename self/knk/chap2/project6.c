// 학습시간: 2016년 4월 13일 수요일 오전 12시 12분.
// 장호연.
// 교재: K.N.King C Programming.
//
// 방정식 계산2.
//

#include <stdio.h>

int main(void)
{
	int x, result;

	printf("x: ");
	scanf("%d", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x +7) * x - 6;
	printf("result = %d\n", result);

	return 0;
}