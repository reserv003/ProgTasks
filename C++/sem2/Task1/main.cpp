#include <iostream>
#include <fstream>
#include <func.hpp>
#include <ctime>
#include <string>
int main()
{
	int n = t1::read();
	std::time_t time = t1::timer();
	t1::out(n, time);
	return 0;
}