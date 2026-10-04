# What is wrong with the following condition?

```
if (c >= ’A’ || c <= ’Z’) {
    puts("uppercase") ;
}
```

# Answer

The problem in the condition is that it used the OR operator (`||`) instead of the AND operator (`&&`) to check whether the variable `c` is in the range or no.