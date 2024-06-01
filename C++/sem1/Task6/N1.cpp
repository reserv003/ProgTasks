#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int i, j, n;
    std::cin >> j;
    std::vector<int> a;
    while (j>0)
    {
        std::cin >> n;
        if (n%3==0 or n%7==0)
        {
            a.push_back(n);
        }
        --j;
    }

    if (not (a.empty()))
    {
        int d,sum=0;
        for (d = 0; d < a.size(); d++)
        {
            sum += a[d];

        }
        int min = *min_element(a.begin(), a.end());
        std::vector<int>::iterator itr = std::find(a.begin(), a.end(), min);
        std::cout << sum << " " << min << " " << std::distance(a.begin(), itr) << std::endl;
    }
}