#include <stdio.h>
#define pi 3.14

int main(void) {
	float r;

	printf("원의 반지름을 입력하세요: ");
	scanf("%g", &r);
	printf("원의 넓이는 %g이며 둘레는 %g입니다.\n", 0.5 * r * r * pi, 2 * r * pi);

	return 0;
}