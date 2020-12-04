//Wesley Reid
//June 1, 2019 ©
//Chapter 4 Program 2

#include <iostream>

using namespace std;

int main() {

	int sold;
	cout << "Please enter the amount of units sold." << endl;
	cin >> sold;

	//input validation 
	if (sold <= 0) {
		cout << "Invalid unit specification, please enter a number greater than zero." << endl;
		//just by playing around i discovered i can call main() to restart the program, but this may have 
		//unintended side effects or consequences I'm unaware of so i've left it out.
		//main();
		return 0;
	}

	//this seems like a perfect use for a switch statement with ranges, but from my research c++ does 
	//not support that, or at least, it does not support it easily?

	float discount = 0.0;
	if (sold >= 100)
		discount = 0.5;
	else if (sold >= 10 && sold <= 19)
		discount = 0.2;
	else if (sold >= 20 && sold <= 49)
		discount = 0.3;
	else if (sold >= 50 && sold <= 99)
		discount = 0.4;

	//here i wanted to create some extra variables for reporting the amount of money saved from the discount, 
	//i apologize if this is unwanted code but to me it felt right to report these variables, but just incase i've left a more 
	//basic reporting scheme commented out.

	/*
	sold *= 99;
	if(discount)
		sold *= discount;
	cout << "Total Cost: " << sold << endl;
	*/

	//cost before discount
	int price = sold * 99;
	//will hold the discounted amount taken off the total
	int discounted;
	//will hold the final price
	int final_price;
	if (discount) {
		discounted = price * discount;
		final_price = price - discounted;
	} 
    else {
		//if no discount, final price is the price
		final_price = price;
	}

	//report sold count and pre-discount costs
	cout << "Units Sold: " << sold << endl;
	cout << "Units Cost: $" << price << endl;
	//if a discount, report discount percentage and the amount of money saved
	if (discount) {
		cout << "Discount Applied: " << discount << endl;
		cout << "Discounted Price: $" << discounted << endl;
	}
	else {
		cout << "Discount Applied: None" << endl;
	}
	//report the final total
	cout << "Final Price: $" << final_price << endl;

	system("pause");
	return 0;
}
