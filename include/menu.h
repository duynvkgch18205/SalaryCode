#ifndef _MENU_H_
#define _MENU_H_

#include "fullTimeEmployee.h"
#include "partTimeEmployee.h"
#include "hourlyEmployee.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class menu {
protected:
    const int EXIT = 0;
public: 
    void run();
    int getChoice();
    virtual void doTask(const int &choice) = 0;
    virtual void printMenu() = 0;
};

class salaryPro: public menu {
public: 
    void doTask(const int &choice);
    void printMenu();
    ~salaryPro();
private:
    void fullTime();
    void partTime();
    void hourly();
    void calSalary();
    vector<employee*> employees;
};

#endif