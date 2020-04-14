#ifndef _FULLTIMEEMPLOYEE_H_
#define _FULLTIMEEMPLOYEE_H_

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

class fullTimeEmployee: public employee {
public:
    fullTimeEmployee();
    fullTimeEmployee(const string &name, int &age, int &telephone);
    void calSalary();
    void print();
};

#endif