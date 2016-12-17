#include <stdio.h>

int main(void) {
    int a1, a2, b1, b2, r1, r2;
    char ch;

    printf("Enter two fractions separated by +, -, * or /: ");
    scanf("%d/%d%c%d/%d", &a1, &a2, &ch, &b1, &b2);

    switch (ch) {
        case '+': r1 = a1 * b2 + a2 * b1; r2 = a2 * b2; break;
        case '-': r1 = a1 * b2 - a2 * b1; r2 = a2 * b2; break;
        case '*': r1 = a1 * b1; r2 = a2 * b2; break;
        case '/': r1 = a1 * b2; r2 = a2 * b1; break;
    }

    
    printf("The result is %d/%d\n", r1, r2);

    return 0;
}