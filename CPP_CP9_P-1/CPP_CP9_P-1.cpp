//Wesley Reid
//March 24th 2020
//Chapter 9 Assignment

#include <iostream>
#include <iomanip>
#include <memory>

using namespace std;

int arrayExpander(int intArray[]) {
	cout << "Array Size:" << endl;
	cout << "---------------------" << endl;

	int arraySize = sizeof(intArray);

	cout << arraySize << endl;
	cout << "New Array Size:" << endl;
	cout << "---------------------" << endl;

	int newSize = arraySize * 2;

	cout << newSize << endl;

	int *newArray = new int[newSize];

	for (int i = 0; i < newSize; i++) {
		if (i > arraySize) {
			newArray[i] = 0;
		}
		else {
			newArray[i] = intArray[i];
		}
	}

	cout << "Contents of newArray" << endl;
	cout << "---------------------" << endl;

	for (int i = 0; i < newSize; i++) 
		cout << newArray[i] << endl;

	return *newArray;
}

int main() {
	int intArray[] = { 1, 2, 3, 4, 5 };

	cout << "Contents of intArray:" << endl;
	cout << "---------------------" << endl;

	for (int i = 0; i < 5; i++) {
		cout << intArray[i] << endl;
	}

	int pointer = arrayExpander(intArray);
	cout << "Pointer value of newArray" << endl;
	cout << "---------------------" << endl;
	cout << pointer << endl;

	return 0;
}

