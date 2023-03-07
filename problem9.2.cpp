/*
CIST 004A Spring 2022
HW week 5 problem  9
Description: Calculates total wages of 7 emoplyees  
Input: 7 payrates, 7 hours worked 
Output: Gross wages for the 7 employees. 
Student: Matan Kedar 
Known bugs: none.
Date: 3/7/23
*/


#include <limits>
#include<array> 
#include <iostream>
using namespace std;

int verfiyNum(double limit){
    double input; 
    while(true) {
        if (cin >> input && input >= limit && !cin.fail()) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number bigger than " << limit << "." << endl; 
        }
    }
    return input;
}

int main()
{
    const int emptId[7] = {
        5658845, 4520125, 7895122, 
        8777541, 8451277, 1302850, 
        7580489 };
    int hours[7]; 
    double payRate[7], wages[7];
    for(int i=0; i < sizeof(emptId)/sizeof(emptId[0]); i++){
        cout << "How many hours did ID:" << emptId[i] << " work? ";
        hours[i] = verfiyNum(0.00);
        cout << "What is the pay rate of " << emptId[i] << "? ";
        payRate[i] = verfiyNum(15);
        wages[i] = hours[i] * payRate[i];
    }
    cout << "Employ ID      Gross Pay\n*************************" << endl;
    for(int j=0;j < sizeof(emptId)/sizeof(emptId[0]); j++ ){
        cout << emptId[j] << "          $" << wages[j] << endl;
    }
    return 0;
}


/*
How many hours did 5658845 work? 20
What is the pay rate of 5658845? 20
How many hours did 4520125 work? -1
Invalid input. Please enter a number bigger than 0.
30
What is the pay rate of 4520125? 14
Invalid input. Please enter a number bigger than 15.
30
How many hours did 7895122 work? 30
What is the pay rate of 7895122? 30
How many hours did 8777541 work? 40
What is the pay rate of 8777541? 40
How many hours did 8451277 work? 50
What is the pay rate of 8451277? 50
How many hours did 1302850 work? 60
What is the pay rate of 1302850? 60
How many hours did 7580489 work? 70
What is the pay rate of 7580489? 70
Employ ID      Gross Pay
*************************
5658845          $400
4520125          $900
7895122          $900
8777541          $1600
8451277          $2500
1302850          $3600
7580489          $4900
*/