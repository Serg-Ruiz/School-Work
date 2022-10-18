#include <iostream>
#include <string>
#include <cctype>
using namespace std;
#include "Asn4_String.h"
string get_lowercase_version(const string &param);
string get_only_alpha(const string& param);
int main()
{
    string arr_test[] = {
        "Able was I ere I saw Elba",
        "Madam Im Adam",
		"Madam I'm Adam",
        "Who said this",
        "geaeg" , "GeAag", "A", "Aa",""};

    for (auto one_test : arr_test)
    {
        Asn4_String test_str(one_test);
        cout << test_str << endl;

		string test_str_lc = get_lowercase_version(one_test);
		test_str.set_string(test_str_lc);
		cout << "Lower case version of the string :" << test_str << endl;

		string test_str_only_alpha = get_only_alpha(one_test);
		test_str.set_string(test_str_only_alpha);
		cout << "String with only alphabets :" << test_str << endl;

		cout << "--------------------------------\n";
    }
    return 0;
}

string get_only_alpha(const string& param)
{
         //Complete code 
    string ret_val = param;

    transform(ret_val.begin(), ret_val.end(), ret_val.begin(), ::tolower);

    int count =0;

    for (int i=0; i < ret_val[i]; i++)
            if (ret_val[i] != ' ')
            ret_val[count++] = ret_val[i]; 
                                  
    ret_val[count] = '\0';

	return ret_val;
}

string get_lowercase_version(const string &param)
{
    string return_value = param;
    //Complete code 

    transform(return_value.begin(), return_value.end(), return_value.begin(), ::tolower);

	return return_value;
}


