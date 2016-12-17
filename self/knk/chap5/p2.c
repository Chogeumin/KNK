#include <stdio.h>

int main(void) {
	int h24, m24;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h24, &m24);
	printf("Equivalent 12-hour time: ");

	if (h24 > 12)
		printf("%d:%.2d PM\n", h24-12, m24);
	else if (h24 == 12)
		printf("%d:%.2d PM\n", h24, m24);
	else
		printf("%d:%.2d AM\n", h24, m24);

	return 0;
}