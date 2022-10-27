#include "Employee.h"

class Hourly_Worker : public Employee
{
    private:
        int hours;
        double hourlyRate;
            
    public:

        Hourly_Worker(string _name, int _hours, int _OTHours, double _Rate);
        void setHours(int _hours);
        int getHours();
        void setHourlyRate(double);
        double getHourlyRate();
        int getOTHours();
        double getOTWages();
        double getRegularWages();
            
};
