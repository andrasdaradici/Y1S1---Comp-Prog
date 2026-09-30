# Explain, in your own words, why C functions compute with values and not with symbolic expressions.

# Answer

In C, the argument that is passed to a function always evaluates before the function itself even runs. So e.g. if you write `f(2 + 3)`, C will not pass `2+3` as the value of the parameter of function `f`. It will first compute `2+3` (which is `5`), then it will pass the value of it to the function `f`.
Logical Flow
- When `f(2 + 3)` is called.
- `2 + 3` is computed, it is `5`.
- `5` gets passed as the value of the parameter of the function `f`.
- The function `f` computes for value `5` and returns the computed value.