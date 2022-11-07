#include "Salaried_Worker.h"

Salaried_Worker::Salaried_Worker(string _name, int _id, double _salary)
{
    setEmpName(_name);
    setEmpId(_id);
    salary = _salary;

}

void Salaried_Worker::setSalary(double _salary)
{
    salary = _salary;

}

double Salaried_Worker::getSalary()
{
    return salary;
}

string Salaried_Worker::to_string()
{

}

istream& Salaried_Worker::getInput(istream&)
{

}

double Salaried_Worker::getWages()
{

}

ostream& operator<<(ostream& my_cout, const Salaried_Worker& param)
{

}
istream& operator >> (istream& my_cin, const Salaried_Worker& param)
{

}