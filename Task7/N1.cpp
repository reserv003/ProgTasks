#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int mas[10000];
    for (int i = 0; i < n; i++)
    {
        std::cin >> mas[i];
    }
    bool is_repd = false;
    for (int i = 0; i < n; i++)
    {
        int a, b, prev, j, x;
        a = 0;
        x = 0;
        j = 1;
        b = mas[i];
        while (b > 0)
        {
            prev = a;
            a = b % 10;
            if (a == prev)
            {
                j++;
            }
            b /= 10;
            x++;
        }
        if ((j == x) and (x!=1))
        {
            is_repd = true;
            break;
        }
    }
    if (not is_repd)
    {
        for (int i = 1; i < n; ++i)
        {
            for (int k = 0; k < n - i; k++)
            {
                if (mas[k] > mas[k + 1])
                {
                    int temp = mas[k];
                    mas[k] = mas[k + 1];
                    mas[k + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
            std::cout << mas[i] << " ";
    }
}
