#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int number;
public:
    static string lessThan20[20];
    static string tens[9];
    static string hundred;
    static string thousand;
    
    Numbers(int x){ //declare the input as varaible number 
    number = x;
    }
    void print();
};

string Numbers::lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten", "eleven", "twelve", // 0-20
                                "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string Numbers::tens[9] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}; // 20 ... 30 ... 
string Numbers::hundred = "hundred"; //100
string Numbers::thousand = "thousand"; //1000

void Numbers::print()
{
    string finalNumber = "";
    string numString = to_string(number);

    if (number == 0){
        cout << lessThan20[number]; // verification
        return;
    }
    if (numString.length() == 4){ // find if its 4 digits 
        finalNumber += lessThan20[number / 1000] + " " + thousand + " ";
        number %= 1000; // take out the thousandths
    }
    if (numString.length() >= 3){ // find if its 3 digits 
        finalNumber += lessThan20[number / 100] + " " + hundred + " ";
        number %= 100; // take out the hundeathds
    }
    if (numString.length() >= 2){ // find if its 2 digits
        finalNumber += tens[(number / 10) - 2] + " ";
        number %= 10; // take out the tens
    }
    if (number > 0){ // find if its 1 digit 
        finalNumber += lessThan20[number];
    }
    cout << finalNumber;
}

// Demo program
int main()
{
   int number;
    // Display the program description.
   cout << "This program translates whole dollar amounts\n"
	    << "in the range 0 through 9999 into an Engl "
	    << "description of the number.\n\n";

	// Get input from the user.
	cout << "Enter a whole dollar amount: ";
	cin >> number;
    
	// Create a Numbers object.
	Numbers n(number);
        
	// Print the English description.
	n.print();

    return 0;
}