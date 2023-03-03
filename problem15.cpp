/*
CIST 004A Spring 2023
HW week 4 problem 15
Description: Calculates total hospital charges using user input.  
Input: types of treatment, totalDays, rate of payment, cost of service, cost of medicine charges. 
Output: Outputs the calculated totals 
Student: Matan Kedar 
Known bugs: none.
Date: 2/28/2023
*/

#include <iostream>
using namespace std;

string validateChoice(){
    string user_input = "";
    while(true){
        cout << "Are you a impatient or an outpatient (input: i/o)" << endl;
        cin >> user_input;
        if(user_input == "i" || user_input == "o" || user_input == "I"|| user_input == "O"){
            break;
        }
        cout << "Invalid input, please only input i/o " << endl;
    }
   
    return user_input;
}

int validateNum(string question, int limit){
    int num = 0;
    while(true){
        cout << question << endl; 
        cin >> num;
        if(num > limit){
            break;
        }
        cout << "Invalid inpit, please use enter a postive number"<< endl; 
    }
    return num;
}

int totalCharges(int totalDays, int hourlyRate, int medicationCharges, int hospitalServices){
    return (totalDays*24*hourlyRate + medicationCharges + hospitalServices);
}

int totalCharges(int medicationCharges, int hospitalServices){
    return (medicationCharges + hospitalServices);
}

int main(){
    int totalDays, hourlyRate, medicationCharges, hospitalServices;
    string user_input = validateChoice();
   
    if(user_input=="i"){
        totalDays = validateNum("How many days did you spend in the hosptial: ", 0);
        hourlyRate = validateNum("What is the hourly rate: ", 0 );
        medicationCharges = validateNum("What is the total medication charges: ", 0);
        hospitalServices = validateNum("What are the total hospital services charges: ", 0);
        
        cout << "Your total is: $" << totalCharges(totalDays, hourlyRate, medicationCharges,hospitalServices) << endl;
        
    }
    else{
        medicationCharges = validateNum("What is the total medication charges: ", 0);
        hospitalServices = validateNum("What are the total hospital services charges: ", 0);
        
        cout << "Your total is: $" << totalCharges(medicationCharges,hospitalServices) << endl;
    }

    return 0;
}


/*
Are you a impatient or an outpatient (input: i/o)
m
Invalid input, please only input i/o 
Are you a impatient or an outpatient (input: i/o)
i
How many days did you spend in the hosptial: 
-1  
Invalid inpit, please use enter a postive number
How many days did you spend in the hosptial: 
1
What is the hourly rate: 
10
What is the total medication charges: 
-1
Invalid inpit, please use enter a postive number
What is the total medication charges: 
10
What are the total hospital services charges: 
10
Your total is: $260
*/
