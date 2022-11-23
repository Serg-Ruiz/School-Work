#include "Employee.h"

Employee::Employee(string param_Name, int param_empId)
{
    setEmpName(param_Name);
    setEmpId(param_empId);
}

void Employee::setEmpName(string param)
{
    param = empName;
}

string Employee::getEmpName()
{
    return empName;
}

void Employee::setEmpId(int param)
{
    param = empId;
}

int Employee::getEmpId()
{
    return empId;
}

istream& Employee::getInput(istream&)
{

}

double Employee::getWages()
{
    
}

ostream& operator<<(ostream& my_cout, const Employee& param)
{
    my_cout << param.to_string();
    
    return my_cout;

}
istream& operator >> (istream& my_cin, const Employee& param)
{
    my_cin >> param.empName;
    my_cin >> param.empId;

    return my_cin;
}