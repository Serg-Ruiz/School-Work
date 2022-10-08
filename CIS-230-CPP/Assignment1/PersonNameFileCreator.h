#include "PersonName.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>	
#include <iomanip>
using namespace std;

class PersonNameFileCreator
{
    private:
    ofstream fil_data;
    public:
    ~PersonNameFileCreator ();
    PersonNameFileCreator(string _filename);
    void write_to_file (const PersonName & param_obj);
}; 

