#include "menu.h"
#include "employee.h"
#include <iostream>
#include <string>

void menu::run() {
    bool run = true;
    while(run) {
        printMenu();
        int choice = getChoice();
        doTask(choice);

        if (choice == EXIT)
        {
            run = false;
        }
    }
}

int menu::getChoice() {
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    return choice;
}

void salaryPro::printMenu() {
    cout << "Program salary" << endl;
    cout << "1. Full-time Employee" << endl;
    cout << "2. Part-time Employee" << endl;
    cout << "3. Hourly Employee" << endl;
    cout << "4. Process" << endl;
    cout << "0. EXIT" << endl;
}

void salaryPro::doTask(const int &choice) {
    switch (choice) {
        case 1:
            fullTime();
            break;
        case 2:
            partTime();
            break;
        case 3:
            hourly();
            break;
        case 4:
            calSalary();
            break;
        case 0:
            break;
    }
}

void salaryPro::fullTime() {
    string name;
    int age;
    int telephone;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your telephone: ";
    cin >> telephone;

    employee *fte = new fullTimeEmployee(name, age, telephone);
    employees.push_back(fte);
}

void salaryPro::partTime() {
    string name;
    int age;
    int telephone;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your telephone: ";
    cin >> telephone;

    employee *pte = new partTimeEmployee(name, age, telephone);
    employees.push_back(pte);
}

void salaryPro::hourly() {
    string name;
    int age;
    int telephone;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your telephone: ";
    cin >> telephone;

    employee *he = new partTimeEmployee(name, age, telephone);
    employees.push_back(he);
}

void salaryPro::calSalary() {
    for (int i = 0; i < employees.size(); i++)
    {
        employees[i] -> print();
        employees[i] -> calSalary();
    }
}

salaryPro::~salaryPro() {
    for (int i = 0; i < employees.size(); i++)
    {
        delete employees[i];
    }   
}