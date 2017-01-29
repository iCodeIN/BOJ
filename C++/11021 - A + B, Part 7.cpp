/*************************************************************************
> File Name: 11021 - A + B, Part 7.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/11021
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int numOrder = 0;
	int a = 0, b = 0;

	std::cin >> numOrder;

	for (int i = 0; i < numOrder; ++i)
	{
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a + b << std::endl;
	}

	return 0;
}