#include "Employee.h"

using namespace std;

class Salaried_Worker : public Employee
{
    private:
        double salary;
    public:
        Salaried_Worker(string _name, int _id, double _salary);
        void setSalary(double _salary);
        double getSalary();

};