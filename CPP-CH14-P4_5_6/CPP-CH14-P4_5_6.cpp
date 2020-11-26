//Wesley Reid
//COP2222 Chapter 14 - Problems 4, 5, & 6
//April 28 2020

//Note to professor: the textbook did not include any stipulations 
//regarding population of the maxUnpaid numdays object, or 
//population of variables regarding the various taken numdays objects
//so they were initialized with the default constructors

//the textbook also did not include instructions regarding a cap of the 
//amount of max sick days numdays object.

#include <iostream>
#include <string>

using namespace std;

class NumDays
{
private:
	double hours;
	double days;

public:
	NumDays() {
		hours = 0;
		days = 0;
	}

	NumDays(double inHours)
	{
		hours = inHours;
		days = inHours / 8;
	}

	void setHours(double inHours)
	{
		hours = inHours;
		days = inHours / 8;
	}

	void setDays(double inDays)
	{
		days = inDays;
		hours = inDays * 8;
	}

	double getHours()const
	{
		return hours;
	}

	double getDays()const
	{
		return days;
	}

	NumDays operator+(NumDays& right)
	{
		NumDays temp;
		temp.setHours(hours + right.getHours());
		return temp;
	}

	NumDays operator -(NumDays& right)
	{
		NumDays temp;
		temp.setHours(hours - right.getHours());
		return temp;
	}

	NumDays operator ++()
	{
		++hours;
		days = hours / 8;
		return *this;
	}

	NumDays operator ++(int)
	{
		hours++;
		NumDays temp(hours);
		days = hours / 8;
		return temp;
	}

	NumDays operator --()
	{
		--hours;
		days = hours / 8;
		return *this;
	}

	NumDays operator --(int)
	{
		hours--;
		NumDays temp(hours);
		days = hours / 8;
		return temp;
	}
};

class TimeOff
{
private:
	NumDays maxSickDays;
	NumDays sickTaken;
	NumDays maxVaction;
	NumDays vacTaken;
	NumDays maxUnpaid;
	NumDays unpaidTaken;
	const double MAX_VAC_MONTH = 12;
	const double MAX_SICK_MONTH = 8;
	const double MAX_VAC_TOTAL = 240;
	double monthsWorked = 0;
	string empName;


public:
	TimeOff() {
		maxSickDays = NumDays();
		sickTaken = NumDays();
		vacTaken = NumDays();
		maxVaction = NumDays();
		unpaidTaken = NumDays();
		maxUnpaid = NumDays();
		empName = "";
	}

	NumDays getSickDays() {
		return maxSickDays;
	}

	NumDays getVacTaken() {
		return vacTaken;
	}

	NumDays getUnpaidTaken() {
		return unpaidTaken;
	}

	NumDays getSickTaken() {
		return sickTaken;
	}

	NumDays getMaxUnpaid() {
		return maxUnpaid;
	}

	NumDays getMaxVactation() {
		return maxVaction;
	}

	double calculateSickHours() {
		maxSickDays.setHours(monthsWorked * 12);
		return monthsWorked * 12;
	}

	double calculateVacHours() {
		double total = monthsWorked * 8;
		if (total > 240)
			total = 240;
		maxVaction.setHours(total);
		return monthsWorked * 8;
	}

	void setMonthsWorked(double months) {
		monthsWorked = months;

		//return values ignored
		this->calculateSickHours();
		this->calculateVacHours();
	}

	double getMonthsWorked() {
		return monthsWorked;
	}

	void setEmployeeName(string name) {
		empName = name;
	}

	string getEmployeeName() {
		return empName;
	}

	void report() {
		cout << "Employee Name:\n";
		cout << "Months Worked: " << this->getEmployeeName() << endl;

		cout << "Sick Days Taken: ";
		cout << this->getSickTaken().getDays();
		cout << endl;

		cout << "Vacation Days Taken: ";
		cout << this->getVacTaken().getDays();
		cout << endl;

		cout << "Unpaid Days Taken: ";
		cout << this->getUnpaidTaken().getDays();
		cout << endl;

		cout << "Max Sick Days: ";
		cout << this->getSickDays().getDays();
		cout << endl;

		cout << "Max Vactation Days: ";
		cout << this->getMaxVactation().getDays();
		cout << endl;
		
		cout << "Max Unpaid Days ";
		cout << this->getMaxUnpaid().getDays();
		cout << endl;
	}

};

int main()
{
	TimeOff obj = TimeOff();
	double days;
	string name;
	cout << "What is the employee name?" << endl;
	cin >> name;
	cout << "How many months has the employee worked?" << endl;
	cin >> days;
	obj.setMonthsWorked(days);
	obj.setEmployeeName(name);
	obj.report();
}
