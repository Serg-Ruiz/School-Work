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
    string Hourly = getEmpName() + "(" + getEmpId() + ")\n" + "Hours = " + getHours()
        + "\nOT hours = " + getOTHours() + "\nHourly Rate = $" + getHourlyRate()
        + "\nRegular Wages = $" + getRegularWages() + "\nOT Wages = $" + getOTWages() +
        "\nTotal Wages = $" + getWages();

    return Hourly;
}

istream& Hourly_Worker::getInput(istream&)
{
    string name;
    int id;
    int hours;
    double rate;

    cout << "Enter Name:";
    cin >> name;
    setEmpName(name);

    cout << "Enter ID:";
    cin >> id;
    setEmpId(id);

    cout << "Enter hours (0-60)";
    cin >> hours;
    setHours(hours);

    cout << "Enter Hourly Rate (0.01 - 60.00)";
    cin >> rate;
    setHourlyRate(rate);

    return;
}

double Hourly_Worker::getWages()
{
    return getRegularWages() + getOTWages();
}

ostream& operator<<(ostream& my_cout, const Hourly_Worker& param)
{
    my_cout << param.to_string();
    return my_cout;
}
istream& operator >> (istream& my_cin, const Hourly_Worker& param)
{
    my_cin >> param.empName;
    my_cin >> param.empId;
    my_cin >> param.hours;
    my_cin >> param.hourlyRate;
    return my_cin;
}