#include "Hourly_Worker.h"
using namespace std;

Hourly_Worker::Hourly_Worker(string _name, int _empId, int _hours, double _Rate)
    :Employee(_name, _empId)
{
    setEmpName(_name);
    setEmpId(_empId);
    setHours(_hours);
    setHourlyRate(_Rate);
}

 void Hourly_Worker::setHours(int _hours)
 {
    if (_hours > 40)
    {
        hours = 40;
    }
    else
    {
        _hours = hours;
    }
 }

 int Hourly_Worker::getHours()
 {
    return hours + getOTHours();
 }

void Hourly_Worker::setHourlyRate(double _hourlyRate)
{
    hourlyRate = _hourlyRate;
}

double Hourly_Worker::getHourlyRate()
{
    return hourlyRate;
}

int Hourly_Worker::getOTHours()
{
    int otHours;

    if (getHours() > 40)
    {
        otHours = getHours() - 40;
    }
    else
    {
        otHours = 0;
    }
    return otHours;
}

double Hourly_Worker::getOTWages()
{
    double otPay = getHourlyRate() * 1.5;

    return otPay * getOTHours();
}

double Hourly_Worker::getRegularWages()
{
    return getHourlyRate() * getHours();
}

string Hourly_Worker::to_string()
{
    ostringstream ostr;

    ostr << "maya (" << getEmpId() << ")\nHours = " << getHours() <<
        "\nOT Hours = " << getOTHours() << "\nHourly Rate = $" << getHourlyRate()
        << "\nRegular Wages = $" << getRegularWages() << "\nOT Wages = $" << getOTWages()
        << "Total Wages = $" << getWages();

    return ostr.str();
}

istream& Hourly_Worker::getInput(istream& my_cin)
{
    string name;
    int id;
    int hours;
    double hourly_rate;

    cout << "Enter Name:";
    my_cin >> name;
    setEmpName(name);
    cout << "\nEnter ID:";
    my_cin >> id;
    setEmpId(id);
    cout << "\nEnter Hours:";
    my_cin >> hours;
    setHours(hours);
    cout << "\nEnter Hourly Rate (0.01- 60.00) :";
    my_cin >> hourly_rate;
    setHourlyRate(hourly_rate);

    return my_cin;
    
}

double Hourly_Worker::getWages()
{
    return getRegularWages() + getOTWages();
}

ostream& operator<<(ostream& my_cout,Hourly_Worker& param)
{
    my_cout << param.to_string();

    return my_cout;
}
istream& operator >> (istream& my_cin,Hourly_Worker& param)
{
    return param.getInput(my_cin);
}