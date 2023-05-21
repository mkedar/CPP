#include "TimeOff_stub.h"
using namespace std;

TimeOff::TimeOff(string n, int iD, double mS, double sT, double mV, double vT, double mU, double uT) {
    name = n;
    employeeID = iD;
    maxSickDays = mS;
    sickTaken = sT;
    maxVacation = mV;
    vacationTaken = vT;
    maxUnpaid = mU;
    unpaidTaken = uT;
}

void TimeOff::setName(const string& n) {
    name = n;
}

string TimeOff::getName() const {
    return name;
}

void TimeOff::setEmployeeID(int iD) {
    employeeID = iD;
}

int TimeOff::getEmpNum() const {
    return employeeID;
}

void TimeOff::setMaxSickDays(double mS) {
    maxSickDays = mS;
}

double TimeOff::getMaxSickDays() const {
    return maxSickDays;
}

void TimeOff::setSickTaken(double sT) {
    sickTaken = sT;
}

double TimeOff::getSickTaken() const {
    return sickTaken;
}

void TimeOff::setMaxVacation(double mV) {
    maxVacation = mV;
}

double TimeOff::getMaxVacation() const {
    return maxVacation;
}

void TimeOff::setVacationTaken(double vT) {
    vacationTaken = vT;
}

double TimeOff::getVacTaken() const {
    return vacationTaken;
}

void TimeOff::setMaxUnpaid(double mU) {
    maxUnpaid = mU;
}

double TimeOff::getMaxUnpaid() const {
    return maxUnpaid;
}

void TimeOff::setUnpaidTaken(double uT) {
    unpaidTaken = uT;
}

double TimeOff::getUnpaidTaken() const {
    return unpaidTaken;
}

double TimeOff::getSickTakenDays() const {
    return sickTaken / 8.0;
}

double TimeOff::getVacTakenDays() const {
    return vacationTaken / 8.0;
}

double TimeOff::getUnpaidTakenDays() const {
    return unpaidTaken / 8.0;
}
