#include <string>
using namespace std;
class Employee
{
    private:

        string empName;
        int empId;
        
    public: 

        Employee(string param_Name, int param_empId);
        void setEmpName(string param);
        string getEmpName();
        void setEmpId(int param);
        int getEmpId();

        virtual string to_string();
        virtual istream& getInput(istream&);
        virtual double getWages();

        friend ostream& operator << (ostream& my_cout,const Employee& param);
        friend istream& operator >> (istream& my_cin, const Employee& param);
};