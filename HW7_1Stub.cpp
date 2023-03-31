// Chapter 8, Programming Challenge 6: String Selection Sort
/*
CIST 004A Spring 2022
HW week 8 problem 6
Description: Sorts the name based of size. 
Input: None.
Output: names array and sorted name array.
Student: Matan Kedar 
Known bugs: none.
Date: 3/30/2023
*/

#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void selectionSort(string [], int);
void displayArray(string [], int);

int main()
{
	const int NUM_NAMES = 20;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
								"Taylor, Terri", "Johnson, Jill",
								"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
								"James, Jean", "Weaver, Jim", "Pore, Bob",
								"Rutherford, Greg", "Javens, Renee",
								"Harrison, Rose", "Setzer, Cathy",
								"Pike, Gordon", "Holland, Beth" };

	// Display the unsorted array.
	displayArray(names, NUM_NAMES);

	// Sort the array.
	selectionSort(names, NUM_NAMES);

	// Display the sorted array.
	cout << "Here are the names sorted:\n";
	cout << "--------------------------\n";
	displayArray(names, NUM_NAMES);

	return 0;
}

// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on an array of strings. The size        *
// parameter is the number of elements in the array.      *
// ********************************************************
void selectionSort(string values[], int size){
    int startScan, minIndex;
    string minValue, temp;
    for (startScan = 0; startScan < size-1; startScan++){
        minIndex = startScan;
        minValue = values[startScan];
        for (int index = startScan+1; index < size; index++){
            if (values[index] < minValue){
                minValue = values[index];
                minIndex = index;
            }
        }
        temp = values[minIndex];
        values[minIndex] = values[startScan];
        values[startScan] = temp;
    }
}

// ********************************************************
// The displayArray function displays the contents of     *
// the array.                                             *
// ********************************************************
void displayArray(string values[], int size){
	for(int i=0; i < size; i++){
		cout << values[i] << endl;	
	}
}

/*
Collins, Bill
Smith, Bart  
Allen, Jim   
Griffin, Jim 
Stamey, Marty
Rose, Geri   
Taylor, Terri
Johnson, Jill
Allison, Jeff
Looney, Joe
Wolfe, Bill
James, Jean
Weaver, Jim
Pore, Bob
Rutherford, Greg
Javens, Renee
Harrison, Rose
Setzer, Cathy
Pike, Gordon
Holland, Beth
Here are the names sorted:
--------------------------
Allen, Jim
Allison, Jeff
Collins, Bill
Griffin, Jim
Harrison, Rose
Holland, Beth
James, Jean
Javens, Renee
Johnson, Jill
Looney, Joe
Pike, Gordon
Pore, Bob
Rose, Geri
Rutherford, Greg
Setzer, Cathy
Smith, Bart
Stamey, Marty
Taylor, Terri
Weaver, Jim
Wolfe, Bill
*/