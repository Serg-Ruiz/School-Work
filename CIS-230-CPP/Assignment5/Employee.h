using namespace std;

#include<iostream>
#include <iomanip>
#include <sstream>
#pragma once

class Employee
{
    private:

        string empName;
        int empId;
        
    public: 
        Employee(string param_Name, int param_empId);
        void setEmpName(string param);
        string getEmpName();
        void setEmpId(int param);
        int getEmpId();

        virtual string to_string() = 0;
        virtual istream& getInput(istream&) = 0;
        virtual double getWages() = 0;

        friend ostream& operator << (ostream& my_cout,const Employee& param);
        friend istream& operator >> (istream& my_cin, const Employee& param);
};