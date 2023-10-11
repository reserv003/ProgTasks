#include <iostream>

int main()
{
    int n, a, b, s = 1;
    std::cin >> n;
    while (n>0)
    {
        a = n % 10;
        if (a % 2 == 0)
        {
            s *= a;
        }
        n = n / 10;
    }
    std::cout << s << std::endl;
    return 0;
}