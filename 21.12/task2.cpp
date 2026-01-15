#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;
public:
    Employee(string n, double s) : name(n), baseSalary(s) {}
    virtual double calculateSalary() {
        return baseSalary;
    }
    string getName() { return name; }
};

class Manager : public Employee {
    double bonus;
public:
    Manager(string n, double s, double b) : Employee(n, s), bonus(b) {}
    double calculateSalary() override {
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
    double overtimePay;
public:
    Developer(string n, double s, double o) : Employee(n, s), overtimePay(o) {}
    double calculateSalary() override {
        return baseSalary + overtimePay;
    }
};
