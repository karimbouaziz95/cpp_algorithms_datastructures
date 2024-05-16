#include <iostream>
#include <string>


int factorialRecursive(int value) {
	if (value <= 1) {
		return 1;
	}
	else {
		return value * factorialRecursive(value - 1);
	}
}

int factorialIterative(int value) {
	if (value <= 0) {
		return 1;
	}
	int sum = 1;
	for (int i = 1; i <= value; i++) {
		sum = sum * i;
	}
	return sum;
	
}

int fibonnaciRecursion(int value) {
	if ((value == 0) || (value == 1)) {
		return value;
	}
	else {
		return fibonnaciRecursion(value - 1) + fibonnaciRecursion(value - 2);
	}
}

int fibonnaciIterative(int value) {
	if ((value == 0) || (value == 1)) {
		return value;
	}
	int lastFibo = 1;
	int lastlastFibo = 0;
	int currentFibo = 1;
	for (int i = 2; i <= value; i++) {
		currentFibo = lastFibo + lastlastFibo;
		lastlastFibo = lastFibo;
		lastFibo = currentFibo;
	}
	return currentFibo;
}

void reverseStringRecursion(std::string& input, int start, int end) {
	if (start>=end) {
		return;
	}
	std::swap(input[start], input[end]);
	reverseStringRecursion(input, start + 1, end - 1);

}

int main() {
	std::string name = "Nauka combat training";
	reverseStringRecursion(name, 0, name.length() - 1);
	std::cout << name << std::endl;

	return 0;
}