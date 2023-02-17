/*
CIST 004A Spring 2022
HW week 1 problem 5 
Description: Calculates weight catagory using the inputted height and weight 
Input: Height and weight 
Output: Determines what weight catagory 
Student: Matan Kedar 
Known bugs: none.
Date: 2/14/23
*/


#include <iostream>
#include <cmath>
using namespace std;

int main (){
  
  // declare varaibles 
  int weight, height;
  bool overweight, underweight, optimalweight;
  string final;
  
  // ask for input, and change varaibles 
  cout << "Please enter weight in pounds: " << endl;
  cin >> weight;
  cout << "Please enter height in inches: " << endl;
  cin >> height; 
  
  // calculate BMI
  double BMI = weight * 703 /(pow(height, 2));
   
  // declare booleans 
  overweight = BMI > 25;
  underweight = BMI < 18.5; 
  optimalweight = BMI >= 18.5 && BMI <= 25;
  
  //  boolean logic gate 
    if(overweight){
        cout << "You are overweight. " << endl; 
    }
    if(underweight){
        cout << "You are underweight. " << endl; 
    }
    if(optimalweight){
        cout << "You are optimal weight. " << endl;
    }

    return 0;
}


/*
Please enter weight in pounds:
195
Please enter height in inches:
75
You are optimal weight.
*/