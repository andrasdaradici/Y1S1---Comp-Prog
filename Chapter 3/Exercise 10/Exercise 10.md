# Trace the following program for the input 39A. What is printed and what character remains unread, if any?

```
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int c;
    unsigned r = 0;

    while (isdigit(c = getchar())) {
        r = 10 * r + c - '0';
    }

    if (c != EOF) {
        ungetc(c, stdin);
    }

    printf("%u\n", r);
    return 0;
}
```

# Answer

The digits `3` and `9` get processed and added to the number that gets printed at the end of the function. The character `A` gets read, however it gets pushed back into the stream so any subsequent operations will be able to use it.