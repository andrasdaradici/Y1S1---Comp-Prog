/*
Rewrite the leap-year function using one return statement and a compound logical expression. Compare the readability of the two versions.
*/

#include <stdio.h>

int isleap (unsigned yr)
{
    return (yr % 4 == 0) && (yr % 100 != 0 || yr % 400 == 0);
}

int main(void)
{
    printf("Is it a leap year: ");
    printf("%d", isleap(2020));
    return 0;
}