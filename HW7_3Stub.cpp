// Chapter 8, Programming Challenge 10: Sorting Orders
#include<iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void bubbleSort(int [], int);
void selectionSort(int [], int);
void showArray(int [], int);

int main()
{
	const int SIZE = 8;
	int arr1[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };
	int arr2[SIZE] = { 105, 102, 107, 103, 106, 100, 104, 101 };

	bubbleSort(arr1, SIZE);

	cout << endl;

	selectionSort(arr2, SIZE);

	return 0;
}

// ********************************************************
// The bubbleSort function performs an ascending order    *
// bubble sort on the array. The size parameter is the    *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void bubbleSort(int values[], int size)
{
   for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (values[j] > values[j+1]) {
                int temp = values[j];
                values[j] = values[j+1];
                values[j+1] = temp;
			}
		}
   }
}
// ********************************************************
// The selectionSort function performs an ascending order *
// selection sort on the array. The size parameter is the *
// number of elements in the array. The function has been *
// modified to print the contents of the array after each *
// pass.                                                  *
// ********************************************************
void selectionSort(int values[], int size)
{
	int temp = 0;	
	for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (values[j] < values[min_index]) {
                min_index = j;
            }
        }
        temp = values[i];
        values[i] = values[min_index];
        values[min_index] = temp;
	}
}

// ********************************************************
// The showArray function displays the contents of the    *
// array. The size parameter is the number of elements.   *
// ********************************************************
void showArray(int values[], int size)
{
	for (int count = 0; count < size; count++)
		cout << values[count] << " ";

	cout << endl;
}