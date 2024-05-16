#pragma once
#include <iostream>

class SinglyLinkedList
{

public:
	SinglyLinkedList(const int& value);
	~SinglyLinkedList();

	void append(int value);
	void prepend(int value);
	void insert(int index, int value);

	int getLength() {
		return this->length;
	}

	void removeByIndex(int index);
	int search(int value);
	void reverse();



private:
	struct Node {
		int value;
		Node* next;

		Node(const int &value): value(value), next(nullptr) {}
	};

	bool is_empty;
	int length;
	Node* head;
	Node* tail;

};

