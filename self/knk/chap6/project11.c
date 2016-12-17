#include <stdio.h>

int main(void) {
	int n, i, j;
	float e = 1, f = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			f *= j;
		e += 1 / f;
	}

	printf("%g\n", e);

	return 0;
}