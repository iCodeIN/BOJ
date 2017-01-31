/*************************************************************************
> File Name: 10992 - Print Stars, Part 17.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/31
> Problem Link: https://www.acmicpc.net/problem/10992
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num - 1; ++i)
	{
		for (int j = num - i; j >= 1; --j)
		{
			std::cout << " ";
		}

		for (int j = 1; j <= i * 2 - 1; ++j)
		{
			if (j == 1 || j == i * 2 - 1)
			{
				std::cout << "*";
			}
			else
			{
				std::cout << " ";
			}
		}

		std::cout << '\n';
	}

	for (int i = 1; i <= num * 2 - 1; ++i)
	{
		std::cout << "*";
	}

	std::cout << '\n';
}