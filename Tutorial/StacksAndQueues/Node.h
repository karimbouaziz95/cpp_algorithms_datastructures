#pragma once

struct Node {
	int value;
	Node* next;

	Node(const int &value) : value(value), next(nullptr) {}
};