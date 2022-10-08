#include <iostream>
#include <string>
using namespace std;
#include "PersonNameFileCreator.h"
#include "PersonName.h"
int main()
{
    string arr_names[] = { "Adam Burke", "Madeline Kramer", "Scott Gardner",
        "Tonya Lopez", "Christopher Hamilton", "Andrew Mitchell", "Lori Smith" };

    PersonNameFileCreator fil_names("names.txt");

    for (auto one_name : arr_names)
    {
        string fname, lname;
        
        
        fname = one_name.substr(0, one_name.find_first_of(' '));
        lname = one_name.substr(one_name.find_first_of(' '), one_name.size() - one_name.find_first_of(' '));

        PersonName onePerson(fname, lname);
        fil_names.write_to_file(onePerson);
    }

    return 0;
}