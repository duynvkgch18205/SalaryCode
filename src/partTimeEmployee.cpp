#include "partTimeEmployee.h"
#include <iostream>
#include <string>

partTimeEmployee::partTimeEmployee() {

}

partTimeEmployee::partTimeEmployee(const string &name, int &age, int &telephone): employee(name, age, telephone) {

}

void partTimeEmployee::calSalary() {
    int basicSalary = 500;
    int rating;

    cout << "Enter rating: ";
    cin >> rating;

    int salary = basicSalary * rating * 0.5;
    cout << "Salary of part-time employee: " << salary << endl;
}

void partTimeEmployee::print() {
    cout << "Part-time employee: " << name << endl;
}