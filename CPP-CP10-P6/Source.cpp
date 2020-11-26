//Wesley Reid
//March 24th 2020
//Chapter 10 Assignment #6 - Vowels and Consonants 

#include <iostream>;
#include <iomanip>;
#include <string>
using namespace std;

int main() {
	cout << "Please enter a word: " << endl;
	string input = "";
	getline(cin, input);
	int size = input.size();

	cout << "String size: " << size << endl;
	cout << "---------------------------" << endl;

	char *inputArray = new char[size];
	
	cout << "inputArray contents:" << endl;

	for (int i = 0; i < size; i++) {
		inputArray[i] = input[i];
		cout << inputArray[i] << endl;
	}
	int vowel = 0;
	int consonant = 0;
	for (int i = 0; i < size; i++) {
		char c = toupper(inputArray[i]);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			vowel++;
		else
			consonant++;
	}
	cout << "Vowels in inputArray: " << vowel << end;
	cout << "Consonants in inputArray: " << consonant << endl;
	cout << "---------------------------" << endl;

	cout << "Press E to exit or enter to supply another word." << endl;
	string yes = "";
	getline(cin, yes);
	if (yes == "E")
		return 0;
	main();
	return 0;
}