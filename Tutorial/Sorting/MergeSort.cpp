#include <vector>
#include <iostream>

std::vector<int> merge(std::vector<int> left, std::vector<int> right) {
	std::vector<int> result = {};
	int leftIndex = 0;
	int rightIndex = 0;

	while ((leftIndex < left.size()) && (rightIndex < right.size())) {
		if (left[leftIndex] < right[rightIndex]) {
			result.push_back(left[leftIndex]);
			leftIndex++;
		}
		else {
			result.push_back(right[rightIndex]);
			rightIndex++;
		}
	}
	for (int i = leftIndex; i < left.size(); i++) {
		result.push_back(left[i]);
	}
	for (int i = rightIndex; i < right.size(); i++) {
		result.push_back(right[i]);
	}
	return result;
}

std::vector<int> mergeSort(std::vector<int> numbers) {
	if (numbers.size() <= 1) {
		return numbers;
	}

	int length = numbers.size();
	int middle = length / 2;

	std::vector<int> left = {};
	std::vector<int> right = {};

	for (int i = 0; i < middle; i++) {
		left.push_back(numbers[i]);
	}
	for (int i = middle; i < length; i++) {
		right.push_back(numbers[i]);
	}

	return merge(mergeSort(left), mergeSort(right));
}