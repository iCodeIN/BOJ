/*************************************************************************
> File Name: 10953 - A + B, Part 5.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/10953
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int numOrder = 0;
	char a, tmp, b;

	std::cin >> numOrder;

	for (int i = 0; i < numOrder; ++i)
	{
		std::cin >> a >> tmp >> b;
		std::cout << static_cast<int>(a - '0') + static_cast<int>(b - '0') << std::endl;
	}

	return 0;
}