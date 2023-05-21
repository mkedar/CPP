// Specification file for the SortableVector class
#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

#include "SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
    // Constructor
    SortableVector(int size) : SimpleVector<T>(size) {}

    // Copy constructor
    SortableVector(const SortableVector &obj) : SimpleVector<T>(obj) {}

    // Sort the vector using selection sort
    void sort();
};

template <class T>
void SortableVector<T>::sort()
{
    int minIndex;
    T minValue;

    for (int i = 0; i < this->size() - 1; i++)
    {
        minIndex = i;
        minValue = this->operator[](i);

        for (int j = i + 1; j < this->size(); j++)
        {
            if (this->operator[](j) < minValue)
            {
                minIndex = j;
                minValue = this->operator[](j);
            }
        }
        if (minIndex != i)
        {
            T temp = this->operator[](i);
            this->operator[](i) = this->operator[](minIndex);
            this->operator[](minIndex) = temp;
        }
    }
}

#endif
