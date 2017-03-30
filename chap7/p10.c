#include <stdio.h>
#include <ctype.h>

int main(void) {
    char check;
    int vowel = 0;

    printf ("Enter a sentence: ");

    while ((check = getchar()) != '\n') {
        switch (toupper(check)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel += 1; break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowel);

    return 0;
}