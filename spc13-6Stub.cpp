// Chapter 13, Programming Challenge 6: Inventory Class
//
// Additional files needed to compile this program:
//    Inventory.h
//    Inventory.cpp

#include <iostream>
#include "InventoryStub.h"
using namespace std;

int main()
{
   // Define an Inventory object and use the default constructor.
   Inventory inv;

   cout << "Item number: " << inv.getItemNumber() << endl;
   cout << "Quantity:    " << inv.getQuantity() << endl;
   cout << "Cost:        " << inv.getCost() << endl;
   cout << "Total cost:  " << inv.getTotalCost() << endl;

   // Define an Inventory object and use the overloaded constructor.
   Inventory inv2(777, 10, 12.50);

   // Display the member values.
   cout << "Item number: " << inv2.getItemNumber() << endl;
   cout << "Quantity:    " << inv2.getQuantity() << endl;
   cout << "Cost:        " << inv2.getCost() << endl;
   cout << "Total cost:  " << inv2.getTotalCost() << endl;

   // Use the mutator functions to change the member values.
   inv2.setItemNumber(555);
   inv2.setQuantity(20);
   inv2.setCost(19.95);
   inv2.setTotalCost();
   // Display the modified values.
   cout << "Item number: " << inv2.getItemNumber() << endl;
   cout << "Quantity:    " << inv2.getQuantity() << endl;
   cout << "Cost:        " << inv2.getCost() << endl;
   cout << "Total cost:  " << inv2.getTotalCost() << endl;

   return 0;
}