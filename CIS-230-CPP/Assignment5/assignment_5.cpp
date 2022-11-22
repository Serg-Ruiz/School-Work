#include <iostream>
#include <memory>
using namespace std;
#include "Hourly_Worker.h"
#include "Salaried_Worker.h"
#include "Employee.h"
int main()
{
    Hourly_Worker hourly_1("maya", 123, 41, 10);
    cout << "hourly_1 after instantiation:\n\t" << hourly_1 << "\n\n";

    cin >> hourly_1;
    cout << "hourly_1 after user input:\n\t" << hourly_1 << "\n\n";

    //-----------------------------------------------------
    Salaried_Worker salaried_1("tim", 875, 150000);
    cout << "salaried_1 after instantiation:\n\t" << salaried_1 << endl;
    return 0;
}