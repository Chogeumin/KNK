#include <stdio.h>

int main(void) {
	float f, h;
	int g;

	f = 23.0f;
	g = 4;
	h = f + g * 0.1;

	printf("%.2f\n", h);

	return 0;
}