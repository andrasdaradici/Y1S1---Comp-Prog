# Explain the difference between x = 0 and x == 0. Why is this difference dangerous in conditions?

# Answer

When using a single `=` in the example of `x=0` you are assigning the value `0` the the variable `x`.
When using a double `=` in the example of `x==0` you are checking if the variable `x` has the value `0`.
It is dangerous in conditions because it is human nature to check for equality using a single `=`, in an `if` statement it would assign `x` to be `0` and it would not run that block of code because `x` would evaluate to `0` (meaning `false`).  