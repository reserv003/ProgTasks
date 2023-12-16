#include <iostream>
#include "matrix.hpp"

int main()
{
    int n, p;
    int mas[100][100];
    std::cin >> n >> p;
    mtr::read(mas, n, p);
    if (mtr::obr(mas, n, p))
        mtr::sort(mas, n, p);
    mtr::write(mas, n, p);
    return 0;
}