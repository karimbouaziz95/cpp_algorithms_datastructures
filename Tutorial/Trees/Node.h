#pragma once

struct Node {
	int value;
	Node* right;
	Node* left;

	Node(const int &value): value(value), right(nullptr), left(nullptr) {}
};