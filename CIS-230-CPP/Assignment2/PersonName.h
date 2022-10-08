#pragma once
#include <iostream>
#include <string>
using namespace std;

class PersonName
{

private:
	string fi_name, la_name;
	string strip(string param);
	string changeCase(string);
public:
	PersonName(string _fi_name = "-n/a-", string _la_name = "-n/a-");
	void setFi_name(string param);
	void setLa_name(string param);
	string getMailName() const;
	string getDirectoryName() const;
	string to_string() const;
};

