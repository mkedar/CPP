#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "SimpleVector.h"
template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
   // Default constructor
   SearchableVector() : SimpleVector<T>() {}
   
   // Constructor
   SearchableVector(int size) : SimpleVector<T>(size) {}
   
   // Copy constructor
   SearchableVector(const SearchableVector&);

   // Accessor to find an item
   int findItem(const T);
};

template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector& obj) : SimpleVector<T>(obj.size())
{
   for (int count = 0; count < this->size(); count++)
      this->operator[](count) = obj[count];
}

template <class T>
int SearchableVector<T>::findItem(const T item)
{
   int low = 0;
   int high = this->size()-1;
   while (low <= high){
      int mid = (low + high) / 2;
      if (this->operator[](mid) == item){
         return mid;
      }
      else if (this->operator[](mid) < item){
         low = mid + 1; 
      }
      else{
         high = mid - 1;
      }
   }
   return -1;
}


#endif
