#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int mas[10000];
    int summas[10000];
    int maxmas[10000];
    for (int i = 0; i < n; i++)
    {
        std::cin >> mas[i];
    }
    for (int i = 0; i < n; i++)
    {
        int a, b, sum, sump, max;
        a = 0;
        sum = 0;
        max = 0;
        b = mas[i];
        while (b > 0)
        {
            a = b % 10;
            b /= 10;
            sum += a;
            if (a > max)
                max = a;
        }
        summas[i] = sum;
        maxmas[i] = max;
    }
    for (int i = 1; i < n; ++i)
    {
        for (int k = 0; k < n - i; k++)
        {
            if ((summas[k] < summas[k + 1]) or ((summas[k] == summas[k + 1]) and (maxmas[k] < maxmas[k + 1])) or ((summas[k] == summas[k + 1]) and (maxmas[k] = maxmas[k + 1]) and (mas[k] < mas[k + 1])))
            {
                int temp = mas[k];
                int sumtemp = summas[k];
                int maxtemp = maxmas[k];
                mas[k] = mas[k + 1];
                summas[k] = summas[k + 1];
                maxmas[k] = maxmas[k + 1];
                mas[k + 1] = temp;
                summas[k + 1] = sumtemp;
                maxmas[k + 1] = maxtemp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << mas[i] << " ";
}