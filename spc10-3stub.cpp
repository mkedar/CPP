// Chapter 10, Programming Challenge 3: Word Counter
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototype
int wordCount(char *);
int wordCount(string);

int main()
{
	const int SIZE = 81;	// The maximum size of the C-string.
	char cstring[SIZE];		// To hold a C-string
	string strObj;			// To hold a string object	

	// Get a C-string.
	cout << "Enter a C-string containing 80 or fewer characters:\n";
	cin.getline(cstring, SIZE);
   
	// Display the number of words in the C-string.
	cout << "\nThe number of words in the C-string:  ";
	cout << wordCount(cstring) << endl << endl;

	cout << "\nEnter a string object containing 80 or fewer characters:\n";
	getline(cin, strObj);

	// Display the number of words in the string object.
	cout << "\nThe number of words in the string object:  ";
	cout << wordCount(strObj) << endl << endl;

	return 0;
}

//***************************************************
// Function wordCount                               *
// This function counts and returns the number of   *
// words in the string passed into str.             *
//***************************************************

int wordCount(char *str)
{
    int count = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            count++;
        }
    }
    return count;
}


//***************************************************
// Overloaded Function wordCount                    *
// This function counts and returns the number of   *
// words in the string passed into strObj.          *
//***************************************************
int wordCount(string strObj){
    int count = 1; 
    for (int i = 0; i < strObj.length(); i++) {
        if (isspace(strObj[i])) {
            count++;
        }
    }
    return count;
}