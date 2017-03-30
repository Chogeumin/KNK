#import <stdio.h>

int main(void) {
    char in, out;

    do {
        scanf("%c", &in);        

        if ('a' <= in && in <= 'z') {
            out = in - 'a' + 'A';
            printf("%c\n", out);
        }
    } while (in != '0');

    return 0;
}