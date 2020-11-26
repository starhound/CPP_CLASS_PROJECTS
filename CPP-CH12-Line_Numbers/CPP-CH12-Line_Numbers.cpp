//Wesley Reid
//COP2222 - Chapter 12 Problem #5 (Line Numbers)
//April 25th 2020

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{ 
    ifstream myfile;
    myfile.open("content.txt", ios::in);

    string line;
    string holder;
    int count = 1;

    if (myfile) {
        getline(myfile, line);
        while (myfile) {
            cout << to_string(count) + ": " + line << endl;
            count++;
            if (count % 24 == 0) {
                cout << "Press return to continue.\n";
                cin.ignore();
            }
            getline(myfile, line);
        }
        myfile.close();
    }
    else {
        cout << "ERROR: cannot open file.\n";
    }
    return 0;
}
