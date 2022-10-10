#include "PersonName.h"
#include <iostream>
#include <memory>
#include <iomanip>
#include <string>
using namespace std;

void print_obj(int size, PersonName ptr_arr[]);

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

	PersonName *ptr_arr = new PersonName[numOfStudents];

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
	
	
	print_obj(numOfStudents, ptr_arr);
	

	delete[] ptr_arr;

	return 0;
}
void print_obj(int size, PersonName ptr_arr[]) 
{	
	for (int i = 0; i < size; i++) 
	{
		cout << ptr_arr[i].to_string() << endl;
	}
}
