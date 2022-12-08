#include "Hourly_Worker.h"
#include <sstream>
Hourly_Worker::Hourly_Worker(string name, int id, int h, double rate) : Employee(name, id)
{
    hours = h;
    hourlyRate = rate;
}

void Hourly_Worker::setHours(int h)
{
    hours = h;
}

int Hourly_Worker::getHours()
{
    return hours;
}

void Hourly_Worker::setHourlyRate(double rate)
{
    hourlyRate = rate;
}

double Hourly_Worker::getHourlyRate()
{
    return hourlyRate;
}

int Hourly_Worker::getOTHours()
{
    int otHours = 0;
    if (hours > 40)
    {
        otHours = hours - 40;
    }
    return otHours;
}

double Hourly_Worker::getOTWages()
{
    int otHours = getOTHours();
    return otHours * hourlyRate * 1.5;
}

double Hourly_Worker::getRegularWages()
{
    return hours * hourlyRate;
}

ostream& operator<<(ostream& os,Hourly_Worker& worker)
{
    os << worker.to_string();

    return os;
}

istream& operator>>(istream& is, Hourly_Worker& worker)
{
    string name;
    int id;
    int hours;
    double hourlyp;

    is >> name >> id >> hours >> hourlyp;

    worker.setEmpName(name);
    worker.setEmpId(id);
    worker.setHours(hours);
    worker.setHourlyRate(hourlyp);

    return is;
}

string Hourly_Worker::to_string()
{
    ostringstream ostr;

    ostr << getEmpName() << "(" << getEmpId() << ")\n" << "Hours\t=\t"
        << getHours() << "\nOT hours\t=\t" << getOTHours() << "\nHourly Rate\t=$" <<
        getHourlyRate() << "\nRegular Wages\t=$\t" << getRegularWages() << "\nOT Wages \t=$\t"
        << getOTWages() << "\nTotal Wages\t=$\t" << getWages();
    
    return ostr.str();
}

void Hourly_Worker::getInput() 
{
    string name;
    int id;

    cout << "Enter Name:\n";
    cin >> name;
    setEmpName(name);
    cout << "Enter ID: \n";
    cin >> id;
    setEmpId(id);
    cout << "Eneter Hours (0-60): ";
    cin >> hours;
    cout << "Enter Hourly Rate (0.01 - 60.00) :";
    cin >> hourlyRate;
    return;
}