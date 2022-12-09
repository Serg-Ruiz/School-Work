#include <iostream>
using namespace std;

#include "Linked_List_Employees.h"

int main()
{
	int arr_int[] = { 456  , 789, 145, 986, 367 };

	string arr_str[] = { "pam" , "maya", "dave", "john", "tim" };

	Linked_List_Employees my_employees;
	for (int i = 0; i < 5; i++)
		my_employees.append(arr_int[i], arr_str[i]);

	cout << "my_employees after appending data:\n" << my_employees;

	my_employees.insert_at_start(906, "amy");
	cout << "my_employees after inserting data:\n" << my_employees;

	int arr_ids_to_remove[] = { 986, 100 };
	for (auto one_id : arr_ids_to_remove)
		my_employees.remove(one_id);
	cout << "my_employees after removing ids 986, 100 :\n" << my_employees;

	string arr_names_to_remove[] = { "pam", "steve" };
	for (auto one_name : arr_names_to_remove)
		my_employees.remove(one_name);
	cout << "my_employees after removing names pam, steve :\n" << my_employees;

	return 0;
}