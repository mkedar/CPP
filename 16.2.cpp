/*
CIST 004A Spring 2022
HW week 1 problem  16
Description: Asks for names and amount of rain for 3 months and caculates the average. 
Input: Name of 3 months, rain in 3 months
Output: Average rain in 3 months 
Student: Matan Kedar 
Known bugs: none.
Date: 2/22/2023
*/

#include <limits>
#include <iostream>
using namespace std;

int verfiyNum(int limit){
    double input; 
    while(true) {
        if (cin >> input && input > limit && !cin.fail()) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a postive number." << endl; 
        }
    }
    return input;
}

int main(){
double balance, deposited, withdrawn, RATE;
int totalMonths;
cout << "What is the current interest rate?";
RATE = verfiyNum(-101);
cout << "What is your total balance? ";
balance = verfiyNum(0);
cout << "How many months have passed since the account was established? ";
totalMonths = verfiyNum(0);
for(int i = 0; i < totalMonths; i++){
    cout << "What is the amount deposited during month number " << i+1 << ": " << endl; 
    deposited = verfiyNum(0); 
    balance += deposited;
    cout << "What is the amount withdrawn during this month number " << i+1 << ":" << endl; 
    withdrawn = verfiyNum(0); 
    balance -= withdrawn; 
    balance *= (RATE/100 +1);
}
cout << balance << endl;
}