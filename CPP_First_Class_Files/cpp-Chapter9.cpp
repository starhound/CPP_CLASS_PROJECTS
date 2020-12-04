//Wesley Reid
//July 5th, 2019 ©
//Chapter 9 program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	/*
	1. The following arrays created:
                a. an array of double with 5 elements, dArr
                b. an array of long, lArr, with 7 elements and initialized at the time of creation with the values
                                                100000, 134567, 123456, 9, -234567, -1, 123489
                c. a 2 dimensional array of integer, with 3 rows and 5 columns, iArr. 
                d. an array of char with your name initialized in it. Big enough for 30 typable characters, sName. 
	*/
	double dArr[5];
	long lArr[7] = { 100000, 134567, 123456, 9, -234567, -1, 123489 };
	int iArr[3][5];
	char sName[30] = "wesley reid";

	//2. define 3 variables, , cnt1 and cnt2 (short data types) as general purpose counters and a long double total 

	short cnt1, cnt2;
	//not defining total to a value causes an uninitalized memory error in step 5.
	long double total = 0.0;

	//3. define 1 long variable called highest 

	long highest; 

	//4. a for loop to put a random number into each of the elements of the array of double, dArr. Use rand() and seed a random starting point with srand().  
	//Use a for loop to display all of the values in dArr.            

	for (int i = 0; i < sizeof(dArr)/sizeof(dArr[0]); i++) {
		srand(i);
		dArr[i] = rand();
	}

	cout << "Values of dArr" << endl;
	cout << "--------------------------------------" << endl;

	for (double value : dArr)
		cout << value << endl;

	//5. another for loop to add up the array of double, dArr, into the variable total

	for (double value : dArr) 
		total += value;

	//6. one cout to print the total and another cout to print the average of the double array, dArr. 
	cout << endl;
	cout << "Total of values in dArr" << endl;
	cout << "--------------------------------------" << endl;

	cout << total << endl;

	cout << endl;
	cout << "Average of values in dArr" << endl;
	cout << "--------------------------------------" << endl;

	cout << total / (sizeof(dArr) / sizeof(dArr[0])) << endl;

	/*
	7. a for loop similar to the following for the long array, lArr:
		for ( cnt1 = 1, highest = lArr[0] ; cnt1 < 7 ; cnt1++ )
		{
						//logic to compare each array element, starting with lArr[1], with highest
						//replace highest if the value in lArr[cnt]  is higher than the value in variable highest
		}
	*/

	for (cnt1 = 1, highest = lArr[0]; cnt1 < 7; cnt1++) {
		if (highest < lArr[cnt1])
			highest = lArr[cnt1];
	}

	//8. a cout to print highest as derived in the above code         
	cout << endl;
	cout << "Highest value in lArr" << endl;
	cout << "--------------------------------------" << endl;

	cout << highest << endl;

	//9. a for loop to put a random number, each with a value no lower than 1 and no higher than 53, 
	//into each element of iArr, the array of integer, seed the random generator with srand( (unsigned) time(NULL)). 
	//Only have to run srand once…. Use the modulo operator similar to the way you did with dice rolls in Project 2.

	srand((unsigned)time(NULL));
	for (int cnt1 = 0; cnt1 < 3; cnt1++) {
		for (cnt2 = 0; cnt2 < 5; cnt2++) {
			iArr[cnt1][cnt2] = rand() % 53 + 1;
		}
	}

	//10. a separate loop to print iArr with 3 rows on your screen. Each row has 5 numbers. Use setw to control the width of each column.
	//See Chapter 3 for an example of a program using setw. Print row by row.

	cout << endl;
	cout << "Values of iArr" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 3; cnt1++) {
		for (cnt2 = 0; cnt2 < 5; cnt2++) {
			cout << setw(5) << iArr[cnt1][cnt2];
		}
		cout << endl;
	}

	//11. a loop to print the 2 dimensional array, iArr, so that all 3 numbers in column 0 are printed and then on the next 
	//line all 3 numbers in column 1, etc. thru column 4. Print column by column.

	cout << endl;
	cout << "Values of 2 dimensional array iArr" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 5; cnt1++) {
		for (cnt2 = 0; cnt2 < 3; cnt2++) {
			cout << iArr[cnt2][cnt1] << '\t';
		}
		cout << endl;
	}

	//12. Use cin.getline( ...... ) to type another name into the variable sName.
	
	cout << endl;
	cout << "Please enter another name for the contents of sName" << endl;
	cout << "--------------------------------------" << endl;

	cin.getline(sName, 30);

	//13. Print the ascii value of each character in the char array, 1 per line. Use a while loop and look for the '\0' as a signal to end. 

	cout << endl;
	cout << "ASCII Values of new sNAme" << endl;
	cout << "--------------------------------------" << endl;

	cnt1 = 0;
	do {
		cout << int(sName[cnt1]) << endl;
		cnt1++;
	} while (sName[cnt1] != '\0');

	//14. make the array of char, sName, have the name "Albert Einstein" in it. You must use strcpy_s function.

	strcpy_s(sName, "Albert Einstein");

	//15. print the ascii value of the 12th character of the string sName

	cout << endl;
	cout << "12th Value of sName" << endl;
	cout << "--------------------------------------" << endl;

	cout << sName[11] << endl;

	//16. Define a pointer to a double, pdArray.
	
	double* pdArray;

	//17. Assign the pointer, pdArray, to contain the address of the double array, dArr:

	pdArray = &dArr[0];

	//18. Use the array name, dArr, to print out the array elements with subscript notation, [].All on 1 line a space between each.

	cout << endl;
	cout << "Elemtnts of dArr in subscript notation" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 5; cnt1++)
		cout << dArr[cnt1] << " ";
	
	//19. Use the pointer to print out the array elements with pointer notation while not changing the pointer itself.Use a for loop. 
	//* (pdArray + Cnt1) would be an example.All on 1 line a space between each.

	cout << "\n\n";
	cout << "Array elements printed with pointer notation" << endl;
	cout << "--------------------------------------" << endl;
	
	for (cnt1 = 0; cnt1 < 5; cnt1++)
		cout << *(pdArray + cnt1) << " ";

	//20. Use the pointer to print out the array elements with pointer notation but change the pointer to point to the actual array 
	//element rather than the method in 18. All on 1 line.
	//* pdArray would do this if the loop has the following post loop operation : pdArray++

	cout << "\n\n";
	cout << "Array elements with pointer notation, changing the pointer" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 5; cnt1++, pdArray++)
		cout << *pdArray << " ";

	//21. Use the array name for the double array and pointer notation to print the entire array, all on one line.

	cout << "\n\n";
	cout << "Double array & Pointer Notation" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 5; cnt1++)
		cout << *(dArr + cnt1) << " ";

	//22. Using a different pointer, piArray, allocate enough memory for 100 int's and assign the address to the pointer.

	int pArr[100];
	int* piArray = pArr;

	//23. In a for loop assign every item in the array to be a random number from 1 to 49 (hint : rand() % 6 + 1 gives random numbers from 1 to 6)

	for (cnt1 = 0; cnt1 < 100; cnt1++) {
		srand(cnt1);
		piArray[cnt1] = rand() % 49 + 1;
	}

	//24. Using cout print the first 10 items in the array, all on 1 line.

	cout << "\n\n";
	cout << "First 10 items in piArray" << endl;
	cout << "--------------------------------------" << endl;

	for (cnt1 = 0; cnt1 < 10; cnt1++)
		cout << piArray[cnt1] << " ";

	cout << endl;

	system("pause");
	return 0;
}
