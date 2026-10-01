# What is the problem with the following code? Rewrite it using braces so that the intended meaning is unambiguous.

```
if ( x > 0)
    if ( y > 0)
        puts (" both positive ") ;
else
    puts ("x is not positive ") ;
```

# Answer

The issue is that the compiler pairs the `else` branch with the last open `if` branch.

```
if ( x > 0)
{
    if ( y > 0)
        puts (" both positive ") ;
}
else
{
    puts ("x is not positive ") ;
}
```