#ifndef _HOURLYEMPLOYEE_H_
#define _HOURLYEMPLOYEE_H_

#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class hourlyEmployee: public employee {
public:
    void run();
    hourlyEmployee();
    hourlyEmployee(const string &name, int &age, int &telephone);
    void setEmployee(const string &name, int &age, int &telephone);
    void calSalary();
    void print();
};

#endif