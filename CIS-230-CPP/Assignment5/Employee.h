#include <string>
using namespace std;
class Employee
{
    private:

        string empName;
        int empId;
        
    public: 

        Employee(string param_Name, int param_empId);
        void setEmpName(string param);
        string getEmpName();
        void setEmpId(int param);
        int getEmpId();

        virtual string to_string();
        virtual istream& getInput(istream&);
        virtual double getWages();

        friend ostream& operator << (ostream& my_cout,const Employee& param);
        friend istream& operator >> (istream& my_cin, const Employee& param);
};

class Hourly_Worker : public Employee
{
    private:
        int hours;
        double hourlyRate;
            
    public:

        Hourly_Worker(string _name, int _hours, int _OTHours, double _Rate);
        void setHours(int _hours);
        int getHours();
        void setHourlyRate(double _hourlyRate);
        double getHourlyRate();
        int getOTHours();
        double getOTWages();
        double getRegularWages();
        string to_string();
        istream& getInput(istream&);
        double getWages();

        friend ostream& operator << (ostream& my_cout,const Hourly_Worker& param);
        friend istream& operator >> (istream& my_cin, const Hourly_Worker& param);
            
};

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
 