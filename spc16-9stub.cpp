//  Chapter 16, Programming Challenge 9: Searchable Vector Modifications  
#include <iostream>
#include <cstdlib>
#include "SearchableVector.h"

// Matan Kedar
// 5/21/2023

using namespace std;

int main()
{
	SearchableVector<int> intTable(10);
	SearchableVector<double> doubleTable(10);
	int x, result;

	// Store values in the arrays.
	for (x = 0; x < 10; x++)
	{
		intTable[x] = (x * 2);
		doubleTable[x] = (x * 2.14);
	}

	// Display the values in the arrays.
	cout << "These values are in IntTable:\n";
	for (x = 0; x < 10; x++)
		cout << intTable[x] << " ";
	cout << endl << endl;
	cout << "These values are in doubleTable:\n";
	for (x = 0; x < 10; x++)
		cout << doubleTable[x] << " ";
	cout << endl << endl;
	
	// Now search for values in the arrays.
	// your work

	int searchInt = 10; // i used random numbers in the vectors for testing 
    int intIndex = intTable.findItem(searchInt);
    if (intIndex != -1){
        cout << searchInt << " is in IntTable." << endl;
	}
    else{
        cout << searchInt << " is not in IntTable." << endl;
	}
    double searchDouble = 12.84;
    int doubleIndex = doubleTable.findItem(searchDouble);
    if (doubleIndex != -1){
       cout << searchDouble << " is in doubleTable." << endl;
	}
	else{
        cout << searchDouble << " is not in doubleTable." << endl;
	}

	return 0;
}

/*
These values are in IntTable:
0 2 4 6 8 10 12 14 16 18

These values are in doubleTable:
0 2.14 4.28 6.42 8.56 10.7 12.84 14.98 17.12 19.26

10 is in IntTable.
12.84 is in doubleTable.
*/