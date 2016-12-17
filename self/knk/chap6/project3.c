#include <stdio.h>

int main(void) {
	int n, m, temp, d1, d2;

	printf("Enter a fraction: ");
	scanf("%d/%d", &d1, &d2);
	n = d1;
	m = d2;

	while (d1 != 0) {
		temp = d2 % d1;
		d2 = d1;
		d1 = temp;
	}

	printf("In lowest terms: %d/%d\n", n/d2, m/d2);

	return 0;
}