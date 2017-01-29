/*************************************************************************
> File Name: 2741 - Print N.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/28
> Problem Link: https://www.acmicpc.net/problem/2741
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		// NOTE: std::endl is (very) slower than '\n'.
		std::cout << i << '\n';
	}

	return 0;
}