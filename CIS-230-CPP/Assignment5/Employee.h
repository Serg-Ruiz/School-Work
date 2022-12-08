#include <iostream>
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H




using namespace std;

class Employee
{
private:
    string empName;
    int empId;

public:
    Employee(string name, int id);
    void setEmpName(string name);
    string getEmpName();
    void setEmpId(int id);
    int getEmpId();

    friend ostream& operator<<(ostream& os, const Employee& emp);
    friend istream& operator>>(istream& is, Employee& emp);

    virtual string to_string() = 0;
    virtual void getInput() = 0;
    virtual double getWages() = 0;
};

#endif
