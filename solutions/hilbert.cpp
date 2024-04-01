#include <cassert>
#include <iostream>
#include <vector>

using real_vec_t = std::vector<double>;
using real_mat_t = std::vector<real_vec_t>;

int main() {

    // read in the size of the matrix

    int N{-1};

    std::cout << "Enter the size, N, for the vector: ";
    std::cin >> N;

    assert(N > 0);

    // construct the Hilbert matrix

    // note: here I initialize it to have the desired size, but we
    // could simply push_back to it instead.

    real_mat_t A(N, real_vec_t(N, 0.0));

    for (int irow = 0; irow < N; ++irow) {
        for (int jcol = 0; jcol < N; ++jcol) {
            A[irow][jcol] = 1.0 / static_cast<double>(irow + jcol + 1);
        }
    }

    // read in the elements of vector x

    std::cout << "Enter N elements of vector x: ";

    real_vec_t x(N, 0.0);
    for (int irow = 0; irow < N; ++irow) {
        std::cin >> x[irow];
    }

    // compute the matrix vector product

    real_vec_t b(N, 0.0);

    for (int irow = 0; irow < N; ++irow) {
        for (int m = 0; m < N; ++m) {
            b[irow] += A[irow][m] * x[m];
        }
    }

    std::cout << "product, b = A x: " << std::endl;
    for (auto e : b) {
        std::cout << e << std::endl;
    }

}
