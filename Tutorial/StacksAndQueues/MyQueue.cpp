#include "MyQueue.h"
#include <iostream>

MyQueue::MyQueue() {
	this->first = nullptr;
	this->last = nullptr;
	this->length = 0;
}


MyQueue::~MyQueue() {
	Node* current = this->first;
	while (current != nullptr) {
		Node* next = current->next;
		std::cout << "Deleting the Node: " << current->value << std::endl;
		delete current;
		current = next;
	}
	std::cout << "Queue deleted" << std::endl;

}

void MyQueue::peek_back() {
	if (this->length == 0) {
		std::cout << "Queue is empty" << std::endl;
	}
	else {
		std::cout << "Last value: " << this->last->value << std::endl;
	}
}

void MyQueue::peek_front() {
	if (this->length == 0) {
		std::cout << "Queue is empty" << std::endl;
	}
	else {
		std::cout << "First value: " << this->first->value << std::endl;
	}
}

void MyQueue::enqueue(const int& value) {
	Node* newNode = new Node(value);
	if (this->length == 0) {
		this->first = newNode;
		this->last = newNode;
	}
	else {
		this->last->next = newNode;
		this->last = newNode;
	}
	this->length++;
}

void MyQueue::dequeue() {
	if (this->length == 0) {
		std::cout << "The Queue is empty" << std::endl;
	}
	else if (this->length == 1) {
		std::cout << "Dequeueing the value: " << this->first->value << std::endl;
		delete this->first;
		this->first = nullptr;
		this->last = nullptr;
		this->length--;
	}
	else {
		Node* toDequeue = this->first;
		std::cout << "Dequeueing the value: " << toDequeue->value << std::endl;
		this->first = this->first->next;
		delete toDequeue;
		this->length--;
	}
}