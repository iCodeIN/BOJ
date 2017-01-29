/*************************************************************************
> File Name: 2739 - Gugudan.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/2739
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 1; i <= 9; ++i)
	{
		std::cout << n << " * " << i << " = " << n * i << '\n';
	}

	return 0;
}