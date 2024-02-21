# Homework #3

### due: Wed Feb 28, 2024

> Each student is responsible for doing their own work.  You are welcome to
> discuss this on slack or in class, but when it comes to writing the code,
> you are expected to write it yourself (and not just copy from someone).

> Note: using ChatGPT or similar AI tools to write your code is not allowed.

1. In class, we created a [simple matrix](https://zingale.github.io/phy504/cxx-matrix-example.html)
   as `std::vector<std::vector<double>>`.  A simple version of that code
   is in this repo for reference, as `simple_matrix.cpp`.

   Using the same datatypes, `real_vec_t` and `real_mat_t`, write a new code
   that does the following:

   * Read in from the user the size, $N$, for a square matrix.

   * Create an $N \times N$ [Hilbert matrix](https://en.wikipedia.org/wiki/Hilbert_matrix)
     by setting the values as:

     $$H_{ij} = \frac{1}{i + j + 1}$$

     where $i = 0, \ldots, N-1$, and similarly for $j$.

   * Read in from the user $N$ numbers and store them in a vector call $x$

   * Compute the matrix vector product $A x$ by writing the appropriate loops
     and output the result.

2.
