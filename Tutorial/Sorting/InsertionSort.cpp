#include <vector>


void insertion_sort(std::vector<int>& numbers) {
	int i = 1;
	while (i < numbers.size()) {
		for (int j = i; j > 0; j--) {
			if (numbers[j] < numbers[j - 1]) {
				int tmp = numbers[j];
				numbers[j] = numbers[j - 1];
				numbers[j - 1] = tmp;
			}
			else {
				break;
			}
		}
		i++;
	}
}