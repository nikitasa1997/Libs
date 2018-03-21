#include <iostream>
#include <iomanip>

#include "matrix.hpp"

int main()
{
    Matrix<double> m;
    std::cin >> m;
    Matrix<double> l = m * m + 2. * m;
    std::cout << l << '\n';

    return 0;
}
