#pragma once
#include <string>
using namespace std;
class Employee
{
    private:
        string empName;
        int empId;

    public: 
    Employee(string param, int param2);
    void setEmpName(string param);
    string getEmpName();
    void setEmpName(int param);
    int getEmpId();

};