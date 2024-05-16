#include "StackWithLL.h"
#include <iostream>

StackWithLL::StackWithLL() {
	this->top = nullptr;
	this->bottom = nullptr;
	this->length = 0;
	this->is_empty = true;
}


StackWithLL::~StackWithLL() {
	Node* current = this->top;
	while (current != nullptr) {
		Node* next = current->next;
		std::cout << "Deleting Node with the value: " << current->value << std::endl;
		delete current;
		current = next;
	}
	std::cout << "Stack was deleted" << std::endl;
}

void StackWithLL::push(const int& value) {
	Node* newNode = new Node(value);
	if (this->is_empty) {
		this->top = newNode;
		this->bottom = newNode;
		this->is_empty = false;
	}
	else {
		newNode->next = this->top;
		this->top = newNode;
	}
	this->length++;
}

void StackWithLL::pop() {
	if (this->is_empty) {
		std::cout << "The stack is empty, cannot pop anything!" << std::endl;
	}
	else if (this->length == 1) {
		std::cout << "Pop the value: " << this->top->value << std::endl;
		delete this->top;
		this->top = nullptr;
		this->bottom = nullptr;
		this->length--;
		this->is_empty = true;
	}
	else {
		Node* toPop = this->top;
		std::cout << "Pop the value: " << toPop->value << std::endl;
		this->top = this->top->next;
		delete toPop;
		this->length--;
	}
}

void StackWithLL::peek() {
	if (this->is_empty) {
		std::cout << "The stack is empty" << std::endl;
	}
	else {
		std::cout << "Top value: " << this->top->value << std::endl;
	}
}