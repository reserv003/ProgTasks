#include <iostream>
#include <cstring>

class Stroka
{
private:
    char* str;
public:
    Stroka(const char* st0 = "")
    {
        str = new char[strlen(st0) + 1];
        strcpy(str, st0);
    }
    Stroka(const Stroka& other)  //Копирование
    {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    Stroka& operator=(const Stroka& other) //Присваивание копирования
    {
        if (this != &other) //Проверка на самоприсваивание
        {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    ~Stroka()
    {
        delete[] str;
    }

    void print()
    {
        std::cout << str << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Stroka str1("Строка копируется");
    Stroka str2 = str1;
    Stroka str3 = str1;

    str1.print();
    str2.print();
    str3.print();