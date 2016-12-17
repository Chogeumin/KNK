// 학습시간: 2016년 4월 22일 금요일 오후 9시 03분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project4.
//

#include <stdio.h>

int main(void)
{
	int pn1, pn2, pn3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &pn1, &pn2, &pn3);

	printf("You entered %d.%d.%d\n", pn1, pn2, pn3);

	return 0;
}