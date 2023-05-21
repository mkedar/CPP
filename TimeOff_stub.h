#ifndef TIMEOFF_STUB_H
#define TIMEOFF_STUB_H

#include <string>

class TimeOff {
private:
    std::string name;
    int employeeID;
    double maxSickDays;
    double sickTaken;
    double maxVacation;
    double vacationTaken;
    double maxUnpaid;
    double unpaidTaken;

public:
    TimeOff(std::string n, int iD, double mS, double sT, double mV, double vT, double mU, double uT);

    void setName(const std::string& n);
    std::string getName() const;

    void setEmployeeID(int iD);
    int getEmpNum() const;

    void setMaxSickDays(double mS);
    double getMaxSickDays() const;

    void setSickTaken(double sT);
    double getSickTaken() const;

    void setMaxVacation(double mV);
    double getMaxVacation() const;

    void setVacationTaken(double vT);
    double getVacTaken() const;

    void setMaxUnpaid(double mU);
    double getMaxUnpaid() const;

    void setUnpaidTaken(double uT);
    double getUnpaidTaken() const;

    double getSickTakenDays() const;
    double getVacTakenDays() const;
    double getUnpaidTakenDays() const;
};

#endif 