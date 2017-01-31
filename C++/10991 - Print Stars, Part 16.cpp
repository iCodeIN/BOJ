/*************************************************************************
> File Name: 10991 - Print Stars, Part 16.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/31
> Problem Link: https://www.acmicpc.net/problem/10991
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		for (int j = num - i; j >= 1; --j)
		{
			std::cout << " ";
		}

		for (int j = 2; j <= i; ++j)
		{
			std::cout << "* ";
		}

		std::cout << "*";

		std::cout << '\n';
	}
}