#include "Linked_List_Employees.h"
Linked_List_Employees::~Linked_List_Employees()
{
    one_node* curr = head;
    while (curr)
    {
        one_node* next = curr->next;
        delete curr;
        curr = next;
    }
    head = nullptr;
    size = 0;
}

void Linked_List_Employees::append(int _id, string _name)
{
    if (head == nullptr)
    {
        head = new one_node(_id, _name);
    }
    else
    {
        one_node* curr = head;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = new one_node(_id, _name);
    }
    size++;
}

int Linked_List_Employees::getSize()
{
    return size;
}

void Linked_List_Employees::insert_at_start(int _id, string _name)
{
    one_node* new_node = new one_node(_id, _name, head);
    head = new_node;
    size++;
}

Linked_List_Employees::Linked_List_Employees()
{
    head = nullptr;
    size = 0;
}

void Linked_List_Employees::remove(int _number)
{
    one_node* curr = head;
    one_node* prev = nullptr;
    while (curr)
    {
        if (curr->employee.getEmpId() == _number)
        {
            if (prev)
            {
                prev->next = curr->next;
            }
            else
            {
                head = curr->next;
            }
            delete curr;
            size--;
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "No employee with id: " << _number << endl;

}

void Linked_List_Employees::remove(string _name)
{
    one_node* curr = head;
    one_node* prev = nullptr;

    while (curr)
    {
        if (curr->employee.getEmpName() == _name)
        {
            if (prev)
            {
                prev->next = curr->next;
            }
            else
            {
                head = curr->next;
            }
            delete curr;
            size--;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout << "No employee with name: " << _name <<endl;
}

string Linked_List_Employees::to_string() const
{
    string result = "";
    one_node* curr = head;
    ostringstream ostr;
    int count = 1;

    ostr << "Size = " << size << endl;
    while (curr)
    {
        ostr << count << ". " << curr->employee.getEmpName() << " (" << curr->employee.getEmpId() << ")\n";
        curr = curr->next;
        count++;
    }
    return ostr.str();
}

ostream& operator<<(ostream& out, const Linked_List_Employees& list)
{
    out << list.to_string() << endl;
    return out;
}