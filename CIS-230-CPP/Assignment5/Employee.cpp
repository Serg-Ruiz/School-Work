#include "Employee.h"
Employee::Employee(string name, int id)
{
    empName = name;
    empId = id;
}

void Employee::setEmpName(string name)
{
    empName = name;
}

string Employee::getEmpName()
{
    return empName;
}

void Employee::setEmpId(int id)
{
    empId = id;
}

int Employee::getEmpId()
{
    return empId;
}

ostream& operator<<(ostream& os, const Employee& emp)
{
    os << emp.empName << " " << emp.empId;
    return os;
}

istream& operator>>(istream& is, Employee& emp)
{
    is >> emp.empName >> emp.empId;
    return is;
}
