#include "Employee.h"

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

string Employee::getEmpName(void)
{
	return empName;
}


int Employee::getEmpId(void)
{
	return empId;
}

string Employee::to_string()
{

}

ostream& operator << (ostream& my_cout, const Employee& obj)
{
	
}
