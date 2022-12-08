#include "Salaried_Worker.h"
#include <sstream>

Salaried_Worker::Salaried_Worker(string name, int id, double sal) : Employee(name, id)
{
    salary = sal;
}

void Salaried_Worker::setSalary(double sal)
{
    salary = sal;
}

double Salaried_Worker::getSalary()
{
    return salary;
}

ostream& operator<<(ostream& os,Salaried_Worker& worker)
{
    os << worker.to_string();
    return os;
}

istream& operator>>(istream& is, Salaried_Worker& worker)
{
    string name;
    int id;
    double salaryp;

    is >> name >> id >> salaryp;

    worker.setEmpName(name);
    worker.setEmpId(id);
    worker.setSalary(salaryp);

    return is;

}

string Salaried_Worker::to_string()
{
    ostringstream ostr;

    ostr << getEmpName() << "(" << getEmpId() << "), Salary (Wages) = " << getSalary();
    return ostr.str();
}

void Salaried_Worker::getInput()
{


}

double Salaried_Worker::getWages()
{
    return salary;
}
