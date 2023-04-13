// Chapter 9, Programming Challenge 11: Array Expander
#include <iostream>
using namespace std;

// Prototype
int *expandArray(int[], int);
void showArray(int[], int);

int main()
{
	const int SIZE = 5;
	int values[SIZE] = { 1, 2, 3, 4, 5 };

	// Display the contents of the array.
	cout << "The contents of the original array are:\n";
	showArray(values, SIZE);

	// Make an expanded copy of the array.
	int *arrCopy = expandArray(values, SIZE);

	// Display the contents of the new array.
	cout << "The contents of the expanded array are:\n";
	showArray(arrCopy, (SIZE * 2));

	return 0;
}

// ********************************************************
// The expandArray function accepts an int array and an   *
// int indicating the array's size. The function returns  *
// a pointer to an array that is twice the size of the    *
// array that was passed as an argument. The elements of  *
// the argument array are copied to the new array, and    *
// the remaining elements are set to 0.                   *
// ********************************************************
int *expandArray(int arr[], int size)
{
    int *expanded = new int[size*2];  
	// your work
    for (int i = 0; i < size; i++) {
        expanded[i] = arr[i];
    }
    for (int i = size; i < 2 * size; i++) {
        expanded[i] = 0;
    }
    // Return a pointer to the new array.
    return expanded;
}

// ********************************************************
// The showArray function displays the contents of an int *
// array.                                                 *
// ********************************************************
void showArray(int arr[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << arr[index] << " ";
	}
	
	cout << endl << endl;
}