#include <iostream>
#include <string>
using namespace std;

int main()
{
   const int SIZE = 11;
   string name; //name to look for
   string phoneDirectory[SIZE] = {
       "Alejandra Cruz, 555-1223",
       "Joe Looney, 555-0097",
       "Geri Palmer, 555-8787",
       "Li Chen, 555-1212",
       "Holly Gaddis, 555-8878",
       "Sam Wiggins, 555-0998",
       "Bob Kain, 555-8712",
       "Tim Haynes, 555-7676",
       "Warren Gaddis, 555-9037",
       "Jean James, 555-4939",
       "Ron Palmer, 555-2783" };

   // Get a name or partial name to search for.
   cout << "Enter a name or partial name to search for: ";
   getline(cin, name);
   // your work  
   for (int i = 0; i < SIZE; i++) {
       int indexLoc = phoneDirectory[i].find(name);
       if (indexLoc >= 0 && indexLoc < phoneDirectory[i].size()) {
           cout << phoneDirectory[i] << endl;
           for (int j = i + 1; j < SIZE; j++) {
               if (phoneDirectory[j].find(name) == indexLoc) { // scan through the directory agian if there is another name
                   cout << phoneDirectory[j] << endl;
               }
           }
       }
   }
   return 0;
}
