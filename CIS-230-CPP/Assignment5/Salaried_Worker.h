#include "Employee.h"

class Salaried_Worker : public Employee
{
private:
    double salary;

public:
    void setSalary(double sal);
    double getSalary();
    Salaried_Worker(string name, int id, double sal);

    friend ostream& operator<<(ostream& os, Salaried_Worker& worker);
    friend istream& operator>>(istream& is, Salaried_Worker& worker);

    string to_string() override;
    void getInput() override;
    double getWages() override;
};