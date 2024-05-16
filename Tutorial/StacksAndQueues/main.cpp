#include <iostream>
#include "StackWithLL.h"
#include "StackWithArray.h"
#include "MyQueue.h"
#include "QueueWithStacks.h"


int main() {
	QueueWithStacks queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.dequeue();
	queue.enqueue(4);
	queue.enqueue(5);

	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();

	std::cout << std::endl;
	return 0;
}