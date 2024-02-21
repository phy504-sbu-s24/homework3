# Homework #3

### due: Wed Feb 28, 2024

> Each student is responsible for doing their own work.  You are welcome to
> discuss this on slack or in class, but when it comes to writing the code,
> you are expected to write it yourself (and not just copy from someone).

> Note: using ChatGPT or similar AI tools to write your code is not allowed.

1. In class, we created a [simple matrix](https://zingale.github.io/phy504/cxx-matrix-example.html)
   as `std::vector<std::vector<double>>`.  A simple version of that code
   is in this repo as `simple_matrix.cpp`.

   As written, the matrix, `A`, is $4\times 4$, but we'll consider it to be
   $M\times N$ and try to work for a general matrix.

   Modify that code to do the following:

   * Read in from the user N numbers and store them in a vector call `x`.

   * Compute the matrix vector product $A x$
