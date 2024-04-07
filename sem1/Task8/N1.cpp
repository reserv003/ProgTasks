#include <fstream>
#include <string.h>
#include "mystring.hpp"

int main()
{
    setlocale(LC_ALL, "Russian");
    char text[1000][100]={0};
    char word[100]={0};
    char text1[100]={0};
    char word1[100]={0};
    int n = 0;
    std::ifstream in("input1.txt");
    while (!in.eof())
    {
        in >> word;
        bool repeats = false;
        bool copies = false;
        for (int i = 0; word[i] != '\0'; i++)
        {
            int cnt = 0;
            if (!mt::isVowel(word[i]))
            {
                for (int j = 0; word[j] != '\0'; j++)
                {
                    if (tolower(word[j]) == tolower(word[i]))
                    {
                        cnt++;
                        if (cnt > 1)
                        {
                            repeats = true;
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j<=strlen(word) or j<=strlen(text[i]); j++)
            {
                text1[j] = tolower(text[i][j]);
                word1[j] = tolower(word[j]);
            }
            if ((strcmp(word1, text1))==0)
                copies = true;
        }
        if (!repeats and !copies)
        {
            strcpy_s(text[n], word);
            n++;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        for (int k = 0; k < n - i; k++)
        {
            if (strlen(text[k]) < strlen(text[k + 1]))
            {
                char temp[100];
                strcpy_s(temp, text[k]);
                strcpy_s(text[k], text[k + 1]);
                strcpy_s(text[k + 1], temp);
            }
        }
    }

    std::ofstream out;
    out.open("output1.txt");
    for (int i = 0; i<n and i<=2000; i++)
    {
        out << text[i] << std::endl;
    }
    out.close();
    return 0;
}