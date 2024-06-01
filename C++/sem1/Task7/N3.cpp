#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int mas[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cin >> mas[i][j];
    }
    std::cout << " " << std::endl;
    int strsum, prestrsum, max;
    prestrsum = 0;
    for (int i = 0; i < n; i++)
    {
        strsum = 0;
        for (int j = 0; j < n; j++)
        {
            strsum += mas[i][j];
        }
        if (strsum > prestrsum)
            max = i;
        prestrsum = strsum;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == max)
                std::cout << mas[i][j] + 1 << " ";
            else
                std::cout << mas[i][j] << " ";
        }
        std::cout << std::endl;
    }
}