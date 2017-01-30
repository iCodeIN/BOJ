/*************************************************************************
> File Name: 2440 - Print Stars, Part 3.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/2440
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	for (int i = num; i >= 1; --i)
	{
		for (int j = i; j >= 1; --j)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}
}