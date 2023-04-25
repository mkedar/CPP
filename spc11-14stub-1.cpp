// Chapter 11, Programming Challenge 14: Inventory Bins
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Constants for array size
const int NUM_BINS = 10;

// Declaration of the InventoryBin structure
struct InventoryBin
{
   string description; // Item description
   int num;            // Number of parts in a bin
};

// Function prototypes
void selectBin(InventoryBin [], int);
void addParts(InventoryBin&, int);
void removeParts(InventoryBin&, int);

int main()
{
   // The user's menu choice
   int choice;
   
   // Array of InventoryBins
   InventoryBin bins[NUM_BINS] = {
                       {"Valve", 10},
                       {"Bearing", 5},
                       {"Bushing", 15},
                       {"Coupling", 21},
                       {"Flange", 7},
                       {"Gear", 5},
                       {"Gear Housing", 5},
                       {"Vacuum Gripper", 25},
                       {"Cable", 18},
                       {"Rod", 12}};
   
   do
   {
      for (int i = 0; i < NUM_BINS; i++) {
         cout << i+1 << ". " << bins[i].description << " (" << bins[i].num << " parts)" << endl;
      }
      cout << "\nEnter 0 to quit, or choose a bin Number: ";
      cin >> choice;
      while (choice < 0 || choice > NUM_BINS) {
         cout << "Invalid bin number. Please enter a valid bin number (1-" << NUM_BINS << ") or 0 to quit: ";
         cin >> choice;
      }
      if (choice != 0) {
         selectBin(bins, choice - 1);
      }
      
   } while (choice != 0);

   return 0;
}

//*********************************************************
// Function selectBin
// This function lets the user choose whether to add or
// remove parts from the bin b[Choice].
//*********************************************************

void selectBin(InventoryBin b[], int choice)
{
    int numParts;  
    char aorr;   
    bool modified = true; 

    do {

        cout << "Add or Remove Parts (A or R)? ";
        cin >> aorr;

        aorr = toupper(aorr);
        while (aorr != 'A' && aorr != 'R'){
            cout << "Enter A or R: ";
            cin >> aorr;
            aorr = toupper(aorr);
        }

        if (aorr == 'A'){
            cout << "Enter the number of parts to add: ";
            cin >> numParts;
            addParts(b[choice], numParts);
            modified = false; 
        }
        else if (aorr == 'R'){
            cout << "Enter the number of parts to remove: ";
            cin >> numParts;
            removeParts(b[choice], numParts);
            modified = false; 
        }
    } while (modified); 
}



//***********************************************************
// Function addParts                                        *
// This function adds the value passed to numAdd to the     *
// num member of the bin structure. The value is validated. *
//***********************************************************
void addParts(InventoryBin &bin, int numAdd)
{
   if (numAdd > 0 && bin.num + numAdd <= 30){
      bin.num += numAdd;
   }
   else {
      if (numAdd <= 0){
         cout << "Invalid number of parts to add." << endl;
      }
      else{
         cout << "Total number of parts in the bin cannot exceed 30." << endl;
      }
   }
}

//************************************************************
// Function removeParts                                      *
// This function subtracts the value passed to numRem to the *
// num member of the bin structure. The value is validated.  *
//************************************************************
void removeParts(InventoryBin &bin, int numRem)
{
   if (numRem <= bin.num && numRem > 0){
      bin.num -= numRem;
   } 
   else{
      cout << "Invalid number of parts to remove." << endl;
   }
}

