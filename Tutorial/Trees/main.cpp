#include <iostream>
#include "BinarySearchTree.h"


int main() {

	BinarySearchTree tree;
	tree.insert(9);
	tree.insert(4);
	tree.insert(6);
	tree.insert(20);
	tree.insert(170);
	tree.insert(15);
	tree.insert(1);
	tree.insert(6);


	return 0;
}

// Node : value, right, left
// constructor(): this.root
// insert()
// lookup() or search()
//
//			9
//		4		20
//	  1	  6	  15	170
// 
// insert: 9, 4, 6, 20, 170, 15, 1