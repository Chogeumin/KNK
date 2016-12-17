#include <stdio.h>

int main(void) {
	int i, j;
	float e = 1, f = 1, n;

	scanf("%g", &n);

	for (i = 1; ; i++) {
		for (j = 1; j <= i; j++)
			f *= j;
		if (1 / f < n)
			break;
		e += 1 / f;
	}

	printf("%g\n", e);

	return 0;
}