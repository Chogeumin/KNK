#include <stdio.h>

int main(void) {
    int i = 0;

    printf("Enter a message: ");

    while (getchar() != '\n') {
        i++;
    }

    printf("Your message was %d character(s) long.\n", i);

    return 0;
} 