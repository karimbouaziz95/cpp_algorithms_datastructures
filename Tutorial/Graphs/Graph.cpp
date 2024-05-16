#include "Graph.h"


Graph::Graph() {
	this->numberOfNodes = 0;
}

void Graph::addVertex(int node) {
	if (this->adjacentList.count(node) > 0) {
		std::cout << "Node " << node << " is already in the graph" << std::endl;
	}
	else {
		std::vector<int> connection;
		this->adjacentList[node] = connection;
		this->numberOfNodes++;
	}
}

void Graph::addEdge(int node1, int node2) {
	if (this->adjacentList.count(node1) <= 0) {
		std::cout << node1 << " is not the graph" << std::endl;
		return;
	}
	if (this->adjacentList.count(node2) <= 0) {
		std::cout << node2 << " is not the graph" << std::endl;
		return;
	}
	this->adjacentList[node1].push_back(node2);
	this->adjacentList[node2].push_back(node1);
}

void Graph::showConnections() {
	std::cout << "---------------------------------" << std::endl;
	for (auto pair : this->adjacentList) {
		std::cout << pair.first << " --> " << std::flush;
		for (auto value : pair.second) {
			std::cout << value << " " << std::flush;
		}
		std::cout << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
}