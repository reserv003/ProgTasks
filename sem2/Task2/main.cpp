#include <iostream>
#include <cmath>

class Par
{
	float m_a, m_b, m_h;
public:
	Par(float a, float b, float h)
	{
		m_a = a;
		m_b = b;
		m_h = h;
	}

	//Сеттеры
	void setA(float a)
	{
		if (a < 0)
			std::cout << "Отрицательное число A" << std::endl;
		m_a = a;
	}

	void setB(float b)
	{
		if (b < 0)
			std::cout << "Отрицательное число B" << std::endl;
		m_b = b;
	}
	void setС(float h)
	{
		if (h < 0)
			std::cout << "Отрицательное число С" << std::endl;
		m_h = h;
	}

	float Square() //Формула для нахождения площади
	{
		return (m_a * m_h);
	}

	float Perimetr() //Формула для нахождения периметра
	{
		return ((m_a + m_b)*2);
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Par p1(35,10,6);

	std::cout << "Площадь равна: " << p1.Square() << std::endl;
	std::cout << "Периметр равен: " << p1.Perimetr() << std::endl;

	return 0;
}