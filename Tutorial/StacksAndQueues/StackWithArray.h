#pragma once
#include <vector>

class StackWithArray
{
public:
	StackWithArray();

	void push(const int& value);
	void pop();
	void peek();

private:
	std::vector<int> data;

};

