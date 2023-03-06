//Matan Kedar
//3/2/2023

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 ==0)){
        return true;
    }
    return false; 
}

int main(){
    int counter = 0, total = 0; 
    for(int i = 1600; i <= 2100; i++){
        if(isLeapYear(i)){
            cout << i << " ";
            counter++, total++;
        }
        if(counter == 10){
            cout << "\n";
            counter = 0; 
        }
    }   
    cout << "\n" << "Total amount of leap years: " << total;
}