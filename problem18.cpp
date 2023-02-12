/*
CIST 004A Spring 2022
HW week 2 problem 18
Description: Uses inputeed interest rate, time compounded and principal to calculate total amount in savings and interest. 
Input: principal, interestRate and compoundtimes. 
Output: Interest rate, times  compounded, principal, interest, amount in savings 
Student: Matan Kedar 
Known bugs: none.
Date: 2/10/2023
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    // declare variables 
    double principal, interestRate, compoundtimes;

    // ask for input for variables
    cout << "principal: " << endl;
    cin >> principal;
    cout << "interestRate: " << endl;
    cin >> interestRate;
    cout << "compoundtimes: " << endl;
    cin >> compoundtimes;

    // calculate values 
    double amount = principal * pow((1+(interestRate/100)/compoundtimes),compoundtimes);
    double interest = amount - principal;

    // print all needed values 
    cout << "Interest Rate:           " << interestRate << "%" << endl;
    cout << "Times Compounded:        " << compoundtimes << endl;
    cout << "Principal:              $" << principal << endl;
    cout << "Interest:               $" << round(interest * 100.0)/ 100.0 << endl;
    cout << "Amount in Savings:      $" << amount << endl;


    return 0;
}


/*
principal: 
1000
interestRate: 
4.25
compoundtimes: 
12
Interest Rate:           4.25%
Times Compounded:        12   
Principal:              $1000 
Interest:               $43.34
Amount in Savings:      $1043.34
*/
