// 학습시간: 2016년 4월 14일 목요일 오후 1시 45분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Scanf Characters Test.
//

#include <stdio.h>

int main(void)
{
	int a, b;

	printf(" 5/ 96 테스트:\n");
	scanf("%d/%d", &a, &b);
	printf("d/d 결과: a) %d, b) %d\n", a, b);
	a = 0; b = 0;
	printf(" 5/ 96 테스트:\n");
	scanf(" %d/ %d", &a, &b);
	printf(" d/ d 결과: a) %d, b) %d\n", a, b);
	a = 0; b = 0;

	printf(" 5 / 96 테스트:\n");
	scanf("%d/%d", &a, &b);
	printf("d/d 결과: a) %d, b) %d\n", a, b);
	a = 0; b = 0;
	printf(" 5 / 96 테스트:\n");
	scanf(" %d / %d", &a, &b);
	printf(" d / d 결과: a) %d, b) %d\n", a, b);
	a = 0; b = 0;

	return 0;
}