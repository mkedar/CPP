/*
CIST 004A Spring 2022
HW week 2 problem 24
Description: Uses inputted time of day and total mintues parked to caculate the rate and the total cost of the parking 
Input: Total mintues parked and time of day
Output: Rate and total cost 
Student: Matan Kedar 
Known bugs: none.
Date: 2/15/2023
*/

#include <iostream>
using namespace std;

int main(){
    // declare varabiles 
    double input, hours, RATE;

    // ask and assign input 
    cout << "How many minutes are you parked?" << endl;
    cin >> hours; 
    cout << "What is the time? (formated hours.minutes )" << endl;
    cin >> input; 
    
    // split the inputted data
    int num1 = (int)input;
    double final1 = num1; 
    double final2 = (final1 - input)*-100;
 
    //convert to total minutes by multiplying the hours by 60 and adding the minutes. 
    final1 = final1*60 + final2; 
    
    //input validation
    if(final1 > 1439 || final2 > 59){
        cout << "Invalid input" << endl; 
        exit(3);
    }
 
    
    // if statement logic gate 
    // if(0 <= final1 && final1 <= 419){
    //     RATE = 0.05;
    // }
    // else if(420 <= final1 && final1 <= 1140){
    //     RATE = 0.45;
    // }
    // else if(1140 <= final1 && final1 <= 1439){
    //     RATE = 0.25;
    // }
    
    //Ternary logic 
    RATE = (0 <= final1 && final1 <= 419) ? 0.05 :
       (420 <= final1 && final1 <= 1140) ? 0.45 :
       (1140 <= final1 && final1 <= 1439) ? 0.25 :
       RATE;

    // display the calculated varaiables 
    cout << "The rate is: $" << RATE << " per Minute" << endl; 
    cout << "The total cost is: $" << RATE*hours << endl;    
    
    return 0;
}

/*
How many minutes are you parked?
120
What is the time? (formated hours.minutes )
7.24
The rate is: $0.45 per Minute        
The total cost is: $54
*/