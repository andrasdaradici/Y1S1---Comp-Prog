# What does the following function return for op = ’+’, op = ’-’, and op = ’*’?

```
int binop ( int op , int a , int b )
{
    if ( op == ’+’)
        return a + b ;
    if ( op == ’-’)
        return a - b ;
    return 0;
}
```

# Answer

For `op = '+'` it would return the evaluated value of the expression `a+b`.
For `op = '-'` it would return the evaluated value of the expression `a-b`.
For `op = '*'` it would simply return the value 0. 