#include <iostream>
#include "Graph.h"


int main() {

	Graph myGraph;
	myGraph.addVertex(0);
	myGraph.addVertex(0);
	myGraph.addVertex(2);
	myGraph.addVertex(1);
	myGraph.addVertex(5);

	myGraph.addEdge(0, 1);
	myGraph.addEdge(0, 2);
	myGraph.addEdge(0, 5);
	myGraph.addEdge(1, 5);
	myGraph.showConnections();

	return 0;
}