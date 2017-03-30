#include <stdio.h>

int main(void) {
	int count = 10;

	while (count > 0) {
		printf("%d\n", count);
		if (count == 5)
			continue;
		count--;
	}

	return 0;
}