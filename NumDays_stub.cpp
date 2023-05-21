// Implementation file for the NumDays class
#include "NumDays.h"

//**********************************************
// Overloaded + operator                       *
//**********************************************
NumDays NumDays::operator+(NumDays& nd){
    return NumDays(hours + nd.hours);
}

//**********************************************
// Overloaded - operator                       *
//**********************************************
NumDays NumDays::operator-(NumDays& nd){
    return NumDays(hours - nd.hours);
}

//**********************************************
// Overloaded prefix ++ operator               *
//**********************************************
NumDays NumDays::operator++(){
    ++hours;
    days = hours / 8;
    return *this;
}

//**********************************************
// Overloaded postfix ++ operator              *
//**********************************************
NumDays NumDays::operator++(int){
    NumDays temp(hours);
    hours++;
    days = hours / 8;
    return temp;
}

//**********************************************
// Overloaded prefix -- operator               *
//**********************************************
NumDays NumDays::operator--(){
    --hours;
    days = hours / 8;
    return *this;
}

//**********************************************
// Overloaded postfix -- operator              *
//**********************************************
NumDays NumDays::operator--(int){
    NumDays temp(hours);
    hours--;
    days = hours / 8;
    return temp;
}
