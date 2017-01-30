/*************************************************************************
> File Name: 2446 - Print Stars, Part 9.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/31
> Problem Link: https://www.acmicpc.net/problem/2446
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		for (int j = 1; j <= (i - 1); ++j)
		{
			std::cout << " ";
		}

		for (int j = 2 * (num - i + 1) - 1; j >= 1; --j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	for (int i = num - 1; i >= 1; --i)
	{
		for (int j = (i - 1); j >= 1; --j)
		{
			std::cout << " ";
		}

		for (int j = 1; j <= 2 * (num - i + 1) - 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}
}