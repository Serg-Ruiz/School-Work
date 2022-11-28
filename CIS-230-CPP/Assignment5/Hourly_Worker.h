#include "Employee.h"

class Hourly_Worker : public Employee
{
    private:
    
        int hours;
        double hourlyRate;
            
    public:

        Hourly_Worker(string _name, int _empId, int _hours, double _Rate);
        void setHours(int _hours);
        int getHours();
        void setHourlyRate(double _hourlyRate);
        double getHourlyRate();
        int getOTHours();
        double getOTWages();
        double getRegularWages();

        virtual string to_string();
        virtual istream& getInput(istream&);
        virtual double getWages();

        friend ostream& operator << (ostream& my_cout,const Hourly_Worker& param);
        friend istream& operator >> (istream& my_cin, const Hourly_Worker& param);
            
};