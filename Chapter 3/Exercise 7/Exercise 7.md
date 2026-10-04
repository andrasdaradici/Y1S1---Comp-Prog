# Explain why getchar returns int and not char.

# Answer

`getchar()` returns an `int` because `EOF` is usually `-1`. If it returned a `char`, that `-1` could either roll over (to `255` f.e.) or collide with actual character bytes, causing false `EOF` triggers or missing the end of the stream entirely.