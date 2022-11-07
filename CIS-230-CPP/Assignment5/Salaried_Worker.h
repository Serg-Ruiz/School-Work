#include "Employee.h"
class Salaried_Worker : public Employee
{
    private:
        double salary;
    public:
        Salaried_Worker(string _name, int _id, double _salary);
        void setSalary(double _salary);
        double getSalary();
        istream& getInput(istream& my_cin);
        string to_string();
        double getWages();

        friend ostream& operator << (ostream& my_cout,const Salaried_Worker& param);
        friend istream& operator >> (istream& my_cin, const Salaried_Worker& param);

};
 