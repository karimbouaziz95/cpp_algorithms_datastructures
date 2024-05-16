#pragma once
#include <iostream>
class DoublyLinkedList
{
public:
	DoublyLinkedList(const int& value);
	~DoublyLinkedList();

	void append(int value);
	void prepend(int value);
	void insert(int value, int index);
	void deleteByIndex(int index);
	int search(int value);
	void reverse();

private:
	struct Node {
		int value;
		Node* next;
		Node* previous;

		Node(const int& value) : value(value), next(nullptr), previous(nullptr) {}
	};

	int length;
	bool is_empty;
	Node* head;
	Node* tail;
};

