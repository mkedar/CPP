/*
CIST 004A Spring 2022
HW week 1 problem 8
Description: Stores values of items, calculates totals including tax, outputs calculated values. 
Input: none.
Output: Items 1-5, subtotal, sales Tax, and grand Total
Student: Matan Kedar 
Known bugs: none.
Date: 2/9/2023
*/

#include <iostream>
using namespace std;


void problem8(){
    double tax = 0.07; 
    
    // stores values of items
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95; 

    // stores total and total tax 
    double subtotal = item1+item2+item3+item4+item5; 
    double salesTax = subtotal * tax; 

    // displays items 
    cout << "Item 1:       $" << item1 << endl;
    cout << "Item 2:       $" << item2 << endl;
    cout << "Item 3:       $" << item3 << endl;
    cout << "Item 4:       $" << item4 << endl;
    cout << "Item 5:       $" << item5 << endl;
    cout << "Subtotal:     $" << subtotal << endl;
    cout << "Sales Tax:    $" << salesTax << endl;
    cout << "Total:        $" << salesTax+subtotal << endl;

    }

int main() {
    problem8();
}

/* 
Item 1:       $15.95
Item 2:       $24.95
Item 3:       $6.95
Item 4:       $12.95
Item 5:       $3.95
Subtotal:     $64.75
Sales Tax:    $4.5325
Total:        $69.2825 
*/