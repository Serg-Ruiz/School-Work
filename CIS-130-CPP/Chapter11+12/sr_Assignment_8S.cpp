/**
 * Assignment:    Assignment 8S
 *
 * Program Name:  sr_Assignment_8S.cpp
 *
 * Purpose:       The purpose of this program is reaed the contents of a xml file and find the needed information to display on the console the top 100 billboard songs of 2015
 *                
 *
 * Author:        Sergio Ruiz        
 *
 * Course:        221CIS130.980
 *
 * Created:       July 31, 2021       
 */

#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

string trimArtist(string inStr);
string trim(string inStr);

// intialize functions
int main()
{
    fstream records;
    string artist, title, length, input, buffer;
    int rank = 0;
    string albumstart ="<Album";
    string titlestart ="<Name>";
    string lenghth = "<Length>";
    int findstring;

// variables needed to opoen the program and get input from file into string. 

    records.open("student_files8S/Records.xml", ios::in);

// open the the xml file only allowing input from the file into the program.

    cout << left << "               ************************************************* "<< endl;
    cout << left << "               *** Listing of The Top 100 Pop Hits From 2015 ***" << endl;
    cout << left << "               *************************************************" << endl << endl;
    cout << left << "  #                  Artist                             Title             Length " << endl;
    cout << left << "---  --------------------------------------  ---------------------------  ------" << endl;

// display to user before loop reads file and will display ranking of top 100 songs

    getline(records, input);
    while(!records.eof())
    {
        getline(records, input);

        if ((findstring = input.find(albumstart)) != string::npos)
        {
            rank++;
           cout << right << setw(3) << rank << "  " << left << setw(40) << trimArtist(input);
        }
//  finds artist name and trims it in a function to make it fit in the setw in the cout

        if ((findstring = input.find(titlestart)) != string::npos)
        {
            input.clear();
            getline(records, input);
            cout << left << setw(29) << trim(input);
        }
// finds name then clears line to get next line since it will contain name of album then it is trimmed to make it fit in line and cout to display on console

        if ((findstring = input.find(lenghth)) != string::npos)
        {
            input.clear();
            getline(records, input);
            cout << left << setw(6) << right << trim(input) << endl;
        }    
// gets the length of the sond and displays it to the console
    }

    records.close();
// closes file once everything from the file has been read
    return 0;
}
string trimArtist(string inStr) 
{ 
 // Trim Function – trims leading and trailing white space 
 
    const char *typeOfWhitespaces = " \t\n\r\f\v";
    int myQuote;
    int myQuoteagain;
    char dblQuote = '"';
    string buffer; 
 
    inStr.erase(inStr.find_last_not_of(typeOfWhitespaces) + 1); 
    inStr.erase(0, inStr.find_first_not_of(typeOfWhitespaces)); 

    myQuote = inStr.find(dblQuote);
    buffer = inStr.substr(myQuote + 1);

    buffer.erase(buffer.length() - 2, 2);

//function also removes unneccesary characters from string for artist name and feature
    return buffer;
} 
string trim(string inStr) 
{ 
 // Trim Function – trims leading and trailing white space 
 
    const char *typeOfWhitespaces = " \t\n\r\f\v"; 
    
    inStr.erase(inStr.find_last_not_of(typeOfWhitespaces) + 1); 
    inStr.erase(0, inStr.find_first_not_of(typeOfWhitespaces)); 

    return inStr; 
} 