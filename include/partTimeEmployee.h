#ifndef _PARTTIMEEMPLOYEE_H_
#define _PARTTIMEEMPLOYEE_H_

#include <string>
#include <iostream>
#include "employee.h"
using namespace std;

class partTimeEmployee: public employee {
public:
    void run();
    partTimeEmployee();
    partTimeEmployee(const string &name, int &age, int &telephone);
    void setEmployee(const string &name, int &age, int &telephone);
    void calSalary();
    void print();
};

#endif