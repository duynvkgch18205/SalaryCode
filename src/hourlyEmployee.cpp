#include "hourlyEmployee.h"
#include <iostream>
#include <string>

hourlyEmployee::hourlyEmployee() {

}

hourlyEmployee::hourlyEmployee(const string &name, int &age, int &telephone): employee(name, age, telephone) {

}

void hourlyEmployee::calSalary() {
    int basicSalary = 500;
    int rating;
    int hours;

    cout << "Enter rating: ";
    cin >> rating;
    cout << "Enter hours: ";
    cin >> hours;

    int salary = basicSalary * rating * hours / 240;
    cout << "Salary hourly employee: " << salary << endl;
}

void hourlyEmployee::print() {
    cout << "Hourly employee: " << name << endl;
}