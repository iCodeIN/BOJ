/*************************************************************************
> File Name: 2438 - Print Stars, Part 1.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/2438
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		for (int j = (num - i) + 1; j <= num; ++j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}
}