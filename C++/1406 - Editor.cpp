/*************************************************************************
> File Name: 1406 - Editor.cpp
> Author: Chan-Ho Chris Ohk
> Created Time: 2017/02/10
> Problem Link: https://www.acmicpc.net/problem/1406
> Copyright (c) 2017, Chan-Ho Chris Ohk
*************************************************************************/
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char* argv[])
{
	std::string input;
	std::cin >> input;

	std::stack<char> left, right;

	for (size_t i = 0; i < input.size(); ++i)
	{
		left.push(input[i]);
	}

	int nOrder;
	std::cin >> nOrder;

	while (nOrder--)
	{
		char order;
		std::cin >> order;

		// Move cursor one space to left
		if (order == 'L')
		{
			if (!left.empty())
			{
				right.push(left.top());
				left.pop();
			}
		}
		// Move cursor one space to right
		else if (order == 'D')
		{
			if (!right.empty())
			{
				left.push(right.top());
				right.pop();
			}
		}
		// Delete character to left of cursor
		else if (order == 'B')
		{
			if (!left.empty())
			{
				left.pop();
			}
		}
		// Add character to right of cursor (cursor is positioned to right of character)
		else if (order == 'P')
		{
			char c;
			std::cin >> c;
			left.push(c);
		}
	}

	while (!left.empty())
	{
		right.push(left.top());
		left.pop();
	}

	while (!right.empty())
	{
		std::cout << right.top();
		right.pop();
	}

	std::cout << '\n';

	return 0;
}