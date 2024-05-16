#include <vector>

void selection_sort(std::vector<int>& numbers) {
	for (int i = 0; i < numbers.size(); i++) {
		int smallest = numbers[i];
		int index_smallest = i;
		for (int j = i + 1; j < numbers.size(); j++) {
			if (numbers[j] < smallest) {
				smallest = numbers[j];
				index_smallest = j;
			}
		}
		numbers[index_smallest] = numbers[i];
		numbers[i] = smallest;
	}
}