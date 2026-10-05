# Explain the difference between operator precedence and evaluation order using the expression 2 * f(x) + g(x).

# Answer

Operator precedence decides how the expression is grouped, meaning multiplication has higher priority than addition so the expression is treated as (2 * f(x)) + g(x). Evaluation order decides the actual sequence in which the parts run at runtime. Even though precedence says the multiplication happens first conceptually, it does not guarantee that f(x) runs before g(x), and the compiler can evaluate them in either order.