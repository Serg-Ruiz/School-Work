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

};

