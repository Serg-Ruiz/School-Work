#include "Asn4_String.h"

Asn4_String::Asn4_String(string param)
{
    set_string(param);
}

//Function that overloads the stream insertion operator
//{
	//Complete it!
//}

ostream& operator<<(ostream& output,Asn4_String& obj)
{
    string message;

    if (obj.is_palindrome(obj.get_string()))
        message = " (Is a palindrome)";
    else
        message = " (Not a palindrome)";

    output << "class_string = " << obj.class_string << message;

    return output; 
}

void Asn4_String::set_string(string param)
{
    class_string = param;
}

string Asn4_String::get_string() const
{
    return class_string;
}

bool Asn4_String::is_palindrome(string param) const
{
    return check_pd(param, 0, param.size() - 1);
}

bool Asn4_String::check_pd(string param, int start_index, int end_index) const
{
	//Complete it!
    for (int i=0; i< end_index; i++)
    {
        if (param[i] != param[param.length() - i - 1])
            return false;
    }
    return true;

}
