/*
CIST 004A Spring 2023
HW week 4 problem 10
Description: Program used to calculates the total and average of rain during the time span of years. 
Input: Asks for the amount of years, and then for monthly rain in the given montlhy years. 
Output: Outputs the calculated varaibles 
Student: Matan Kedar 
Known bugs: none.
Date: 2/21/2023
*/

#include <limits>
#include <iostream>
using namespace std;

int main(){
    // intalize the doubles 
    double total, input, numOfYears;

    // ask and store amount of years 
    cout << "Please enter the number of years: " << endl;
    while(true) {
        if (cin >> numOfYears && numOfYears >= 1 && !cin.fail()) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number equal or bigger than 1." << endl; 
        }
    }


    // for loops asking for the specific month in the speicifc year
    for(int i = 0; i < numOfYears; i++){
        for(int j = 0; j < 12; j++){
              while (true) {
                cout << "Please input year " << i+1 << " and month " << j+1 << endl;
                if (cin >> input && input > 0 && !cin.fail()) {
                    total += input;
                    break;
                }
                else {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a positive number." << endl; 
                }
            }
        }
    }
    // print out the calculations 
    cout << "The total months of the selected period is: " << numOfYears*12 << endl;
    cout << "The total amount of rain in the given time is: " << total << endl;
    cout << "The average amount of rain in the given time is: " << total/(numOfYears*12) << endl;

    return 0;
}


/*
Please enter the number of years: 
abc
Invalid input. Please enter a number equal or bigger than 1.
-1
Invalid input. Please enter a number equal or bigger than 1.
1
Please input year 1 and month 1
-1
Invalid input. Please enter a positive number.
Please input year 1 and month 1
abc
Invalid input. Please enter a positive number.
Please input year 1 and month 1
12
Please input year 1 and month 2
10
Please input year 1 and month 3
12
Please input year 1 and month 4
10
Please input year 1 and month 5
11
Please input year 1 and month 6
12
Please input year 1 and month 7
13
Please input year 1 and month 8
12
Please input year 1 and month 9
10
Please input year 1 and month 10
12
Please input year 1 and month 11
11
Please input year 1 and month 12
10
The total months of the selected period is: 12
The total amount of rain in the given time is: 135
The average amount of rain in the given time is: 11.25
*/