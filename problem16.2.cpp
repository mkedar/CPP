/*
CIST 004A Spring 2022
HW week 1 problem  16
Description: Calculates total account balance using user input 
Input: intrest rate, total balance, amount of deposit and withrdaw
Output: Total account balance 
Student: Matan Kedar 
Known bugs: none.
Date: 2/23/2023
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

bool negativeBalance(int num){
    if(num<0){
        cout << "Negative number detected" << endl;
        return true;
    }
    return false;
}

int main(){
double balance, deposited, withdrawn, RATE;
int totalMonths;
cout << "What is the current interest rate? ";
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
    if(negativeBalance(balance)){
        break;
    }
}
cout << "Total account balance is $" << balance << endl;
}


/*
What is the current interest rate? 10   
What is your total balance? 1000 
How many months have passed since the account was established? 3 
What is the amount deposited during month number 1: 
120
What is the amount withdrawn during this month number 1:
35
What is the amount deposited during month number 2: 
600
What is the amount withdrawn during this month number 2:
545
What is the amount deposited during month number 3: 
100 
What is the amount withdrawn during this month number 3:
100
Total account balance is $1510.69
*/