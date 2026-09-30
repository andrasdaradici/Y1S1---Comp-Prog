# Consider the following function:
```
int f ( int x )
{
printf ("%d\n", x ) ;
return x + 1;
}
```

### What is printed by the following statement?
```
printf ("%d\n", f (2 * f (3) ) ) ;
```

# Answer

The statement prints the following
```
3
8
```