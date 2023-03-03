/*
CIST 004A Spring 2023
HW week 4 problem 15
Description: Checks if a number is a prime or not 
Input: number to be checked  
Output: If the inputted number is a prime or not 
Student: Matan Kedar 
Known bugs: none.
Date: 2/28/2023
*/

#include <iostream>
using namespace std;

bool isPrime(int input){
    if(input == 0 || input == 1){
        return false;
    }
    for(int i = 2; i<=input; i++){
        if(input % i == 0 && input != i){
            return false;
        }
    }
    return true;
}

int main()
{
    int input =0;
    cout << "What your desired number:" << endl;
    cin >> input;
    if(isPrime(input)){
        cout << "Your number IS a prime." << endl;
    }
    else{
        cout << "Your number is NOT a prime." << endl;
    }

    
}

/*
What your desired number:
5
Your number IS a prime.
*/