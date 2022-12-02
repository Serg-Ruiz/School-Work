#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
private:
	int empId;
	string empName;

public:
	Employee(int _empId = 99, string _empName = "--");

	void setEmpId(int _empId);
	void setEmpName(string _empName);

	int getEmpId(void);
	string getEmpName(void);

	string to_string();
	friend ostream& operator <<(ostream& my_cout, const Employee& obj);
};
