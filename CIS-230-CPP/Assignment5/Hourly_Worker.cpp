#include "Hourly_Worker.h"
#include <string>
using namespace std;

Hourly_Worker::Hourly_Worker(string _name, int _empId, int _hours, double _Rate)
{
    setEmpName(_name);
    setEmpId(_empId);
    setHours(_hours);
    setHourlyRate(_Rate);

}

 void Hourly_Worker::setHours(int _hours)
 {
    hours = _hours


    
 }