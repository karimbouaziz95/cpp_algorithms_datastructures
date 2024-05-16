#include <iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"


int main() {

	SinglyLinkedList lista(5);
	lista.append(10);
	lista.reverse();
	std::cout << std::endl;
	
	return 0;
}