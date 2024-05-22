#include <iostream>
#include "BinarySearchTree.h"
#include "searches.h"

int main() {

	BinarySearchTree tree;
	tree.insert(9);
	tree.insert(4);
	tree.insert(6);
	tree.insert(20);
	tree.insert(170);
	tree.insert(15);
	tree.insert(1);

	//breadthFirstSearch(tree);
	std::queue<Node*> queue;
	std::vector<int> list;

	queue.push(tree.root);

	breadthFirstSearchRecursive(queue, list);


	return 0;
}