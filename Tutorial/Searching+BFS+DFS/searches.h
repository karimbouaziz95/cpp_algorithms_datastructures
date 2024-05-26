#pragma once
#include "BinarySearchTree.h"
#include <vector>
#include <queue>
#include <iostream>
#include <stack>

void breadthFirstSearch(BinarySearchTree& tree);
void breadthFirstSearchRecursive(std::queue<Node*>& queue, std::vector<int>& list);

void DFSInOrder(Node* node, std::vector<int>& list);
void DFSPreOrder(Node* node, std::vector<int>& list);
void DFSPostOrder(Node* node, std::vector<int>& list);








