// 학습시간: 2016년 4월 13일 수요일 오전 12시 08분.
// 장호연.
// 교재: K.N.King C Programming.
//
// 방정식 계산.
//

#include <stdio.h>

int main(void)
{
	int x, result;

	printf("x: ");
	scanf("%d", &x);
	result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
	printf("result = %d\n", result);

	return 0;
}