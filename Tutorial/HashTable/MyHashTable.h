#pragma once


#include <vector>
#include <iostream>
#include <any>

struct Pair {
	std::string key;
	std::string value;
};

class MyHashTable
{
public:
	MyHashTable(int max_size);
	int getMaxSize();
	int getActualSize();

	void set(std::string key, std::string value);
	std::string get(std::string key);
	void printData();
	void erase(std::string key);

private:

	std::vector<Pair> data;
	int max_size;
	int actualSize;

};

