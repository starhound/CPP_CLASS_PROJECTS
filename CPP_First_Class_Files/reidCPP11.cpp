//Wesley Reid
//May 27, 2019 ©
//Chapter 3 Program

#include <iostream>

using namespace std;

int main()
{
	//define a variable appropriate to hold the population of the US 300,000,000+
	//define a variable appropriate to hold the average family income in the US 51,321.43
	//define a variable appropriate to hold the hourly wage of 1 family member  17.98
	//define a variable appropriate to hold the count of the total student attending SPC 30,609
	//define a variable appropriate to hold the total GNP of Florida 754,256,198.95
	//define a variable appropriate to hold a single character to represent person's gender

	long int us_population;
	float family_income;
	double hourly_wage;
	short int spc_student_count;
	double gnp_florida;
	char gender;

	//Create cout prompts asking the user to input a value for each of the variables – 1 cout per variable 
	//followed immediately by a cin to hold the user keyboard input value for the variable. You should inform the user not to enter commas!

	cout << "This program gathers data from the user and prints the data to the screen.\n";
	cout << "Please do not use commas when inputting data into the program.\n\n";

	cout << "Please enter the first variable (U.S. Population):\n";
	cin >> us_population;

	cout << "Please enter the second variable (Average Family Income):\n";
	cin >> family_income;

	cout << "Please enter the third variable (Hourly Wage):\n";
	cin >> hourly_wage;

	cout << "Please enter the fourth variable (SPC Student Count):\n";
	cin >> spc_student_count;

	cout << "Please enter the fifth variable (GNP of Florida):\n";
	cin >> gnp_florida;

	cout << "Please enter the sixth variable (Gender):\n";
	cin >> gender;

	cout << "All data collected from user.\n";

	//Step 3 (output all of the data to the screen)

	cout << "U.S. Population: " << us_population << endl;
	cout << "Avg. Family Income: " << family_income << endl;
	cout << "Hourly Wage: " << hourly_wage << endl;
	cout << "SPC Student Count: " << spc_student_count << endl;
	cout << "Total GNP of Florida: " << gnp_florida << endl;
	cout << "Gender character: " << gender << endl;

	//Make the program beep 5 times using escape sequences.
	cout << "\a\a\a\a\a";

	system("pause");
	return 0;
}