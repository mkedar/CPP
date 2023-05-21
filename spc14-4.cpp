// Chapter 14, Programming Challenge 4: NumDays Class
#include <iostream>
#include "numdays.h"
#include "NumDays_stub.cpp"
using namespace std;

int main()
{
   NumDays one(25), 
           two(15), 
           three, 
           four;

   cout << "One: " << one.getDays() << endl;
   cout << "Two: " << two.getDays() << endl;
   
   three = one + two;

    cout << "Three: " << three.getDays() << endl;
   
   four = three++;
   cout << "Four = Three++: " << four.getDays() << endl;
   
   four = ++three;
   cout << "Four = ++Three: " << four.getDays() << endl;
   
   four = three--;
   cout << "Four = Three--: " << four.getDays() << endl;
   
   four = --three;
   cout << "Four = --Three: " << four.getDays() << endl; 

   return 0;
}