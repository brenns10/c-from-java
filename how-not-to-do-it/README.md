# Why you should never put definitions in header files.

The only things that belong in a header file are declarations (and preprocessor
macros, like `#define`).  Take a look at this code, and the error messages it
produces, to see why.

```bash
$ gcc -c -o other.o other.c
$ gcc -c -o main.o main.c
$ gcc -o main other.o main.o
main.o: In function `increment':
main.c:(.text+0x0): multiple definition of `increment'
other.o:other.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
```

What happened?

1. The definition of function `increment()` was `#include`'d into both `main.c`,
   and `other.c`.
2. So, two copies of it were compiled, one in `main.o`, and the other in
   `other.o`.
3. When we linked the two objects together, the two definitions collided, and
  the linker didn't know which one to choose!

To fix it: move `increment()`'s definition into one of the `.c` files, and put
just its definition in the header.

Moral of the story: if you have variables and functions you'd like in a header,
only put their declarations in it!  Otherwise, you'll get funky linker errors
like this one.
