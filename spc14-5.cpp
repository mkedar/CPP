#include <iostream>
#include "TimeOff_stub.h"
#include "TimeOff_stub.cpp"
using namespace std;

int main() {
    TimeOff test("George Smith", 1423, 80, 40, 200, 100, 200, 8);

    cout << "Name: " << test.getName() << endl;
    cout << "ID: " << test.getEmpNum() << endl << endl;

    cout << "Max Sick Days: " << test.getMaxSickDays() << endl;
    cout << "Sick Days taken: " << test.getSickTaken() << endl;
    cout << "Sick Days taken: " << test.getSickTakenDays() << endl << endl;

    cout << "Max Vacation Days: " << test.getMaxVacation() << endl;
    cout << "Vacation Days taken: " << test.getVacTaken() << endl;
    cout << "Vacation Days taken: " << test.getVacTakenDays() << endl << endl;

    cout << "Max Unpaid Days: " << test.getMaxUnpaid() << endl;
    cout << "Unpaid Days taken: " << test.getUnpaidTaken() << endl;
    cout << "Unpaid Days taken: " << test.getUnpaidTakenDays() << endl << endl;

    return 0;
}