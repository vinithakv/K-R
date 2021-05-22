/* Simplest program to copy input to output */
#include<stdio.h>

int main() {
    int c; /* Do we need int here ? */

    while((c = getchar()) != EOF)
        putchar(c);

    return 0;

}
