#include <iostream>
#include <any>
#include "MyHashTable.h"
#include <set>

int firstRecurringElement(std::vector<int> nums) {
	std::set<int> mySet;
	for (int num : nums) {
		if (mySet.count(num) > 0) {
			return num;
		}
		else {
			mySet.insert(num);
		}
	}
	return -1;
}

int main() {
	std::vector<int> myVec = { 2,3,4,5 };
	std::cout << firstRecurringElement(myVec) << std::endl;

	// {2,1,1,2,3,5,1,2,4}
	// { 2,5,1,2,3,5,1,2,4 }
	// {2,3,4,5}
	/*
	MyHashTable table(3);
	table.printData();
	table.set("Karim", "Bouaziz");
	table.set("aachen", "zebi");
	table.printData();
	table.set("Karim", "Najah");
	table.printData();
	std::cout << table.get("Karim") << std::endl;
	std::cout << table.get("sd") << std::endl;
	table.set("sd", "sd");
	table.printData();
	table.set("aas", "dfxc");
	table.printData();
	table.erase("asx");
	table.erase("Karim");
	table.printData();
	table.set("bouaziz", "karim");
	table.printData();
	table.set("bouazizasd", "karimsd");
	*/

	return 0;
}