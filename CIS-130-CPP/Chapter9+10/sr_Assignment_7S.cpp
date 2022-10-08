/**
 * Assignment:    Assignment 7S
 *
 * Program Name:  sr_Assignment_7S.cpp
 *
 * Purpose:       The purpose of this program is allow the user to enter multiple test scores then calculate the average of the test scores while showing them sorted from smallest to largest
 *                
 *
 * Author:        Sergio Ruiz        
 *
 * Course:        221CIS130.980
 *
 * Created:       July 21, 2022       
 */

#include <iostream>
#include <algorithm>
#include <iomanip>

double average( double array[],int numoftests );
// intialize function
using namespace std;

int main()
{
    int numberoftests;
    double result;
// variables used in program
    cout << left << "Welcome to Find the Average Program\n-----------------------------------\n\nIn this program, you enter test scores for your students\nand will display the scores entered and their average.\n>>> Enter the number of Scores:\n";

    cin >> numberoftests;

    cout << ">>> Enter each of the " << numberoftests << " test scores separated by space:";

    double *grades = new double[numberoftests];
//makes array size of how many tests user inputed
    for (int count=0; count < numberoftests; count++)
    {
        cin >> *(grades + count);
    }
// cin in for loops how many number of test scores and store them in diffrent parts of array
    for (int count =0; count < numberoftests; count++)
    {
        if (*(grades+count) < 0)
        {
            cout<< left << "ERROR: You may not use negative scores. Please restart the program.";
        }
    }
// checks each element and if negative shows error message
    cout << left << "\n======================================\n| The following scores were entered  |\n======================================\n";
    for (int count=0; count < numberoftests; count++)
    {
        cout << *(grades + count) << " ";
    }
// displays the unsorted array 

    sort (grades, grades + numberoftests);

    result = average(grades, numberoftests);
// sorts the array in order and then calls function to assign average of all the test scores to result

    cout << endl << endl << left << "======================================\n| The sorted scores are listed below |\n======================================\n";
    for (int count=0; count < numberoftests; count++)
    {
        cout << *(grades + count) << " ";
    }
    cout << endl << endl << left << "The class average for this test is: " << fixed << setprecision(1) << result;
// displays the array sorted and the average of all the test scores
    return 0;
}
double average(double array[], int numoftests)
{
    double total;
    double average;

    for (int count=0; count < numoftests; count++)
        {
            total = *(array + count) + total;
        }
    
    average = total / numoftests;

    return average;
}
// function that adds each array element to total and then divided by number of test to calculate  the average