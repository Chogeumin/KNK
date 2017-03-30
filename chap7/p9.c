#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, min;
    char period;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &period);

    if (toupper(period) == 'P')
        hour += 12;
    
    printf("Equivalent 24-hour time: %d:%d\n", hour, min);

    return 0;
}