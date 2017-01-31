/*************************************************************************
> File Name: 9012 - Parenthesis.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/31
> Problem Link: https://www.acmicpc.net/problem/9012
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>
#include <string>

std::string IsValid(std::string);

int main(int argc, char* argv[])
{
	int numTest = 0;
	std::cin >> numTest;

	for (int i = 0; i < numTest; ++i)
	{
		std::string parenthesis = "";
		std::cin >> parenthesis;

		std::cout << IsValid(parenthesis);
	}
}

std::string IsValid(std::string parenthesis)
{
	int numParenthesis = 0;

	for (size_t j = 0; j < parenthesis.size(); ++j)
	{
		if (parenthesis[j] == '(')
		{
			numParenthesis++;
		}
		else if (parenthesis[j] == ')')
		{
			numParenthesis--;

			if (numParenthesis < 0)
			{
				return "NO\n";
			}
		}
	}

	if (numParenthesis == 0)
	{
		return "YES\n";
	}

	return "NO\n";
}