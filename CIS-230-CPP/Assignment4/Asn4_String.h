#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Asn4_String
{
private:
	string class_string;
	bool check_pd(string param, int _start, int _end) const;
public:
	Asn4_String(string = "-");
	void set_string(string param);
	string get_string() const;
	bool is_palindrome(string) const;

	//friend:
	//create function header for friend function that
	//overloads the stream insertion operator
friend ostream& operator << (ostream& output,Asn4_String& obj);


};

