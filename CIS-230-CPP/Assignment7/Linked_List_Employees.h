#include "Employee.h"
class Linked_List_Employees
{
    private:
    struct one_node* head;
    int size;
    public: 
    ~Linked_List_Employees();
    void append(int _id, string _name);
    int getSize();
    void insert_at_start(int _id, string _name);
    Linked_List_Employees();
    void remove(int _number);
    void remove(string _name);
    string to_string();

    struct one_node
    {
        Employee employee;
        one_node* next;
        one_node(int _id, string _name, one_node* _next = nullptr)
        {
            employee.setEmpName(_name);
            employee.setEmpId(_id);
            next = _next;
        }
    };
};