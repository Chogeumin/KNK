// 학습시간: 2016년 4월 22일 금요일 오후 7시 52분.
// 작성자: 장호연.
// 교재: K.N.King C Programming.
//
// Chapter3. Project3.
//

#include <stdio.h>

int main(void)
{
	int first, second, third, forth, fifth;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &first, &second, &third, &forth, &fifth);

	printf("GS1 prefix: %d\n", first);
	printf("Group identifier: %d\n", second);
	printf("Publisher code: %d\n", third);
	printf("Item number: %d\n", forth);
	printf("Check digit: %d\n", fifth);

	return 0;
}