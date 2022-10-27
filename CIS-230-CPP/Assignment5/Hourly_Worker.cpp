#include "Hourly_Worker.h"

Hourly_Worker::Hourly_Worker(string _name, int _hours, int _OTHours, double _Rate)
{
    setEmpName(_name);
    setHours(_hours);
    setHourlyRate(_Rate);
}

void setHours(int _hours)
{
    hours = _hours;
}