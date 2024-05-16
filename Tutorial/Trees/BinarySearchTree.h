#pragma once
#include "Node.h"


class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void insert(int value);
	Node* lookup(int value);

private:
	Node* root;
	bool is_empty;
	void destroyTree(Node* node);
};

