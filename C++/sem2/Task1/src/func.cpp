#include <func.hpp>
#include <fstream>
#include <string>
#include <ctime>

namespace t1
{
	int read()
	{
		int n = 0;
		std::string line;
		std::fstream f;
		f.open("log.txt", std::ios::in);
		if (f)
		{
			while (getline(f, line))
			{
				n++;
			}
		}
		return n;
	}
	int timer()
	{
		std::time_t time = std::time(nullptr);
		return time;
	}
	void out(int n, std::time_t time)
	{
		std::ofstream out("log.txt", std::ios::binary | std::ios::app);
		{
			out << n + 1 << " " << std::ctime(&time);
		}
		out.close();
	}
}