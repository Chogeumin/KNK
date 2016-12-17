#include <stdio.h>

int main(void) {
	for (int sum = 0, i = 1; i <= 11; sum += i, i++) {
		printf("%d\n", sum);
	}

	return 0;
}