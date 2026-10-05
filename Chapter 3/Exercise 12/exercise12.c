/*
Write a function int printto(int stopchar) that prints all characters up to, but not including, stopchar. It should return stopchar if it was found and EOF otherwise.
*/

#include <stdio.h>

int printto(int stopchar)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == stopchar) {
            return stopchar;
        }
        putchar(c);
    }

    return EOF;
}

int main(void)
{
    printto('C');
    return 0;
}