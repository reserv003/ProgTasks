#include <iostream>

int main()
{
    int i = 0, j, n, min=INT_MAX, sum = 0, ind=0;
    std::cin >> j;
    while (j > 0)
    {
        std::cin >> n;
        if (n % 3 == 0 or n % 7 == 0)
        {   
            sum += n;
            if (n < min)
            {
                min = n;
                ind = i;
            }
            ++i;
        }
        --j;
    }
    std::cout << sum << " " << min << " " << ind << std::endl;
}