#include <iostream>
#include <string>
using namespace std;
#include "Assignment6_Template.h"

int main()
{
	float arr_float[] = { -78.5f, -98.2f };
	int arr_int[] = { 2, 1, 5 };
	Assignment6_Template<int> test_obj1;
	Assignment6_Template<float> test_obj2(arr_float, 2);
	Assignment6_Template<int> test_obj3(arr_int, 3);


	cout << "test_obj1 details\n" << test_obj1 << "\n\n";
	cout << "test_obj2 details\n" << test_obj2 << "\n\n";
	cout << "test_obj3 details\n" << test_obj3 << endl;
	return 0;
}