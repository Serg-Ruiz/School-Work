/**
 * Assignment:    Assignment 4S
 *
 * Program Name:  sr_Assignment_4S.cpp
 *
 * Purpose:       The purpose of this program is to allow the user to enter a phone number with letters and turn the letters into their number equivalent in a number pad from a cellphone
 *                
 *
 * Author:        Sergio Ruiz        
 *
 * Course:        221CIS130.980
 *
 * Created:       July 6, 2022   
 */

#include <iostream> 
#include <algorithm>
#include <string>  
using namespace std;

string uppercase(string);

int main()
{
string phonenumber;
string newnum;
string digits = "23456789";
bool t = true;

cout << left << "Welcome to the Alphabetic Telephone Number Translator\n\nThis program will translate phone numbers with alphabetic\nto its numeric equivalent.\n\n";

    while (t)
        {    
            do
                {
                    cout << left << "Enter the telephone number in the format XXX-XXX-XXXX (x or X to exit):\n";
                        getline(cin, phonenumber);
                            if(phonenumber == "x" || phonenumber== "X")
                                {
                                    return 0;
                                }
                            
                }
                while (phonenumber.length() != 12 || phonenumber.find("-",0) != 3|| phonenumber.find("-",4) != 7);

    // do while loop to check that the user inputs a string with 12 characterss and dashes are in the right place
            for (int i=0; i < phonenumber.length(); i++)
                {
                    phonenumber[i] = toupper(phonenumber[i]);
                }

            string uppercase(phonenumber);            

            newnum = phonenumber;

    // call function to turn the letters to all uppercase and sets the new number to phone number before the for loop begins and changes letters to number

            for (int i=0; i < phonenumber.length(); i++)
                {   
                        if (phonenumber[i] == 'A' || phonenumber[i] == 'B' || phonenumber[i] == 'C')
                                {
                                    phonenumber[i] = digits[0];
                                }
                        if (phonenumber[i] == 'D' || phonenumber[i] == 'E' || phonenumber[i] == 'F')
                                {
                                    phonenumber[i] = digits[1];
                                }
                        if (phonenumber[i] == 'G' || phonenumber[i] == 'H' || phonenumber[i] == 'I')
                                {
                                    phonenumber[i] = digits[2];
                                }
                        if (phonenumber[i] == 'J' || phonenumber[i] == 'K' || phonenumber[i] == 'L')
                                {
                                    phonenumber[i] = digits[3];
                                }
                        if (phonenumber[i] == 'M' || phonenumber[i] == 'N' || phonenumber[i] == 'O')
                                {
                                    phonenumber[i] = digits[4];
                                }
                        if (phonenumber[i] == 'P' || phonenumber[i] == 'Q' || phonenumber[i] == 'R' || phonenumber[i] == 'S')
                                {
                                    phonenumber[i] = digits[5];
                                }
                        if (phonenumber[i] == 'T' || phonenumber[i] == 'U' || phonenumber[i] == 'V')
                                {
                                    phonenumber[i] = digits[6];
                                }
                        if (phonenumber[i] == 'W' || phonenumber[i] == 'X' || phonenumber[i] == 'Y' || phonenumber[i] == 'Z')
                                {
                                    phonenumber[i] = digits[7];
                                }               
                }
    // for loop going through all the posistions in phonenumber then repacing if there is a letter in that posistion

            cout << left << "The phone number [" << newnum << "] is " << phonenumber << endl;
        }
      
// display the new phonenumber to the user 
    return 0;
}
// function to turn string to upercase letters
string uppercase (string phonenumber)
{
    for (int i=0; i < phonenumber.length(); i++)
        {
            phonenumber[i] = toupper(phonenumber[i]);
        }
    return phonenumber; 
}