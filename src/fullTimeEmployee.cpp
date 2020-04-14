#include "fullTimeEmployee.h"
#include <iostream>
#include <string>

fullTimeEmployee::fullTimeEmployee() {

}

fullTimeEmployee::fullTimeEmployee(const string &name, int &age, int &telephone): employee(name, age, telephone) {

}

void fullTimeEmployee::calSalary() {
    int basicSalary = 500;
    int rating;
    int bonus;

    cout << "Enter rating: ";
    cin >> rating;

    if (rating < 4)
    {
        bonus = 50;
    } else if (rating > 4 && rating <= 7)
    {
        bonus = 100;
    } else if (rating > 7)
    {
        bonus = 200;
    }    
    
    int salary = basicSalary * rating + bonus;
    cout << "Salary of full-time employee: " << salary << endl;
}

void fullTimeEmployee::print() {
    cout << "Full-time employee: " << name << endl;
}