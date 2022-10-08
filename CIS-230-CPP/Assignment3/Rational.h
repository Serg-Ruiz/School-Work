#pragma once
#include<iostream>
#include <iomanip>
#include <sstream>
using namespace std;
class Rational 
{
private:

	int denum;
	int numer;
	 
public:

	Rational(int = 0, int =1);

	Rational addition(const Rational&);
	Rational subtract(const Rational&);
	Rational multiply(const Rational&);
	Rational divide(const Rational&);


	Rational operator + (const Rational&);
	Rational operator - (const Rational&);
	Rational operator * (const Rational&);
	Rational operator / (const Rational&);

	
	friend bool operator==(const Rational&, const Rational&);
	friend bool operator<=(const Rational&, const Rational&);
	friend bool operator>=(const Rational&, const Rational&);
	friend bool operator<(const Rational&, const Rational&);
	friend bool operator>(const Rational&, const Rational&);
	friend istream& operator >> (istream& input,Rational& obj);
	friend ostream& operator << (ostream& output,Rational& obj);

};