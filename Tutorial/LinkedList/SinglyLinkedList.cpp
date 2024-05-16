#include "SinglyLinkedList.h"


SinglyLinkedList::SinglyLinkedList(const int &value) {

	this->head = new Node(value);
	this->tail = this->head;

	this->is_empty = false;
	this->length = 1;
}

SinglyLinkedList::~SinglyLinkedList() {
	Node* current = this->head;
	while (current != nullptr) {
		Node* next = current->next;
		std::cout << "Deleting the node with the value: " << current->value << std::endl;
		delete current;
		current = next;
	}
	std::cout << "Linked list is deleted" << std::endl;
}

void SinglyLinkedList::append(int value) {
	Node* newNode = new Node(value);
	if (this->head == nullptr) {
		this->head = newNode;
		this->tail = newNode;
		this->is_empty = false;
	}
	else {
		this->tail->next = newNode;
		this->tail = newNode;
	}
	this->length++;
}


void SinglyLinkedList::prepend(int value) {
	Node* newNode = new Node(value);
	if (this->head == nullptr) {
		this->head = newNode;
		this->tail = newNode;
		this->is_empty = false;
	}
	else {
		newNode->next = this->head;
		this->head = newNode;
	}
	this->length++;
}

void SinglyLinkedList::insert(int index, int value) {
	if (index <= 0) {
		this->prepend(value);
	}
	else if (index >= this->length){
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
		pre->next = newNode;
		this->length++;
	}
}

void SinglyLinkedList::removeByIndex(int index) {
	if (!this->is_empty) {

		if ((index < 0) || (index >= this->length)) {
			std::cout << "Out of range, can't delete the index " << index << std::endl;
		}
		else if (index == 0) {
			Node* current = this->head;
			this->head = this->head->next;
			delete current;
			this->length--;
		}
		else if (index == this->length - 1) {
			Node* current = this->head;
			while (current->next->next != nullptr) {
				current = current->next;
			}
			Node* toDelete = current->next;
			current->next = nullptr;
			delete toDelete;
			this->tail = current;
			this->length--;
		}
		else {
			Node* pre = this->head;
			for (int i = 0; i < index-1; i++) {
				pre = pre->next;
			}
			Node* toDelete = pre->next;
			Node* aft = toDelete->next;
			pre->next = aft;
			delete toDelete;
			this->length--;
		}
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

int SinglyLinkedList::search(int value) {
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

void SinglyLinkedList::reverse() {
	if (this->length > 1) {
		Node* first = this->head;
		Node* second = first->next;
		while (second != nullptr) {
			Node* tmp = second->next;
			second->next = first;
			first = second;
			second = tmp;
		}
		this->head->next = nullptr;
		Node* inter = this->head;
		this->head = this->tail;
		this->tail = inter;
	}
}