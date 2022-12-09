#pragma once
#include <sstream>
#include "Employee.h"

class Linked_List_Employees
{
private:
    int size;
    struct one_node *head;


public:

    ~Linked_List_Employees();
    void append(int _id, string _name);
    int getSize();
    void insert_at_start(int _id, string _name);
    Linked_List_Employees();
    void remove(int _number);
    void remove(string _name);
    string to_string() const;

    friend ostream& operator<<(ostream& out, const Linked_List_Employees& list);
};

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