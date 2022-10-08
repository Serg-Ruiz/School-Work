/**
 * Assignment:    Assignment 2S
 *
 * Program Name:  sr_Assignment_2S.cpp
 *
 * Purpose:       The purpose of this program is take input from the user and then display it in a certain format to make a survey for the user.
 *                The program will also calculate the cost of pizza from the amount the user is willing to pay. Program will also calculate tax and total 
 *                cost of the pizza tax included.
 * 
 *                
 *
 * Author:        Sergio Ruiz
 *
 * Course:        221CIS130.980
 *
 * Created:       June 16, 2022
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    string favmusictype;
    string favmusicgroup;
    string petname;
    string birthcity;
    string favsport;
    string favsocmedia;
    string numofsiblings;
    string favcar;
    string favcolor;
    string favfood;
    float costofpizza;
    const float tax = (7.75/100);
    
// strings and float that will hold user input and tax percentage for calculation later

    cout << "Question: What is your first and last name?" << endl;

        getline(cin, name);

    cout << "Question: What type of music do you enjoy?" << endl;

        getline(cin, favmusictype);

    cout << "Question: Who is your favorite musical group?" << endl;

        getline(cin, favmusicgroup);

    cout << "Question: What is your pets name (enter the name or none)?" << endl;

        getline(cin, petname);

    cout << "Question: What city were you born?" << endl;

        getline(cin, birthcity);

    cout << "Question: What is your favorite sport?" << endl;

        getline(cin, favsport);

    cout << "Question: What is your favorite social media?" << endl;

        getline(cin, favsocmedia);

    cout << "Question: How many brothers and sisters do you have?" << endl;

        getline(cin, numofsiblings);

    cout << "Question: What is your favorite car? " << endl;

        getline(cin, favcar);

    cout << "Question: What is your favorite color? " << endl;

        getline(cin, favcolor);

    cout << "Question: What is your favorite food? " << endl;

        getline(cin, favfood);

    cout << "Question: If you order pizza, about how much would you pay before taxes?" << endl;
            
        cin >> costofpizza;

// Program asking questions for the user and inputs being assinged to a string gets whole line to avoid confusion with cities with spaces names food ect...

    cout << endl;

    cout << left << "Welcome to Your Favorite Survey Program " << endl;

    cout << endl;

    cout << left <<  "Today we surveyed " << name << ". Here are the results:" << endl;
        
    cout << endl;

    cout << left << " 1. Favorite Music:   " << favmusictype << endl;
    cout << left << " 2. Favorite Group:   " << favmusicgroup << endl;
    cout << left << " 3. Pets Name:        " << petname << endl;
    cout << left << " 4. Birth City:       " << birthcity << endl;
    cout << left << " 5. Favorite Sport:   " << favsport << endl;
    cout << left << " 6. Favorite Media:   " << favsocmedia << endl;
    cout << left << " 7. Total Siblings:   " << numofsiblings << endl;
    cout << left << " 8. Favorite Car:     " << favcar << endl;
    cout << left << " 9. Favorite Color:   " << favcolor << endl;
    cout << left << "10. Favorite Food:    " << favfood << endl;
    cout << endl;
    cout << left << "11. Pizza Cost:       $" << setw(15) << right << costofpizza << endl;
    cout << left << "     State Tax:       $" << setw(15) << right << fixed << setprecision(2) << costofpizza * tax  << endl;
    cout << left << "                       ---------------" << endl;
    cout << left << "   Pizza Total:       $" << setw(15) << right << fixed << setprecision(2) << tax * costofpizza + costofpizza << endl;

// Displays the information from the survey and is formated using left, right, and widths for text and percision for decimals 

return 0;
}
