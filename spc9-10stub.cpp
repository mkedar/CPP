// Chapter 9, Programming Challenge 10: Reverse Array
#include <iostream>
using namespace std;

// Prototype
int *reverseArray(int[], int);
void showArray(int[], int);

int main()
{
	const int SIZE = 10;
	int values[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// Display the contents of the array.
	cout << "The contents of the original array are:\n";
	showArray(values, SIZE);

	// Make a reverse copy of the array.
	int *arrCopy = reverseArray(values, SIZE);

	// Display the contents of the new array.
	cout << "The contents of the copy are:\n";
	showArray(arrCopy, SIZE);

	return 0;
}

// ********************************************************
// The reverseArray function accepts an int array and an  *
// int indicating the array's size. The function returns  *
// a pointer to an array that is a reverse copy of the    *
// array that was passed as an argument.                  *
// ********************************************************
int *reverseArray(int arr[], int size)
{
    int* reverse = new int[size];
    for (int i = 0; i < size; i++){
        reverse[i] = arr[size - 1 - i];
    }
    return reverse;
}

// ********************************************************
// The showArray function displays the contents of an int *
// array.                                                 *
// ********************************************************
void showArray(int arr[], int size)
{
	for (int index = 0; index < size; index++)
		cout << arr[index] << " ";

	cout << endl;
}