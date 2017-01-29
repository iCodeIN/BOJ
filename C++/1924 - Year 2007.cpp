/*************************************************************************
> File Name: 1924 - Year 2007.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/29
> Problem Link: https://www.acmicpc.net/problem/1924
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int numDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	std::string res[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x = 0, y = 0;

	std::cin >> x >> y;

	int spentDays = 0;
	for (int i = 0; i < x - 1; ++i)
	{
		spentDays += numDays[i];
	}
	spentDays += y;

	std::cout << res[spentDays % 7] << std::endl;
}