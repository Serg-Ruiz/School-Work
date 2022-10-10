#include "PersonName.h"

string PersonName::strip(string param)
{
    string return_str = "";
    if (param.length() > 0)
    {
        unsigned first_nonblank;
        first_nonblank = param.find_first_not_of(' ');
        if (first_nonblank >= 0)
        {
            unsigned last_nonblank, num_char;
            last_nonblank = param.find_last_not_of(' ');
            num_char = last_nonblank - first_nonblank + 1;
            return_str = param.substr(first_nonblank, num_char);
        }
    }
    if (return_str == "")
        return_str = "-n/a-";
    return return_str;
}

string PersonName::changeCase(string param)
{
    string return_str = "";
    if (param != "-n/a-")
    {
        return_str = toupper(param[0]);
        for (int i = 1; i < param.length(); i++)
            return_str += tolower(param[i]);
    }
    else
        return_str = "-n/a-";

    return return_str;
}

PersonName::PersonName(string _fi_name, string _la_name)
{
    fi_name = strip(_fi_name);
    la_name = strip(_la_name);
    fi_name = changeCase(fi_name);
    la_name = changeCase(la_name);
}

void PersonName::setFi_name(string param)
{
    fi_name = param;
}

void PersonName::setLa_name(string param)
{
    la_name = param;
}

string PersonName::getMailName() const
{
    return fi_name + " " + la_name;
}

string PersonName::getDirectoryName() const
{
    return la_name + ", " + fi_name;
}

string PersonName::to_string() const
{
    string return_str = "";
    return_str =  "First Name     = " + fi_name + "\n";
    return_str += "Last Name      = " + la_name + "\n";
    return_str += "Mail Name      = " + getMailName() + "\n";
    return_str += "Directory Name = " + getDirectoryName();
    return return_str;
}
