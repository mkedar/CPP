// Specification file for the Inventory class
#ifndef INVENTORY_H
#define INVENTORY_H

// Inventory class declaration

class Inventory
{
private:
   int itemNumber;
   int quantity;
   double cost;
   double totalCost;
   
public:
   Inventory()
   {
      itemNumber = 0;
      quantity = 0;
      cost = 0.0;
      totalCost = 0.0;
   }
   Inventory(int itemNum, double cst, int qty){
      itemNumber = itemNum;
      cost = cst;
      quantity = qty;
      setTotalCost();
   }
   
   void setItemNumber(int num){
      itemNumber = num;
   }
   
   void setQuantity(int qty){
      quantity = qty;
   }
   
   void setCost(double cst){
      cost = cst;
   }
   
   void setTotalCost(){
      totalCost = cost * quantity;
   }
   
   int getItemNumber() const{
      return itemNumber;
   }
   
   int getQuantity() const{
      return quantity;
   }
   
   double getCost() const{
      return cost;
   }
   
   double getTotalCost() const{
      return totalCost;
   }
};

#endif
