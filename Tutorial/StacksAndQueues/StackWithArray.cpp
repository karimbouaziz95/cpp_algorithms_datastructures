#include "StackWithArray.h"
#include <iostream>

StackWithArray::StackWithArray() {
	this->data = {};
}

void StackWithArray::push(const int& value) {
	this->data.push_back(value);
}

void StackWithArray::pop() {
	if (this->data.size() != 0) {
		int toPop = this->data[this->data.size() - 1];
		std::cout << "Popped value is: " << toPop << std::endl;
		this->data.pop_back();
	}
	else {
		std::cout << "The stack is empty" << std::endl;
	}
}

void StackWithArray::peek() {
	if (this->data.size() > 0) {
		std::cout << "Top value: " << this->data[this->data.size() - 1] << std::endl;
	}
	else {
		std::cout << "The stack is empty" << std::endl;
	}
}