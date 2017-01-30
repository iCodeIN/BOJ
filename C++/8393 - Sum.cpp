/*************************************************************************
> File Name: 8393 - Sum.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/8393
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int num = 0;
	std::cin >> num;

	int sum = 0;
	for (int i = 1; i <= num; ++i)
	{
		sum += i;
	}

	std::cout << sum << std::endl;

	return 0;
}