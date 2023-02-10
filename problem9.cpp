/*
CIST 004A Spring 2022
HW week 1 problem 9
Description: Outputs sizes of diffrent data types 
Input: none.
Output: Various sizes of diffrent data types. 
Student: Matan Kedar 
Known bugs: none.
Date: 2/4/2023
*/

#include <iostream>
using namespace std;


void problem9(){
    cout << "Char: " << sizeof(char) <<" byte\n";;
    cout << "Int: " <<sizeof(int) <<" bytes\n";;
    cout << "Float: " <<sizeof(float) <<" bytes\n";;
    cout << "Double: " <<sizeof(double) <<" bytes\n";
    }

int main() {
    problem9();
}

/*
Char: 1 byte
Int: 4 bytes
Float: 4 bytes
Double: 8 bytes
*/