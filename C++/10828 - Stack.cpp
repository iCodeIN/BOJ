/*************************************************************************
> File Name: 10828 - Stack.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/01/28
> Problem Link: https://www.acmicpc.net/problem/10828
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char* argv[])
{
	int numOrder = 0;
	std::string order;
	std::stack<int> intStack;

	std::cin >> numOrder;

	for (int i = 0; i < numOrder; ++i)
	{
		std::cin >> order;

		if (order == "push")
		{
			int num = 0;
			std::cin >> num;

			intStack.push(num);
		}
		else if (order == "pop")
		{
			if (intStack.empty())
			{
				std::cout << -1 << std::endl;
			}
			else
			{
				std::cout << intStack.top() << std::endl;
				intStack.pop();
			}
		}
		else if (order == "size")
		{
			std::cout << intStack.size() << std::endl;
		}
		else if (order == "empty")
		{
			if (intStack.empty())
			{
				std::cout << 1 << std::endl;
			}
			else
			{
				std::cout << 0 << std::endl;
			}
		}
		else if (order == "top")
		{
			if (intStack.empty())
			{
				std::cout << -1 << std::endl;
			}
			else
			{
				std::cout << intStack.top() << std::endl;
			}
		}
	}

	return 0;
}