#pragma once
#include <stack>

class QueueWithStacks
{
public:
	QueueWithStacks();

	void enqueue(int value);
	void dequeue();

private:

	int length;

	std::stack<int> enqueue_stack;
	std::stack<int> dequeue_stack;

};

