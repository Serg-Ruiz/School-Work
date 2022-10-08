#include "PersonName.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <string>
using namespace std;

void print_obj(const PersonName& param);

int main () 
{
	int numOfStudents;
	string firstName;
	string lastName;
	int array_index = 0;

	do
	{
		cout << "How Many Students are there? (1-5)\n";
		cin >> numOfStudents;

	} while (numOfStudents < 1 || numOfStudents > 5);

	PersonName* ptr_arr = new PersonName[numOfStudents];

	for (int count = 1; count <= numOfStudents; count++)
	{
		cout << "Entering data for name #";
		cout << count;
		cout << endl;
		cout << "Enter first name :\n";
		cin >> firstName;
		ptr_arr[array_index].setFi_name(firstName);
		cout << "Enter last name :\n";
		cin >> lastName;
		ptr_arr[array_index].setLa_name(lastName);
		array_index++;
	}


	for (int i=0; i < numOfStudents;i++)
	{
		print_obj(ptr_arr[i]);
	}

	delete[] new PersonName;

	return 0;
}
void print_obj(const PersonName& param)
{
		cout << param.to_string() << endl;
}