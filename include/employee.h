#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <iostream>
#include <string>
using namespace std;

class employee {
public:
    string name;
    int age;
    int telephone;
    
    employee();
    employee(const string &name, int &age, int &telephone);
    void setInfo(const string &name, int &age, int &telephone);
    virtual void calSalary() = 0;
    virtual void print() = 0;
};

#endif