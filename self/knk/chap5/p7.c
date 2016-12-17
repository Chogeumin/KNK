#include <stdio.h>

int main(void) {
	int i1, i2, i3, i4, max, min;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 >= i2) {
		max = i1; min = i2;
	}
	else {
		min = i1; max = i2;
	}

	if (i3 >= max)
		max = i3;
	else if (i3 <= min)
		min = i3;

	if (i4 >= max)
		max = i4;
	else if (i4 <= min)
		min = i4;

	printf("Largest: %d\nSmallest: %d\n", max, min);

	return 0;
}