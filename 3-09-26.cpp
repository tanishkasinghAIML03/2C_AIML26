#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int id;
    string name;
    int salary;

public:
    void getdata()
    {
        cout << "Enter employee id: ";
        cin >> id;

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void displaydata()
    {
        cout << "Employee id: " << id << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee salary: " << salary << endl;
    }
};

int main()
{
    Employee e;
    e.getdata();
    e.displaydata();

    return 0;
}