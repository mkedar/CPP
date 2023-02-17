/*
CIST 004A Spring 2022
HW week 1 problem 10
Description: Asks for names and amount of rain for 3 months and caculates the average. 
Input: Number of month
Output: Average rain in 3 months 
Student: Matan Kedar 
Known bugs: none.
Date: 2/12/2023
*/

#include <iostream>
using namespace std;

int main()
{
    // declare varaibles 
    int month, year, final;
    bool leapyear = false;
    
    // ask for input
    cout << "Please enter the number of month (1-12)";
    cin >> month; 
    
    // input validation 
    if (month > 12 || month < 1){
        cout << "Invalid number inputted" << endl; 
        exit(3);
    }
    
    // ask for input 
    cout << "Please enter the year (ex. 2023)";
    cin >> year; 
    
    //if(year % 100 == 0 && year % 400 == 0){
    //   leapyear = true;
    //}
    //if(year % 100 != 0 && year % 4 ==0){
    //     leapyear = true; 
    //}
    
    // check if leapyear 
    leapyear = year % 100 == 0 && year % 400 == 0 ? true : 
                year % 100 != 0 && year % 4 == 0 ? true : 
                false;
    
    // month logic 
    if (month == 2) {
        if (leapyear) {
            final = 29;
    }   else {
            final = 28;
    }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
    final = 30;
    } 
    else {
    final = 31;
    }
    
    // print final 
    cout << final << endl;
    
    
    return 0;
}