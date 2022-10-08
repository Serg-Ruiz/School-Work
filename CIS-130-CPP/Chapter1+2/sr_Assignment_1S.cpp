/**
 * Assignment:    sr_Assignment_1S.cpp
 *
 * Program Name:  citytemp.cpp
 *
 * Purpose:       The purpose of this program is to allow the user to enter a percentage increase in the average high temperature
                  of three cities and display the temperatues before and after the percentage increase. 
 *              
 *
 * Author:        Sergio Ruiz        
 *
 * Course:        221CIS130.980
 *
 * Created:       June 14, 2022
 */

#include <iostream>
using namespace std;
  
   double newyorktemp = 85.00;
   double denvertemp = 88.00;
   double phoenixtemp = 106.00;
   double tempinput; 

// double variables to use in equation and input by user

int main()
{
    cout << "Average High Temperatures" << endl;
    cout << endl;
    cout << "The current high average temperatures are as follows:" << endl;
    cout << "New York  "<< newyorktemp << endl;
    cout << "Denver  " << denvertemp << endl;
    cout << "Phoenix  " << phoenixtemp << endl;
    cout << endl;
    cout << "Enter the percent increase in temperature:" << endl;
    cin >> tempinput; 
    cout << endl;
  
// Using cout to display the current temperatures on the screen before user decides to input percent increase in temperature
   
    cout << "Increasing the temperatures by " << tempinput << "% will result in the following:" << endl;  
    cout << "New York " << (tempinput/100) * newyorktemp + newyorktemp << endl;
    cout << "Denver " << (tempinput/100) * denvertemp + denvertemp << endl;
    cout << "Phoenix " << (tempinput/100) * phoenixtemp + phoenixtemp << endl;
 
 // cout used to display the message on the screen and equation finds out percent of the current temperature to add current teperature and get the new total    

    return 0;
}
