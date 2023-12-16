#include <iostream>

int main()
{
    int n, p;
    std::cin >> n >> p;
    int** mas = new int* [n];

    for (int i = 0; i < n; i++) 
    {
        mas[i] = new int[p];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            std::cin >> mas[i][j];
    }
    std::cout << " " << std::endl;
    int strsum, prestrsum, max;
    prestrsum = 0;
    for (int i = 0; i < n; i++)
    {
        strsum = 0;
        for (int j = 0; j < p; j++)
        {
            strsum += mas[i][j];
        }
        if (strsum > prestrsum)
            max = i;
        prestrsum = strsum;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (i == max)
                std::cout << mas[i][j] + 1 << " ";
            else
                std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
}