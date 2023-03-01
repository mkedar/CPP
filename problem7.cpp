/*
CIST 004A Spring 2023
HW week 4 problem 7
Description: Program loops through 1-20 and calculates the celsius equivalent  
Input: none. 
Output: Outputs the calculated translation
Student: Matan Kedar 
Known bugs: none.
Date: 2/28/2023
*/

#include <iomanip>
#include <iostream>
using namespace std;

double celsius(int input){
    double c = (5.0/9.0)*(input-32.0);
    return c;
}

int main(){
    cout << setw(12) << left << "Fahrenheit" << setw(12) << left << "Celsius" << endl;
    cout << "**************************" << endl;
    for(int i = 0; i < 21; i++){
        cout << setw(12) << left << i << setw(12) << left << celsius(i) << endl;
    }
    return 0;
}

/*
Fahrenheit  Celsius     
**************************
0           -17.7778    
1           -17.2222    
2           -16.6667    
3           -16.1111    
4           -15.5556    
5           -15         
6           -14.4444    
7           -13.8889    
8           -13.3333    
9           -12.7778    
10          -12.2222    
11          -11.6667    
12          -11.1111    
13          -10.5556    
14          -10         
15          -9.44444    
16          -8.88889    
17          -8.33333    
18          -7.77778    
19          -7.22222    
20          -6.66667    

*/