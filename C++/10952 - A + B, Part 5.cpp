/*************************************************************************
> File Name: 10952 - A + B, Part 5.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/10952
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0, b = 0;

	while (std::cin >> a >> b)
	{
		if (a == 0 && b == 0) break;

		std::cout << a + b << std::endl;
	}

	return 0;
}