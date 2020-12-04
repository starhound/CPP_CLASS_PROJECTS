//Wesley Reid
//June 10, 2019 ©
//Chapter 5 Program - Online Class

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

	//-----------------------------------------------------------------//
	//						Chapter 5 Additions						   //
	//-----------------------------------------------------------------//

	cout << "\n";

	//8.  Create a for loop to print the numbers 1 thru 5, all on the same line.
	for (cntl = 1; cntl <= 5; cntl++)
		cout << cntl;;
	cout << "\n\n";

	//9.  On the next output line create a for loop which will count backwards by 1’s from 100 to 0 (inclusive of 100 and 0)
	//	  only displaying every number which is evenly divisible by 17.
	cout << "Numbers which are evenly divisible by 17. (0-100)" << endl;
	cout << "Performed by backwards for loop (100 to 0)" << endl;
	cout << "-------------------------------------------------" << endl;
	for (cnt2 = 100; cnt2 >= 0; cnt2--) {
		if (cnt2 % 17 == 0)
			cout << cnt2 << " ";
	}
	cout << "\n\n";

	//10. Write a while loop to do the same as 9.
	cout << "Numbers which are evenly divisible by 17. (0-100)" << endl;
	cout << "Performed by a while loop. (0 to 100)" << endl;
	cout << "-------------------------------------------------" << endl;
	while (cnt2 <= 100) {
		if (cnt2 % 17 == 0)
			cout << cnt2 << " ";
		cnt2++;
	}

	cout << "\n\n";

	/*
	11. Write a do…while loop to :
		a.ask the user for a number(use the variable Guess).
		b.get user input.
		c.tell the user the remainder of dividing the number by 5 (modulo)even if result is 0.
		d.   continue the loop until the user enters zero(0) as the number. (Make sure the user is aware of this.)
	*/

	do {
		cout << "Please enter any number without commas (Enter 0 to stop this loop): \n";
		cin >> Guess;
		int result = Guess % 5;
		cout << "The remainder of modulo 5 for " << Guess << " is " << result << endl;
	} while (Guess > 0);

	cout << "\n\n";

	/*
	12.     Create a for loop within a for loop.  The outer loop will count from 1 to 5.
			The inner loop will count from 1 to 6 and write the product of the outer loop counter multiplied by the inner loop counter, 
			all on the same line with one tab (‘\t’) between. Between the loop ends put a line feed (endl or \n).
	*/
	cout << "Nested for statements, the outter muliplying its count by the inners count" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	for (cntl = 1; cntl <= 5; cntl++) {
		for (cnt2 = 1; cnt2 <= 6; cnt2++) {
			cout << cntl * cnt2 << "\t";
		}
		cout << endl;
	}

	cout << endl << "Program Completed!" << endl;

	system("pause");
	return 0;
}