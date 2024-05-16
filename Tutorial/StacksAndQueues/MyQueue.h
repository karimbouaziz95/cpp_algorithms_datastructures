#pragma once
#include "Node.h"

class MyQueue
{
public:
	MyQueue();
	~MyQueue();

	void peek_front();
	void peek_back();

	void enqueue(const int& value);
	void dequeue();


private:
	Node* first;
	Node* last;
	int length;
};

