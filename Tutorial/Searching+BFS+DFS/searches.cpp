#include "searches.h"

void breadthFirstSearch(BinarySearchTree& tree) {
	Node* currentNode = tree.root;
	std::vector<int> list;
	std::queue<Node*> queue;

	queue.push(currentNode);
	while (queue.size() > 0) {
		currentNode = queue.front();
		std::cout << currentNode->value << std::endl;
		queue.pop();
		list.push_back(currentNode->value);
		if (currentNode->left != nullptr) {
			queue.push(currentNode->left);
		}
		if (currentNode->right != nullptr) {
			queue.push(currentNode->right);
		}
	}
}

void breadthFirstSearchRecursive(std::queue<Node*>& queue, std::vector<int>& list) {
	if (queue.size() == 0) {
		return;
	}

	Node* currentNode = queue.front();
	queue.pop();
	list.push_back(currentNode->value);

	if (currentNode->left != nullptr) {
		queue.push(currentNode->left);
	}
	if (currentNode->right != nullptr) {
		queue.push(currentNode->right);
	}

	return breadthFirstSearchRecursive(queue, list);
}

void DFSInOrder(Node* node, std::vector<int>& list) {
	if (node->left != nullptr) {
		DFSInOrder(node->left, list);
	}
	list.push_back(node->value);
	if (node->right != nullptr) {
		DFSInOrder(node->right, list);
	}
}

void DFSPreOrder(Node* node, std::vector<int>& list) {
	list.push_back(node->value);
	if (node->left != nullptr) {
		DFSPreOrder(node->left, list);
	}
	if (node->right != nullptr) {
		DFSPreOrder(node->right, list);
	}
}

void DFSPostOrder(Node* node, std::vector<int>& list) {
	if (node->left != nullptr) {
		DFSPostOrder(node->left, list);
	}
	if (node->right != nullptr) {
		DFSPostOrder(node->right, list);
	}
	list.push_back(node->value);
}
