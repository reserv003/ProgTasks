#include <iostream>
#include "matrix.hpp"

namespace mtr
{
	void read(int mas[100][100], int n, int p)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < p; j++)
				std::cin >> mas[i][j];
		}
	}

	bool obr(int mas[100][100], int n, int p)
	{
		int max = 0, min = mas[0][0];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < p; j++)
			{
				if (max < mas[i][j])
					max = mas[i][j];
				if (min > mas[i][j])
					min = mas[i][j];
			}
		}
		int maxsum = 0, minsum = 0;
		while (max != 0)
		{
			maxsum += max % 10;
			max /= 10;
		}
		while (min != 0)
		{
			minsum += min % 10;
			min /= 10;
		}
		if (maxsum == minsum)
			return true;
		else
			return false;
	}

	void sort(int mas[100][100], int n, int p)
	{
		int strsum[100] = { 0 };
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < p; j++)
				strsum[i] += mas[i][j];
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n - i; j++)
			{
				if (strsum[j] > strsum[j + 1])
				{
					std::swap(strsum[j], strsum[j + 1]);
					std::swap(mas[j], mas[j + 1]);
				}
			}
		}
	}

	void write(int mas[100][100], int n, int p)
	{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < p; j++)
					std::cout << mas[i][j] << " ";
				std::cout << std::endl;
			}
	}

}