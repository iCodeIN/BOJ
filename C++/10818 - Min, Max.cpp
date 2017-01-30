/*************************************************************************
> File Name: 10818 - Min, Max.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/30
> Problem Link: https://www.acmicpc.net/problem/10818
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <climits>
#include <iostream>

int main(int argc, char* argv[])
{
	int numSize = 0;
	std::cin >> numSize;

	int num = 0, minNum = INT_MAX, maxNum = INT_MIN;
	for (int i = 0; i < numSize; ++i)
	{
		std::cin >> num;
		
		if (minNum > num) minNum = num;
		if (maxNum < num) maxNum = num;
	}

	std::cout << minNum << ' ' << maxNum << std::endl;

	return 0;
}