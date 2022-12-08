#include "Employee.h"

class Hourly_Worker : public Employee
{
private:
    int hours;
    double hourlyRate;

public:
    void setHours(int h);
    int getHours();
    void setHourlyRate(double rate);
    double getHourlyRate();
    int getOTHours();
    double getOTWages();
    double getRegularWages();
    Hourly_Worker(string name, int id, int h, double rate);


    friend ostream& operator<<(ostream& os, Hourly_Worker& worker);
    friend istream& operator>>(istream& is, Hourly_Worker& worker);

    string to_string() override;
    void getInput() override;
    double getWages() override;
};