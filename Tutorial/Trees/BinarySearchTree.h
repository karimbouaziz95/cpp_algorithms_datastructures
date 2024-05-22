#pragma once
#include "Node.h"


class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void insert(int value);
	Node* lookup(int value);
	Node* root;

private:
	bool is_empty;
	void destroyTree(Node* node);
};

