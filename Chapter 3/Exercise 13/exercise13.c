/*
Write a function int skipto(int stopchar) that discards all characters up to, but not including, stopchar. Decide whether the stopping character should be consumed or left unread, and document your choice.
*/

#include <stdio.h>

int skipto(int stopchar)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == stopchar) {
            ungetc(c, stdin);
            return stopchar;
        }
    }

    return EOF;
}

int main(void)
{
    putchar(skipto('C'));
    return 0;
}