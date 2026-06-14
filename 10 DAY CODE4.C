#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;

    for(i = 1; i <= rows; i++) {

        for(j = 1; j <= rows - i; j++)
            printf(" ");

        ch = 'A';

        for(j = 1; j <= i; j++)
            printf("%c", ch++);

        ch -= 2;

        for(j = 1; j < i; j++)
            printf("%c", ch--);

        printf("\n");
    }

    return 0;
}