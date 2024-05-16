#include <vector>

void bubble_sort(std::vector<int>& numbers) {
	int cnt = 1;
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = 0; j < numbers.size() - cnt; j++) {
			if (numbers[j] > numbers[j + 1]) {
				int tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
		}
		cnt++;
	}
}