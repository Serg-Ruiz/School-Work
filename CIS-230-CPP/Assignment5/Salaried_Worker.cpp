#include "Salaried_Worker.h"

Salaried_Worker::Salaried_Worker(string _name, int id, double _salary)
{
    setEmpName(_name);
    setSalary(_salary);
    setEmpId(id);
}

void Salaried_Worker::setSalary(double _salary)
{
    salary = _salary;
}

double Salaried_Worker::getSalary()
{
    return salary;
}