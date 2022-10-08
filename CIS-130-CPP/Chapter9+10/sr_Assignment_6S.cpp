/**
 * Assignment:    Assignment 6S
 *
 * Program Name:  sr_Assignment_6S.cpp
 *
 * Purpose:       The purpose of this program is to allow the user to enter an employee id and check the array if the employee id is found and tell the user if the id is valid or invalid depending on whether its in the array
 *                
 *
 * Author:        Sergio Ruiz        
 *
 * Course:        221CIS130.980
 *
 * Created:       July 20, 2022       
 */

#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort (int array[], int size);
int binarySearch(int array[], int size, int value);

// intialize functions 

int main()
{   
    int accountnumber;
    const int arraysize = 18;
    int result; 
    bool run = true;
    int accountsarray[arraysize] = {5658845, 8080152, 1005231, 4520125, 4562555, 6545231, 7895122, 5552012, 3852085, 8777541, 5050552, 7576651, 8451277, 7825877, 7881200, 1302850, 1250255, 4581002}; 

// variables used througout the program 

    cout << left << "Welcome to Charge Account Validation\n";

    while(run)
    {
        cin >> accountnumber;
        cin.ignore(); 
        cin.clear();

// displays user info about the program then gets the cin for the acocunt number

        if (accountnumber == 9999999)
        {
            run = false;
            cout << left << "Thank you for using the charge account validation.\n";
            return 0;
        }
// if account number is sentinel value it stops the program and loop from running
        selectionSort(accountsarray, arraysize);

        result = binarySearch(accountsarray, arraysize, accountnumber);
// calls to function to sort then search for the employee id
        if (result == -1)
        {
            cout << left << "Account number: " << accountnumber << " is INVALID\n";
        }
        else
        {
            cout << left << "Account number: " << accountnumber << " is valid.\n";
        }
// if states whether number was found and is valid
    }
// end of while loop that runs until the sentinel value is inputed
}
void selectionSort (int array[], int size)
{
    int minIndex, minValue;

    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];

        for (int index = start + 1; index < size; index++)
            {
                if (array[index] < minValue)
                {
                    minValue = array[index];
                    minIndex = index;
                }
            }
        swap(array[minIndex], array[start]);
    }
}
// function that uses the selection sort algorithm method to sort the array to make it easier for the search algorithm to find the accountnumber given by user and needed for binary search
int binarySearch(int array[], int size, int value)
{
    int first =0, last = size-1, middle, position = -1;
    bool found = false;

    while  (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
        {
            last = middle - 1;
        }
        else 
        {
            first = middle + 1;
        }
    }
    return position;
}
// function that searches the array using the binary search algorithm 