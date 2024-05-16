#pragma once
#include "Node.h"

class StackWithLL
{
public:
	StackWithLL();
	~StackWithLL();

	void push(const int& value);
	void pop();
	void peek();

private:
	Node* top;
	Node* bottom;
	int length;
	bool is_empty;

};

