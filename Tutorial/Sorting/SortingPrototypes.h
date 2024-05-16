#pragma once
#include <vector>


void bubble_sort(std::vector<int>& numbers);

void selection_sort(std::vector<int>& numbers);

void insertion_sort(std::vector<int>& numbers);

std::vector<int> merge(std::vector<int> left, std::vector<int> right);

std::vector<int> mergeSort(std::vector<int> numbers);