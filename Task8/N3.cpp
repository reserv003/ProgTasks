#include <iostream>
#include <fstream>
#include <string.h>
#include "mystring.hpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    char text[1000][100] = { 0 };
    char word[100] = { 0 };
    char text1[1000][100] = { 0 };
    char oth[1000][1] = { 0 };
    int n = 0;
    int cnt[100] = { 0 };
    std::ifstream in("input3.txt");
    while (!in.eof())
    {
        in >> word;
        char word1[100] = { 0 };
        int k = 0;
        int vowelsc = 0;
        for (int i = 0; word[i] != '\0'; i++)
        {
            bool repeats = false;
            if (mt::isVowel(word[i]))
            {
                vowelsc++;
                for (int j = 0; j<i; j++)
                {
                    if (tolower(word[j]) == tolower(word[i]))
                    {
                        repeats = true;
                    }
                }
                if (repeats)
                    vowelsc--;
                else
                    while (k < vowelsc)
                    {
                        word1[k] = word[i];
                        k++;
                    }
            }
        }
        if (vowelsc >= 4)
        {
            for (int i = 0; word[i] != '\0'; i++)
            {
                word[i] = toupper(word[i]);
            }
            if (('!' <= word[strlen(word)-1] && word[strlen(word)-1] <= '/'))
            {
                oth[n][0] = word[strlen(word)-1];
                word[strlen(word)-1] = '\0';
                strcpy_s(text[n], word);
            }
            else
                strcpy_s(text[n], word);
            strcpy_s(text1[n], word1);
        }
        else
            strcpy_s(text[n], word);
        cnt[n] = vowelsc;
        n++;
    }
    std::ofstream out;
    out.open("output3.txt");
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] >= 4)
        {
            out << text[i] << "(" << text1[i] << ")" << oth[i] << " ";
            std::cout << text[i] << " " << cnt[i] << " " << "(" << text1[i] << ")" << oth[i] << std::endl;
        }
        else
        {
            out << text[i] << " ";
            std::cout << text[i] << " " << cnt[i] << std::endl;
        }
    }
    out.close();
    return 0;
}