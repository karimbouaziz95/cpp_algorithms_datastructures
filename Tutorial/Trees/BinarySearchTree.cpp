#include "BinarySearchTree.h"
#include <iostream>


BinarySearchTree::BinarySearchTree() {
	this->root = nullptr;
	this->is_empty = true;
}

BinarySearchTree::~BinarySearchTree() {
	this->destroyTree(this->root);
}

void BinarySearchTree::destroyTree(Node* node) {
	if (node != nullptr) {
		this->destroyTree(node->left);
		this->destroyTree(node->right);
		std::cout << "Node with value: " << node->value << " was deleted" << std::endl;
		delete node;
	}
}

void BinarySearchTree::insert(int value) {
	if (this->is_empty) {
		this->root = new Node(value);
		this->is_empty = false;
		return;
	}
	Node* current = this->root;
	Node* parent = nullptr;

	while (current != nullptr) {
		parent = current;
		if (value == current->value) {
			std::cout << value << " is in the tree" << std::endl;
			return;
		}
		else if (value < current->value) {
			current = current->left;
		}
		else {
			current = current->right;
		}
	}
	if (value < parent->value) {
		parent->left = new Node(value);
	}
	else {
		parent->right = new Node(value);
	}
}

Node* BinarySearchTree::lookup(int value) {
	Node* currentNode = this->root;
	while (currentNode != nullptr) {
		if (currentNode->value == value) {
			return currentNode;
		}
		else if (value > currentNode->value) {
			currentNode = currentNode->right;
		}
		else {
			currentNode = currentNode->left;
		}
	}
	return nullptr;
}

