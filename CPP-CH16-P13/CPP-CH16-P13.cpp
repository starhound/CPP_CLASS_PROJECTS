//Wesley Reid
//COP 2222 - Chapter 16, Problem 13
//May 2nd 2020

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int number;
    string date;
public:
    Employee() {
        name = "";
        number = 0;
        date = "";
    };
    Employee(string empName, int empNumber, string empStartDate) {
        setEmployeeName(empName);
        try {
            setEmployeeNumber(empNumber);
        }
        catch (InvalidEmployeeNumer) {
            cout << "ERROR: INVALID EMPLOYEE NUMBER" << endl;
        };
        date = empStartDate;
    };

    void report() {
        cout << "Employee Name: " + name << endl;
        cout << "Employee Number: " << number << endl;
        cout << "Employee Start Date: " + date << endl;
    }

    void setEmployeeName(string empName) {
        name = empName;
    }

    class InvalidEmployeeNumer {
    };

    void setEmployeeNumber(int empNumber) {
        if (empNumber < 0 || empNumber > 9999) {
            throw InvalidEmployeeNumer();
        }
        else {
            number = empNumber;
        }
    }

    void setEmployeeDate(string empDate) {
        date = empDate;
    }

    int getEmployeeNumber() {
        return number;
    }

    string getEmployeeName() {
        return name;
    }

    string getEmployeeDate() {
        return date;
    }
};

class ProductionWorker : public Employee {
private:
    int shift;
    int pay;

public:
    ProductionWorker() {
        shift = 0;
        pay = 0;
    };

    ProductionWorker(int pShift, int pPay) {
        shift = pShift;
        pay = pPay;
    };

    ProductionWorker(Employee emp, int pShift, int pPay) {
        this->setEmployeeDate(emp.getEmployeeDate());
        this->setEmployeeName(emp.getEmployeeName());
        this->setEmployeeNumber(emp.getEmployeeNumber());
        try {
            setProductionWorkerShift(pShift);
        }
        catch (InvalidShift) {
            cout << "ERROR: INVALID SHIFT\n";
        };
        try {
            setProductionWorkerPay(pPay);
        }
        catch (InvalidPayRate) {
            cout << "ERROR: INVALID PAY RATE\n";
        }
    };

    class InvalidShift {

    };

    class InvalidPayRate {

    };

    void report() {
        Employee::report();
        cout << "Production Worker Shift: " << shift << endl;
        cout << "Production Worker Pay: $ " << pay << endl;
    };

    int getProductionWorkerShift() {
        return shift;
    };

    int getProductionWorkerPay() {
        return pay;
    };

    void setProductionWorkerPay(int pPay) {
        if (pPay > 0) {
            pay = pPay;
        }
        else {
            throw InvalidPayRate();
        }
    };

    void setProductionWorkerShift(int pShift) {
        if (pShift == 1 || pShift == 2) {
            shift = pShift;
        }
        else {
            throw InvalidShift();
        }
    };
};

class ShiftSuper : public Employee {
private:
    int salary;
    int bonus;

public:
    ShiftSuper() {
        salary = 0;
        bonus = 0;
    };

    ShiftSuper(Employee emp, int sSalary, int sBonus) {
        setShiftSuperEmployee(emp);
        salary = sSalary;
        bonus = sBonus;
    };

    void report() {
        Employee::report();
        cout << "Shift Super Salary: " << salary << endl;
        cout << "Shift Super Bonus: " << bonus << endl;

    }

    void setShiftSuperEmployee(Employee emp) {
        this->setEmployeeDate(emp.getEmployeeDate());
        this->setEmployeeName(emp.getEmployeeName());
        this->setEmployeeNumber(emp.getEmployeeNumber());
    };

    void setShiftSuperSalary(int sSalary) {
        salary = sSalary;
    };

    void setShiftSuperBonus(int sBonus) {
        bonus = sBonus;
    };
};

class TeamLeader : public ProductionWorker {
private:
    int bonus;
    int reqHours;
    int takenHours;

public:
    TeamLeader() {
        bonus = 0;
        reqHours = 0;
        takenHours = 0;
    };

    TeamLeader(ProductionWorker prod, int sBonus, int req, int taken) {
        bonus = sBonus;
        reqHours = req;
        takenHours = taken;
        this->setEmployeeDate(prod.getEmployeeDate());
        this->setEmployeeName(prod.getEmployeeName());
        this->setEmployeeNumber(prod.getEmployeeNumber());
        this->setProductionWorkerPay(prod.getProductionWorkerPay());
        this->setProductionWorkerShift(prod.getProductionWorkerShift());

    };

    void report() {
        ProductionWorker::report();
        cout << "Team Lead Bonus: " << bonus << endl;
        cout << "Team Lead Required Hours: " << reqHours << endl;
        cout << "Team Lead Taken Hours: " << takenHours << endl;
    }

    void setTeamLeaderBonus(int sBonus) {
        bonus = sBonus;
    };

    void setTeamLeaderRequiredHours(int req) {
        reqHours = req;
    };

    void setTeamLeaderTakenHours(int taken) {
        takenHours = taken;
    };

    int getTeamLeaderBonus() {
        return bonus;
    };

    int getTeamLeaderRequiredHours() {
        return reqHours;
    };

    int getTeamLeaderTakenHours() {
        return takenHours;
    };
};

int main()
{
    //Employee emp = Employee("Bill", 1, "April 30th 2020");
    Employee emp = Employee("Bill", 10000, "April 30th 2020");
    emp.report();
    cout << endl;

    //ProductionWorker prod = ProductionWorker(Employee("John", 2, "May 1st 2020"), 1, 15);
    ProductionWorker prod = ProductionWorker(Employee("John", 2, "May 1st 2020"), 3, 15);
    prod.report();
    cout << endl;

    ShiftSuper super = ShiftSuper(Employee("Harry", 3, "May 2nd 2020"), 50000, 10);
    super.report();
    cout << endl;

    //TeamLeader lead = TeamLeader(ProductionWorker(Employee("Will", 4, "May 3rd 2020"), 2, 25), 15, 40, 25);
    TeamLeader lead = TeamLeader(ProductionWorker(Employee("Will", 4, "May 3rd 2020"), 2, -1), 15, 40, 25);
    lead.report();
    cout << endl;

    return 0;
}

