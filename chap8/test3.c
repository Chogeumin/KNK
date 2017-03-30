#include <stdio.h>
#define SIZE  ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {
	int a[10], i;

	for (i = 0; i < SIZE; i++) {
		a[i] = i;
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}