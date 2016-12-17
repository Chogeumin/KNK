// 학습시간: 2016년 4월 13일 수요일 오후 10시 29분.
// 교재: K.N.King C Programming.
// 작성자: 장호연.
//
// Prints int and float values in various formats.
//

#include <stdio.h>

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}