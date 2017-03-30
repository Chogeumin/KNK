#include <stdio.h>

int main(void) {
	int n, i;
    char ch;

	printf("This progrma prints a table of squares.\nEnter number of entries in table: ");
	scanf("%d", &n);
    ch = getchar();

	for (i = 1; i <= n; i++) {
		printf("%d\t%d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            if ((ch = getchar()) == '\n') {
                continue;
            }
        }
	}

	return 0;
}