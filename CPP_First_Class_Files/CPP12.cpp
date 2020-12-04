//Wesley Reid
//June 1, 2019 ©
//Chapter 4 Program 1 - Online Class

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	//1. Variable Definitions only as (DieRoll, Guess, cnt1, cnt2) followed by this statement:
	int DieRoll, Guess, cntl, cnt2;

	//2. Prompt the user for a whole number between 1 and 6. 
	cout << "Please enter a value of 1 through 6:\n";

	//3. Accept user input of the number – use Guess as the variable
	cin >> Guess;

	//4.  Simulate rolling a die with the following code (DieRoll variable is defined in 1):
	DieRoll = rand() % 6 + 1;

	//5. Display Guess and DieRoll on the Screen with good user labeling information. Additionally, display ”WINNER” if Guess and DieRoll are equal.
	cout << "DieRoll result: " << DieRoll << endl;
	cout << "Guess result: " << Guess << endl;

	if (DieRoll == Guess)
		cout << "WINNER!" << endl;

	//6. Display “DOUBLE WINNER” if DieRoll is an odd number (use modulo). Not related to question 5 above. NOT an if else...
	if (DieRoll % 2 == 1)
		cout << "DOUBLE WINNER!" << endl;

	//7. If the DieRoll added to the Guess is greater than or equal to 10 and DieRoll is even Display “YOU ARE A LUCKY PERSON”. 
	//This is unrelated to the previous requirements. NOT an if else...Make this a complex if test. NOT nested if statements.

	if (DieRoll + Guess >= 10 && DieRoll % 2 == 0)
		cout << "YOU ARE A VERY LUCKY PERSON!" << endl;

	system("pause");
	return 0;
}