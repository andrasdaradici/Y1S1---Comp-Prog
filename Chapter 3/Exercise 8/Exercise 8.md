# What is wrong with the following loop?

```
char c;
while ((c = getchar ()) != EOF){
    putchar(c);
}
```

# Answer

The problem in the following loop is that `c` is declared as a `char` and not as an `int`.