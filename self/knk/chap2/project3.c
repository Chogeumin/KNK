// 학습시간 2016년 4월 12일 화요일 오후 11시 45분.
// 장호연.
// K.N.King C Programming.
//
// 원 부피 프로그램 제작.
//

#include <stdio.h>

int main (void)
{
	int radius, volume;
	float pi = 3.14f;

	printf("Radius: ");
	scanf("%d", &radius);
	volume = (4.0f / 3.0f) * pi * radius * radius * radius;
	printf("Volume: %d\n", volume);

	return 0;
}