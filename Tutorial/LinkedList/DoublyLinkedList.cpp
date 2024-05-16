#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList(const int& value) {
	this->head = new Node(value);
	this->tail = this->head;

	this->length = 1;
	this->is_empty = false;
}

DoublyLinkedList::~DoublyLinkedList() {
	Node* current = this->head;
	while (current != nullptr) {
		Node* next = current->next;
		std::cout << "Deleting the node with the value: " << current->value << std::endl;
		delete current;
		current = next;
	}
	std::cout << "Doubly Linked list is deleted" << std::endl;

}

void DoublyLinkedList::append(int value) {
	Node* newNode = new Node(value);
	if (this->head == nullptr) {
		this->head = newNode;
		this->tail = newNode;
		this->is_empty = false;
	}
	else {
		newNode->previous = this->tail;
		this->tail->next = newNode;
		this->tail = newNode;
		this->is_empty = false;
	}
	this->length++;
}

void DoublyLinkedList::prepend(int value) {
	Node* newNode = new Node(value);
	if (this->head == nullptr) {
		this->head = newNode;
		this->tail = newNode;
	}
	else {
		newNode->next = this->head;
		this->head->previous = newNode;
		this->head = newNode;
	}
	this->length++;

}

void DoublyLinkedList::insert(int value, int index) {
	if (index <= 0) {
		this->prepend(value);
	}
	else if (index >= this->length) {
		this->append(value);
	}
	else {
		Node* pre = this->head;
		for (int i = 0; i < index - 1; i++) {
			pre = pre->next;
		}
		Node* aft = pre->next;
		Node* newNode = new Node(value);
		newNode->next = aft;
		newNode->previous = pre;
		pre->next = newNode;
		aft->previous = newNode;
		this->length++;
	}
}

void DoublyLinkedList::deleteByIndex(int index) {
	if (!this->is_empty) {
		if ((index < 0) || (index >= this->length)) {
			std::cout << "Out of range, can't delete the index " << index << std::endl;
			return;
		}
		else if (index == 0) {
			Node* toDelete = this->head;
			this->head = this->head->next;
			this->head->previous = nullptr;
			delete toDelete;
		}
		else if (index == this->length - 1) {
			Node* toDelete = this->tail;
			this->tail = this->tail->previous;
			this->tail->next = nullptr;
			delete toDelete;
		}
		else {
			Node* pre = this->head;
			for (int i = 0; i < index - 1; i++) {
				pre = pre->next;
			}
			Node* toDelete = pre->next;
			Node* aft = toDelete->next;

			pre->next = aft;
			aft->previous = pre;
			delete toDelete;
		}
		this->length--;
		if (this->length == 0) {
			this->is_empty = true;
			this->head = nullptr;
			this->tail = nullptr;
		}
	}
	else {
		std::cout << "The LinkedList is empty" << std::endl;
	}
}

int DoublyLinkedList::search(int value) {
	Node* current = this->head;
	int index = 0;
	while (current != nullptr) {
		if (current->value == value) {
			return index;
		}
		current = current->next;
		index++;
	}
	return INT_MIN;
}

void DoublyLinkedList::reverse() {
	if (this->length > 1) {
		Node* current = this->head;
		while (current != nullptr) {
			Node* tmp = current->next;
			current->next = current->previous;
			current->previous = tmp;
			current = tmp;
		}
		Node* inter = this->head;
		this->head = this->tail;
		this->tail = inter;
	}
}