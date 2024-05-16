#include "MyHashTable.h"


MyHashTable::MyHashTable(int max_size) {

	this->max_size = max_size;
	this->actualSize = 0;

}

int MyHashTable::getMaxSize() {
	return this->max_size;
}

int MyHashTable::getActualSize() {
	return this->actualSize;
}

void MyHashTable::set(std::string key, std::string value) {
	for (int i = 0; i < this->actualSize; i++) {
		if (key == this->data[i].key) {
			this->data[i].value = value;
			return;
		}
	}
	if (this->actualSize < this->max_size) {
		Pair newPair;
		newPair.key = key;
		newPair.value = value;
		this->data.push_back(newPair);
		this->actualSize++;
	}
	else {
		std::cout << "The Hash map is full!" << std::endl;
	}
}

std::string MyHashTable::get(std::string key) {
	for (auto pair: this->data) {
		if (pair.key == key) {
			return pair.value;
		}
	}
	std::string result = key + " is not in the table";
	return result;
}

void MyHashTable::printData() {
	for (Pair pair : this->data) {
		std::cout << pair.key << " : " << pair.value << std::endl;
	}
	std::cout << std::endl;
}

void MyHashTable::erase(std::string key) {
	for (int i = 0; i < this->actualSize; i++) {
		if (this->data[i].key == key) {
			this->data.erase(this->data.begin()+i);
			this->actualSize--;
			return;
		}
	}
	std::cout << key << " is not in the map, nothing to erase" << std::endl;
}
