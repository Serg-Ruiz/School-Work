#include "Employee.h"

Employee::Employee(string param_Name, int param_empId)
{
    setEmpName(param_Name);
    setEmpId(param_empId);
}

void Employee::setEmpName(string param_name)
{
    empName = param_name;
}

string Employee::getEmpName()
{
    return empName;
}

void Employee::setEmpId(int param_int)
{
    empId = param_int;
}

int Employee::getEmpId()
{
    return empId;
}