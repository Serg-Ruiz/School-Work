#include "Salaried_Worker.h"

Salaried_Worker::Salaried_Worker(string _name, int _id, double _salary)
    :Employee(_name, _id)
{
    setEmpName(_name);
    setEmpId(_id);
    if (salary < 0)
    {
        salary = 0;
    }
    else if (salary < 100000)
    {
        salary = 100000;
    }
    else
    {
        salary = _salary;
    }
}

void Salaried_Worker::setSalary(double _salary)
{
    if (_salary < 0)
    {
        salary = 0;
    }
    if (_salary < 100000)
    {
        salary = 100000;
    }
    else
    {
        salary = _salary;
    }
}

double Salaried_Worker::getSalary()
{
    return salary;
}

string Salaried_Worker::to_string()
{
    string Salaried =  getEmpName() + "(" + getEmpId + "), Salary (Wages) = " + getSalary();

        return;
}

istream& Salaried_Worker::getInput(istream&)
{   
    string name;
    int id;
    double salary;

    cout << "Enter Name:";
    cin >> name;
    setEmpName(name);
    cout << "Enter Id";
    cin >> id;
    setEmpId(id);
    cout << "Enter Salary";
    cin >> salary;
    setSalary(salary);

    return;

}

double Salaried_Worker::getWages()
{
    return getSalary();
}

ostream& operator<<(ostream& my_cout, const Salaried_Worker& param)
{
    my_cout << param.to_string();
    return my_cout;
}
istream& operator >> (istream& my_cin, const Salaried_Worker& param)
{
    my_cin >> param.empName;
    my_cin >> param.empId;
    my_cin >> param.salary;

    return my_cin;
}