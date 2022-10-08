#include "Rational.h"
#include <iostream>
#include <iomanip>
#include <sstream>

Rational::Rational(int _numer, int _denum) 
{
	numer = _numer;
	denum = _denum;
}
Rational Rational::addition(const Rational& rightFr) 
{
	int numerator = (numer * rightFr.denum) + (rightFr.numer * denum);
	int denominator = denum * rightFr.denum;
	Rational total(numerator, denominator);
	return total;
}
Rational Rational::subtract(const Rational& rightFr)
{ 
	int numerator = (numer * rightFr.denum) - (rightFr.numer * denum);
	int denominator = denum * rightFr.denum;
	Rational total(numerator, denominator);
	return total;
}
Rational Rational::multiply(const Rational& rightFr)
{ 
	int numerator = (numer * rightFr.numer);
	int denominator = denum * rightFr.denum;

	Rational total(numerator, denominator);

	return total;
}
Rational Rational::divide(const Rational& rightFr)
{ 
	int numerator = numer * rightFr.denum;
	int denominator = denum * rightFr.numer;

	Rational total(numerator, denominator);

	return total;
}
Rational Rational::operator + (const Rational& r) 
{
	int numerator = (numer * r.denum) + (r.numer * denum);
	int denominator = denum * r.denum;
	Rational total(numerator, denominator);
	return total;
}
Rational Rational::operator - (const Rational& r) 
{
	int numerator = (numer * r.denum) - (r.numer * denum);
	int denominator = denum * r.denum;
	Rational total(numerator, denominator);
	return total;
}
Rational Rational::operator * (const Rational& r) 
{
	int numerator = (numer * r.numer);
	int denominator = denum * r.denum;
	Rational total(numerator, denominator);
	return total;
}
Rational Rational::operator / (const Rational& r) 
{

	int numerator = numer * r.denum;
	int denominator = denum * r.numer;

	Rational total(numerator, denominator);
	return total;
}
bool operator==(const Rational& lhs, const Rational& rhs)
{
	if (lhs.numer == rhs.numer && lhs.denum == rhs.denum)
		return true;
	else
		return false;
}

bool operator>=(const Rational& lhs, const Rational& rhs)
{
	if (lhs.numer >= rhs.numer && lhs.denum >= rhs.denum)
		return true;
	else
		return false;
}
bool operator<=(const Rational& lhs, const Rational& rhs)
{
	if (lhs.numer <= rhs.numer && lhs.denum <= rhs.denum)
		return true;
	else
		return false;
}
bool operator>(const Rational& lhs, const Rational& rhs)
{
	if (lhs.numer > rhs.numer && lhs.denum > rhs.denum)
		return true;
	else
		return false;
}
bool operator<(const Rational& lhs, const Rational& rhs)
{
	if (lhs.numer < rhs.numer && lhs.denum < rhs.denum)
		return true;
	else
		return false;
}
istream& operator>>(istream& input, Rational& obj)
{

	input >> obj.numer;
	input >> obj.denum;

	if (obj.denum <= 0)
	{
		obj.denum = 1;
		cout << "Changing the denominator to 1\n";
	}

	return input;
}

ostream& operator<<(ostream& output, Rational& obj)
{
	output << fixed << setprecision(2) << (double)obj.numer / obj.denum;

	return output;
}