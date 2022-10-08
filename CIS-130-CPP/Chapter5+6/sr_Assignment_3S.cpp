/**
 * Assignment:    Assignment 3S
 *
 * Program Name:  sr_Assignment_3S.cpp
 *
 * Purpose:       The purpose of this program is ask the user how many amount of differnt girl scout cookies that want to order collect their information to dislay a reciept with the total and each amount of cookie ordred displayed
 *                the program then writes all the information into a text file.
 *                
 *
 * Author:        Sergio Ruiz
 *
 * Course:        221CIS130.980
 *
 * Created:       June 29, 2022
 */

#include <iostream>
#include <chrono>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
int i = 1;
ofstream myfile;    
myfile.open ("sr_orders.txt");

// open file nad problem where text in file keep being erased after look this fixed it int variable for while do statement to make sure program keeps repeating until user name is q

do{
   int ordernum;
   string custname;
   string custaddres;
   string custmailinfo;
   int thinmint;
   int lemonups;
   int lemonades;
   int samoas;
   int tagalongs;
   int dosidos;
   int trefoils;
   int thankalot;
   int toffeetastic;
   int caramelchocolatechip;
   std::time_t ct = std::time(0);
   char* cc = ctime(&ct);
   double GLOBAL_CONSTANT_PRICE = 5.00;

// variables that will be used througout the main function

    cout << left << "***********************************************" << endl;
    cout << left << "*** Welcome to Girl Scout Cookie Order Form ***" << endl;
    cout << left << "***********************************************" << endl;
    cout << endl;
    cout << left << "We promise to deliver excellent cookies to your doorstep." << endl;
    cout << endl;
// display information about company before asking user for orders

   cout << left << "Order Number: " << endl;
      
      cin >> ordernum;
      cin.ignore(); 
      cin.clear();

   cout << left << "Enter the customers first and last name (or q to quit): " << endl;

      getline(cin, custname);

      if (custname == "q")
      {
         return 0;
      }

   cout << left << "Enter the " << custname << "'s address:  " << endl;

      getline(cin, custaddres);

   cout << left << "Enter the " << custname << " 's city, state and zip code: " << endl;

      getline(cin,custmailinfo);

   cout << endl; 

// cout to display text to user and getline to recieve the information from the user

   cout << left << "Enter the number of Thin Mints (0-10): " << endl;
      
      cin >> thinmint;
      cin.ignore(); 
      cin.clear();
   
         while (thinmint > 10 || thinmint < 0  )
         {
            cout << left << "Enter the number of Thin Mints (0-10): " << endl;
            cin >> thinmint;
            cin.ignore(); 
            cin.clear();
         }
   
   cout << left << "Enter the number of Lemon-Ups (0-10): " << endl;

      cin >> lemonups;
      cin.ignore(); 
      cin.clear();

         while (lemonups > 10 || lemonups < 0  )
         {
            cout << left << "Enter the number of Lemon-Ups (0-10): " << endl;
            cin >> lemonups;
            cin.ignore(); 
            cin.clear();
         }

   cout << left << "Enter the number of Lemonades (0-10): " << endl;

      cin >> lemonades;
      cin.ignore(); 
      cin.clear();

         while (lemonades > 10 || lemonades < 0  )
         {
            cout << left << "Enter the number of Lemonades (0-10): " << endl;
            cin >> lemonades;
            cin.ignore(); 
            cin.clear();
         }

   cout << left << "Enter the number of Samoas (0-10): " << endl;

      cin >> samoas;
      cin.ignore(); 
      cin.clear();

         while (samoas > 10 || samoas < 0  )
         {
            cout << left << "Enter the number of Samoas (0-10): " << endl;
            cin >> samoas;
            cin.ignore(); 
            cin.clear();
         }

   cout << left << "Enter the number of Tagalongs (0-10): " << endl;

      cin >> tagalongs;
      cin.ignore(); 
      cin.clear();
   
         while (tagalongs > 10 || tagalongs < 0  )
         {
            cout << left << "Enter the number of Tagalongs (0-10): " << endl;
            cin >> tagalongs;
            cin.ignore(); 
            cin.clear();
         }

   cout << left << "Enter the number of Do-si-dos (0-10): " << endl;

      cin >> dosidos;
      cin.ignore(); 
      cin.clear();

         while (dosidos > 10 || dosidos < 0  )
         {
            cout << left << "Enter the number of Do-si-dos (0-10): " << endl;
            cin >> dosidos;
            cin.ignore(); 
            cin.clear();
         }

   cout << left << "Enter the number of Trefoils (0-10): " << endl;

      cin >> trefoils;
      cin.ignore(); 
      cin.clear();

         while (trefoils > 10 || trefoils < 0  )
         {
            cout << left << "Enter the number of Trefoils (0-10): " << endl;
            cin >> dosidos;
            cin.ignore(); 
            cin.clear();
         } 

   cout << left << "Enter the number of Thanks-A-Lot (0-10): " << endl;

      cin >> thankalot;
      cin.ignore();
      cin.clear();

         while (thankalot > 10 || thankalot < 0 ) 
         {
            cout << left << "Enter the number of Thanks-A-Lot (0-10): " << endl;
            cin >> thankalot;
            cin.ignore();
            cin.clear();
         }  

   cout << left << "Enter the number of Toffee-tastic (0-10): " << endl;

      cin >> toffeetastic;
      cin.ignore();
      cin.clear();   

         while (toffeetastic > 10 || toffeetastic < 0)
         {
            cout << left << "Enter the number of Toffee-tastic (0-10): " << endl;
            cin >> toffeetastic;
            cin.ignore();
            cin.clear(); 
         }

   cout << left << "Enter the number of Caramel Chocolate Chip (0-10): " << endl;\

      cin >> caramelchocolatechip;
      cin.ignore();
      cin.clear(); 

         while (caramelchocolatechip > 10 || caramelchocolatechip < 0)
         {
            cout << left << "Enter the number of Caramel Chocolate Chip (0-10): " << endl;\
            cin >> caramelchocolatechip;
            cin.ignore();
            cin.clear();   
         }
  
// cin to get int and number of cookies orders and while loops to check and make sure amount entered is between 0-10 and if not will repeat message
   if (ordernum > -1)
      {
         myfile << left << "=================================\n=== Girl Scout Cookie Invoice ===\n================================= \n" << endl << left << cc;
         myfile << endl << left << custname << endl << left << custaddres << endl << left << custmailinfo << endl << endl << left << "Order Number: " << ordernum << endl;
         myfile << endl << left << "Dear " << custname << ":" << endl << endl << left << "Your Girl Scout Cookie order has arrived.\nYour order consists of the following:" << endl;
         myfile << left << "-------------------------------------------------\n|        Cookie          | Quantity |   Cost    |\n-------------------------------------------------" << endl;
         myfile << left << "| " << setw(22) << "Thin Mints" << " | " << setw(8) << right << thinmint << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * thinmint << " |" << endl;
         myfile << left << "| " << setw(22) << "Lemon-Up" << " | " << setw(8) << right << lemonups << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * lemonups << " |" << endl;
         myfile << left << "| " << setw(22) << "Lemonades" << " | " << setw(8) << right << lemonades << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * lemonades << " |" << endl;
         myfile << left << "| " << setw(22) << "Samoas" << " | " << setw(8) << right << samoas << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * samoas << " |" << endl;
         myfile << left << "| " << setw(22) << "Tagalongs" << " | " << setw(8) << right << tagalongs << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * tagalongs << " |" << endl;
         myfile << left << "| " << setw(22) << "Do-si-dos" << " | " << setw(8) << right << dosidos << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * dosidos << " |" << endl;
         myfile << left << "| " << setw(22) << "Trefoils" << " | " << setw(8) << right << trefoils << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * trefoils << " |" << endl;
         myfile << left << "| " << setw(22) << "Thanks-A-Lot" << " | " << setw(8) << right << thankalot << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * thankalot << " |" << endl;
         myfile << left << "| " << setw(22) << "Toffee-tastic" << " | " << setw(8) << right << toffeetastic << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * toffeetastic << " |" << endl;
         myfile << left << "| " << setw(22) << "Caramel Chocolate Chip" << " | " << setw(8) << right << caramelchocolatechip << " | " << "$" << setw(8) << right << fixed << setprecision(2) << GLOBAL_CONSTANT_PRICE * caramelchocolatechip << " |" << endl;
         myfile << "-------------------------------------------------" << endl;
         myfile << left << "|                       Total Due:  | $" << setw(8) << right << fixed << setprecision(2) << (thinmint + lemonups + lemonades + samoas + tagalongs + dosidos + trefoils + thankalot + toffeetastic + caramelchocolatechip) * GLOBAL_CONSTANT_PRICE << " |" << endl << "-------------------------------------------------" << endl << endl;
      }
// if statement in while loop that will continue to output to file as long as order number is greater than -1 bunch of formating to make sure output is displayed correctly in the text file    all lines are formated the same it is  just each line is a differnt cookie 
}
while ( i > 0);
myfile.close();  
return 0;
}
