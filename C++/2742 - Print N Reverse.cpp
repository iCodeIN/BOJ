/*************************************************************************
> File Name: 2742 - Print N Reverse.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/2742
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = n; i >= 1; --i)
	{
		// NOTE: std::endl is (very) slower than '\n'.
		std::cout << i << '\n';
	}

	return 0;
}