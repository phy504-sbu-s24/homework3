#include <iostream>
#include <vector>

using real_vec_t = std::vector<double>;
using real_mat_t = std::vector<real_vec_t>;

int main() {

    real_mat_t A = {{1.0, 2.0, 3.0, 4.0},
                    {5.0, 6.0, 7.0, 8.0},
                    {9.0, 10.0, 11.0, 12.0},
		    {13.0, 14.0, 15.0, 16.0}};

    // example: compute the sum of the off-diagonal terms

    double off_diag_sum{};

    for (std::size_t irow = 0; irow < A.size(); ++irow) {
        for (std::size_t jcol = 0; jcol < A[irow].size(); ++jcol) {
            if (irow != jcol) {
                off_diag_sum += A[irow][jcol];
            }
        }
    }

    std::cout << "off-diagonal sum = " << off_diag_sum << std::endl;

}
