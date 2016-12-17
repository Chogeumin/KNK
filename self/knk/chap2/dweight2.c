// 2016년 4월 12일, 화요일, 오전 2:50 학습.
// 장호연.
// K.N.King C Programming.
//
// Computes the dimensioanl weight of a obx from input provided by the user.
//

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensioanl weight (pounds): %d\n", weight);

	return 0;
}