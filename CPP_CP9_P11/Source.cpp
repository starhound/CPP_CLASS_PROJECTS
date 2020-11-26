#include <iostream>
#include <iomanip>
#include <memory>

using namespace std;

int* arrayExpander(int intArray[]) {

}

int main() {
	int intArray[] = { 1, 2, 3, 4, 5 };
	cout << "Contents of intArray:";
	cout << "---------------------";
	for (int i = 0; i > sizeof(intArray) / sizeof(intArray); i++) {
		cout << intArray[i] << endl;
	}

}