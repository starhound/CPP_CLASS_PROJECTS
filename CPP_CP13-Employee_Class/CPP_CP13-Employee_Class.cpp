//Wesley Reid
//COP2222 - Chapter 13 - Employee Class
//April 28th 2020 (happy birthday to me!)

#include <iostream>
#include <string>

using namespace std;

class Employee
{

private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    Employee(string empName, int empID, string empDepartment, string empPosition) {
        name = empName;
        idNumber = empID;
        department = empDepartment;
        position = empPosition;
    }

    Employee(string empName, int ID) {
        name = empName;
        idNumber = ID;
        department = "";
        position = "";
    }

    string GetEmployeeName() {
        return name;
    }

    int GetEmployeeID() {
        return idNumber;
    }

    string GetEmployeeDepartment() {
        return department;
    }

    string GetEmployeePosition() {
        return position;
    }

    void SetEmployeeName(string empName) {
        name = empName;
    }
    void SetEmployeeID(int empID) {
        idNumber = empID;
    }
    void SetEmployeeDepartment(string empDep) {
        department = empDep;
    }
    void SetEmployeePosition(string empPos) {
        position = empPos;
    }
};

void reportEmployee(Employee emp) {
    cout << "Name: " + emp.GetEmployeeName() << endl;
    cout << "ID: " + emp.GetEmployeeID() << endl;
    cout << "Department: " + emp.GetEmployeeDepartment() << endl;
    cout << "Position: " + emp.GetEmployeePosition() << endl;
}

void populateEmployees() {
    Employee emp1, emp2, emp3;

    emp1.SetEmployeeName("Susan Meyers");
    emp1.SetEmployeeID(47899);
    emp1.SetEmployeeDepartment("Accounting");
    emp1.SetEmployeePosition("Vice President");

    emp2.SetEmployeeName("Mark Jones");
    emp2.SetEmployeeID(39119);
    emp2.SetEmployeeDepartment("IT");
    emp2.SetEmployeePosition("Programmer");

    emp3.SetEmployeeName("Joy Rogers");
    emp3.SetEmployeeID(81774);
    emp3.SetEmployeePosition("Engineer");
    emp3.SetEmployeeDepartment("Manufacturing");

    cout << emp1.GetEmployeeName() << endl;
    cout << emp1.GetEmployeeID() << endl;
    cout << emp1.GetEmployeeDepartment() << endl;
    cout << emp1.GetEmployeePosition() << endl;
    cout << endl;
    cout << emp2.GetEmployeeName() << endl;
    cout << emp2.GetEmployeeID() << endl;
    cout << emp2.GetEmployeeDepartment() << endl;
    cout << emp2.GetEmployeePosition() << endl;
    cout << endl;
    cout << emp3.GetEmployeeName() << endl;
    cout << emp3.GetEmployeeID() << endl;
    cout << emp3.GetEmployeeDepartment() << endl;
    cout << emp3.GetEmployeePosition() << endl;
}

int main()
{
    populateEmployees();
}

