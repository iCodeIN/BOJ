/*************************************************************************
> File Name: 10799 - SteelRod.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/02/08
> Problem Link: https://www.acmicpc.net/problem/10799
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char* argv[])
{
	std::string parenthesis = "";
	std::cin >> parenthesis;

	std::stack<int> intStack;
	int ans = 0;

	for (int i = 0; i < parenthesis.size(); ++i)
	{
		if (parenthesis[i] == '(')
		{
			intStack.push(i);
		}
		else
		{
			// Laser
			if (intStack.top() + 1 == i)
			{
				intStack.pop();
				ans += intStack.size();
			}
			// Steel Rod
			else
			{
				intStack.pop();
				ans += 1;
			}
		}
	}

	std::cout << ans << '\n';
	
	return 0;
}