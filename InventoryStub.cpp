// Implementation file for the Inventory class
#include <iostream>
#include "InventoryStub.h"
using namespace std;

//*************************************
// Overloaded constructor *
//*************************************

Inventory::Inventory(int itemNum, double cst, int qty)
{
itemNumber = itemNum;
cost = cst;
quantity = qty;
setTotalCost();
}

//*************************************
// setItemNumber member function *
//*************************************

void Inventory::setItemNumber(int num)
{
itemNumber = num;
}

//*************************************
// setQuantity member function *
//*************************************

void Inventory::setQuantity(int q)
{
quantity = q;
setTotalCost();
}

//*************************************
// setCost member function *
//*************************************

void Inventory::setCost(double c)
{
cost = c;
setTotalCost();
}