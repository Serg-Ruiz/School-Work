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
    ostringstream ostr;

    ostr << "(" << getEmpName() << ")," << " Salary (Wages) = $" << getWages();

    return ostr.str();
}

istream& Salaried_Worker::getInput(istream& my_cin)
{   
    string name;
    int id;
    int salary;
    cout << "Enter Name:";
    my_cin >> name;
    setEmpName(name);
    cout << "\nEnter ID:";
    my_cin >> id;
    setEmpId(id);
    cout << "\nEnter Salary:";
    my_cin >> salary;
    setSalary(salary);

    return my_cin;

}

double Salaried_Worker::getWages()
{
    return getSalary();
}

ostream& operator<<(ostream& my_cout,Salaried_Worker& param)
{
    my_cout << param.to_string();

    return my_cout;
}
istream& operator >> (istream& my_cin,Salaried_Worker& param)
{
    return param.getInput(my_cin);
}