#pragma once
#include "Node.h"
#include <unordered_map>
#include <iostream>
#include <vector>

class Graph
{
public:
	Graph();
	void addVertex(int node);
	void addEdge(int node1, int node2);
	void showConnections();

private:
	int numberOfNodes;
	std::unordered_map<int, std::vector<int>> adjacentList;

};

