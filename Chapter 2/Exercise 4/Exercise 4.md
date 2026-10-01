# Rewrite the following conditional expression using an if statement:

```
return x % 2 == 0 ? x / 2 : 3 * x + 1;
```

# Answer

```
if (x % 2 == 0)
{
    return x / 2; 
}
return 3 * x + 1;
```