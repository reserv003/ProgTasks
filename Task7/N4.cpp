#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	int mas[10000];
	for (int i = 0; i < n; i++)
		std::cin >> mas[i];
	int i = 0;
	while (i < n)
	{
        int a, b, sum;
        a = 0;
        sum = 0;
        b = mas[i];
        while (b > 0)
        {
        a = b % 10;
        b /= 10;
        sum += a;
        }
		if (sum == 10)
		{
			for (int k = i; k < n - 1; k++)
				mas[k] = mas[k + 1];
			n--;
		}
		else i++;
	}
	i = 0;
	while (i < n)
	{
		std::string str = std::to_string(mas[i]);
		reverse(str.begin(), str.end());
		int mas_reverse = stoi(str);
		if (mas[i] == mas_reverse)
		{
			for (int j = n; j > i; j--)
				mas[j] = mas[j - 1];
			n++;
			i++;
		}
		i++;
	}
	for (int i = 0; i < n; i++)
		std::cout << mas[i] << " ";
}