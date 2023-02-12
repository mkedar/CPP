/*
CIST 004A Spring 2022
HW week 1 problem 4
Description: Asks for names and amount of rain for 3 months and caculates the average. 
Input: Name of 3 months, rain in 3 months
Output: Average rain in 3 months 
Student: Matan Kedar 
Known bugs: none.
Date: 2/12/2023
*/

#include <iostream>
using namespace std;


int main(){
    string month1, month2, month3;
    double data1, data2, data3;
    cout << "What is the name of 3 months?" << endl;
    cin >> month1;
    cin >> month2;
    cin >> month3; 
    cout << "What is the amount of rain in inches on: " << month1 << "." << endl;
    cin >> data1;
    cout << "What is the amount of rain in inches on: " << month2 << "." << endl;
    cin >> data2;
    cout << "What is the amount of rain in inches on: " << month3 << "." << endl;
    cin >> data3;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << (data1 + data2 + data3)/3 << " inches." << endl;  
 
    return 0;
    
}

/*
What is the name of 3 months?
Jan 
Fed
Sep
What is the amount of rain in inches on: Jan.
8
What is the amount of rain in inches on: Fed.
4
What is the amount of rain in inches on: Sep.
5
The average rainfall for Jan, Fed, and Sep is 5.66667 inches.
*/