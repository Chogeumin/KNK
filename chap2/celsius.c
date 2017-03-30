// 학습시간 2016년 4월 12일 화요일 오전 10시 43분.
// K.N.King C Programming.
// 장호연.
//
// Converts a Fahrenheit temperature to Celsius.
//

#include <stdio.h>

#define FREEZING_PT 32.0f // define으로 지정하는 macro는 대문자로 쓰는 게 암묵적인 규칙이다.
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius equivalent: %.1f\n", celsius);

	return 0;
}