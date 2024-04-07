#include <iostream>
#include <fstream>
#include <string.h>
#include "mystring.hpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    int cnsnts[100];
    char words[1000][100];
    char wordsout[1000][100];
    char word[100] = { 0 };
    int n = 0;
    bool pal = false;
    std::ifstream in("input2.txt");
    while (!in.eof())
    {
        in >> word;
        std::string wstr = word;
        if (std::equal(wstr.begin(), wstr.end(), wstr.rbegin()))
            pal = true;
        strcpy_s(words[n], word);
        strcpy_s(wordsout[n], word);
        n++;
    }
    if (pal)
    {
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < strlen(words[i]); j++)
            {
                words[i][j] = tolower(words[i][j]);
                if (mt::isConsonant(words[i][j]))
                    cnt++;
            }
            cnsnts[i] = cnt;
        }
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (cnsnts[i] < cnsnts[j])
                {
                    std::swap(cnsnts[i], cnsnts[j]);
                    std::swap(words[i], words[j]);
                    std::swap(wordsout[i], wordsout[j]);
                }
        for (int i=0; i<n; i++)
            std::cout << wordsout[i] << " " << cnsnts[i] << std::endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < strlen(words[i]); j++)
            {
                words[i][j] = tolower(words[i][j]);
                if (mt::isVowel(words[i][j]))
                {
                    for (int k = j; k < strlen(words[i]); k++)
                    {
                        words[i][k] = words[i][k + 1];
                        wordsout[i][k] = wordsout[i][k + 1];
                    }
                    j--;
                }

            }
        }
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (strcmp(words[i], words[j]) == -1)
                {
                    std::swap(words[i], words[j]);
                    std::swap(wordsout[i], wordsout[j]);
                }
        for (int i = 0; i < n; i++)
            std::cout << wordsout[i] << std::endl;
    }
    return 0;
}