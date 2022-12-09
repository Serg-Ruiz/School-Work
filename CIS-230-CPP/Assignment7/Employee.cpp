#include "Employee.h"
#include <sstream>

Employee::Employee(int _empId, string _empName)
{
	empId = _empId;
	empName = _empName;
}

void Employee::setEmpId(int _empId)
{
	empId = _empId;
}


void Employee::setEmpName(string _empName)
{
	empName = _empName;
}

string Employee::getEmpName() 
{
	return empName;
}


int Employee::getEmpId()
{
	return empId;
}

string Employee::to_string()
{
	stringstream ss;
	ss << "ID: " << empId << ", Name: " << empName;
	return ss.str();
}

ostream& operator<<(ostream& my_cout,Employee& _employee)
{
	my_cout << _employee.to_string();
	return my_cout;
}
