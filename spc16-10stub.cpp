#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "SortableVectorStub.h"
using namespace std;

int main()
{
    const int SIZE = 5;  // The array size

    // Define SortableVector objects.
    SortableVector<int> intTable(SIZE);
    SortableVector<double> doubleTable(SIZE);

    // Place values into the arrays in descending order.
    for (int x = 0; x < SIZE; x++){
        intTable[x] = SIZE - x;
        doubleTable[x] = SIZE - (x * 1.1f);
    }

    // these are all of the values in the vector
    cout << "Values in intTable before sorting:\n";
    for (int x = 0; x < SIZE; x++){
        cout << intTable[x] << " ";
	}
    cout << endl << endl;

    cout << "Values in doubleTable before sorting:\n";
    for (int x = 0; x < SIZE; x++){
        cout << doubleTable[x] << " ";
	}
    cout << endl << endl;

    // uusing the sort method 
    intTable.sort();
    doubleTable.sort();

   // display the new sorted vectors
    cout << "After sorting, these values are in intTable:\n";
    for (int x = 0; x < SIZE; x++){
        cout << intTable[x] << " ";
	}
    cout << endl << endl;

    cout << "After sorting, these values are in doubleTable:\n";
    for (int x = 0; x < SIZE; x++){
        cout << doubleTable[x] << " ";
	}
    return 0;
}
