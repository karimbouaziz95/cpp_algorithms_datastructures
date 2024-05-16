#include "QueueWithStacks.h"
#include <iostream>

QueueWithStacks::QueueWithStacks() {
	this->length = 0;
}

void QueueWithStacks::enqueue(int value) {
	while (!this->dequeue_stack.empty()) {
		int topElement = this->dequeue_stack.top();
		this->enqueue_stack.push(topElement);
		this->dequeue_stack.pop();
	}
	this->enqueue_stack.push(value);
	this->length++;
	std::cout << value << " was enqueued successfully." << std::endl;
}

void QueueWithStacks::dequeue() {
	if (this->length != 0) {
		while (!this->enqueue_stack.empty()) {
			int topElement = this->enqueue_stack.top();
			this->dequeue_stack.push(topElement);
			this->enqueue_stack.pop();
		}
		int toDequeue = this->dequeue_stack.top();
		this->dequeue_stack.pop();
		this->length--;
		std::cout << toDequeue << " was dequeued successfully" << std::endl;

	}
	else {
		std::cout << "The Queue is empty" << std::endl;
	}
}