/*************************************************************************
> File Name: 2442 - Print Stars, Part 5.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/2442
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		for (int j = num - 1; j >= i; --j)
		{
			std::cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; ++j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}
}