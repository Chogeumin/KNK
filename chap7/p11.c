#include <stdio.h>

int main(void) {
    char ch, firstInit, lastName;
    int space = 0;

    printf("Enter a first and last name: ");
    firstInit = getchar();

    while ((ch = getchar()) != '\n') {
        if (space == 1) {
            putchar(ch);
        }
        if (ch == ' ')
            space = 1;
    }

    printf(", %c.\n", firstInit);

    return 0;
}