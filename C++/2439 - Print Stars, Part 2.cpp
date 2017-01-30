/*************************************************************************
> File Name: 2439 - Print Stars, Part 2.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/2439
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = 1; i <= num; ++i)
	{
		for (int j = 1; j < (num - i) + 1; ++j)
		{
			std::cout << " ";
		}
		for (int j = (num - i) + 1; j <= num; ++j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}
}