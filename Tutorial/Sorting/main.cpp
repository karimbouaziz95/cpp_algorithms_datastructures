#include <iostream>
#include <algorithm>
#include <vector>
#include "SortingPrototypes.h"


int main() {
	//std::vector<int> numbers = { 2,65,34,2,1,7,8 };
	std::vector<int> numbers = { 10,3,4,8,1,0,18,22 };

	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	numbers = mergeSort(numbers);
	//bubble_sort(numbers);
	std::cout << "Sorted vectors: " << std::endl;
	for (int num : numbers) {
		std::cout << num << " ";
	}


	return 0;
}