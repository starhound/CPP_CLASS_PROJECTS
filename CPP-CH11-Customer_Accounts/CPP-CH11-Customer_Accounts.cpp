//Wesley Reid
//COP2222 - Chapter 11 Cusomter Accounts and Search Function
//April 25th 2020

#include <iostream>
using namespace std;

void menu() {
    cout << "[1]: Enter Account\n";
    cout << "[2]: View Accounts\n";
    cout << "[3]: Search Account\n";
    cout << "[q]: Quit\n";
}

void enter_menu() {
    cout << "[1] Name\n";
    cout << "[2] Address\n";
    cout << "[3] City\n";
    cout << "[4] State\n";
    cout << "[5] Zip\n";
    cout << "[6] Telephone Number\n";
    cout << "[7] Account Balance\n";
    cout << "[8] Last Payment\n";
}

int get_menu_input() {
    cout << "Please enter your choice to enter";
    int input;
    cin >> input;
    return input;
}

struct CustomerInfo
{
    string name;
    string address;
    string city;
    string state;
    string zip;
    string number;
    string balance;
    string payment;
};

CustomerInfo current_customers[10] = {};

void new_customer() {
    bool has_name = false;
    bool has_address = false;
    bool has_city = false;
    bool has_state = false;
    bool has_zip = false;
    bool has_telephone = false;
    bool has_balance = false;
    bool has_payment = false;
    bool has_all = true;
    do {
        CustomerInfo new_customer;
        enter_menu();
        int input = get_menu_input();
        switch (input)
        {
        case 1:
            cout << "Customer Name:\n";
            cin >> new_customer.name;
            has_name = true;
            break;
        case 2:
            cout << "Customer Address:\n";
            cin >> new_customer.address;
            has_address = true;
            break;
        case 3:
            cout << "Customer City:\n";
            cin >> new_customer.city;
            has_city = true;
            break;
        case 4:
            cout << "Customer State:\n";
            cin >> new_customer.state;
            has_state = true;
            break;
        case 5:
            cout << "Customer Zip:";
            cin >> new_customer.zip;
            has_zip = true;
            break;
        case 6:
            cout << "Customer Telephone:\n";
            cin >> new_customer.number;
            has_telephone = true;
            break;
        case 7:
            cout << "Customer Balance:\n";
            cin >> new_customer.balance;
            has_balance = true;
            break;
        case 8:
            cout << "Customer Last Payment:\n";
            cin >> new_customer.payment;
            has_payment = true;
            break;
        }
        if (has_address && has_balance && has_city && has_name && has_payment && has_state && has_telephone) {
            has_all = false;
            int count = sizeof(current_customers) / sizeof(current_customers[0]);
            count++;
            current_customers[count] = new_customer;
            cout << "Added new customer." << endl;
        }
    } while (has_all);
}

void report_customer(CustomerInfo customer) {
    cout << "-----Customer Info-----" << endl;
    cout << "Customer Name: " << customer.name << endl;
    cout << "Customer Address: " << customer.address << endl;
    cout << "Custoemr Balance: " << customer.balance << endl;
    cout << "Customer City: " << customer.city << endl;
    cout << "Customer Last Payment: " << customer.payment << endl;
    cout << "Customer State: " << customer.state << endl;
    cout << "Customer Telephone: " << customer.number << endl;
    cout << endl;
}

void view_customers() {
    for(CustomerInfo customer : current_customers) {
        if (customer.name == "") {
            break;
        }
        report_customer(customer);
    }
}

void populate_customers() {
    CustomerInfo c1, c2;
    c1.address = "124 Way";
    c1.balance = "100";
    c1.city = "Tarpon";
    c1.name = "Jim";
    c1.number = "555";
    c1.payment = "4/25/2020";
    c1.state = "FL";
    c1.zip = "00001";
    c2.address = "123 Drive";
    c2.balance = "75";
    c2.city = "ST Pete";
    c2.name = "John";
    c2.number = "454";
    c2.payment = "4/25/2017";
    c2.state = "GA";
    c2.zip = "00100";
    current_customers[0] = c1;
    current_customers[1] = c2;
}

void search_customers() {
    cout << "Please enter a customer name to view:\n";
    string customer_name;
    cin >> customer_name;
    for (CustomerInfo customer : current_customers) {
        if (customer_name.compare(customer.name) == 0) {
            cout << "Customer found..." << endl;
            report_customer(customer);
            return;
        }
    }
    cout << "No customer found." << endl;
}

int main()
{
    populate_customers();
    char choice;
    do {
        menu();
        cout << "Please enter your choice:\n";
        cin >> choice;
        cout << choice;
        switch (choice)
        {
        case '1':
            cout << endl;
            new_customer();
            break;
        case '2':
            cout << endl;
            view_customers();
            break;
            break;
        case '3':
            cout << endl;
            search_customers();
            break;
        }
    } while (choice != 'q');
    return 0;
}

