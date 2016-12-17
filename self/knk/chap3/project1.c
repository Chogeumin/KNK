// 학습시간: 2016년 4월 22일 금요일 오후 7시 52분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project1.
//

#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &a, &b, &c);
	printf("You entered the date %d%.2d%d\n", c, a, b);

	return 0;
}