#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    int salary = 44;

    Employee()
    {
        cout << "Base constructor with no argument is called." << endl;
    }
    Employee(int ip)
    {
        id = ip;
        cout << "Base constructor with argument is called." << endl;
    }
};
class programmer : /*visibility-mode*/ public Employee
{
public:
    int something = 81;
    void setid(int x){
        id = x;
    }
    programmer()
    {
        cout << "Derived constructor with no argument is called" << endl;
    }
    programmer(int inp ) : Employee(inp)
    {
        id = inp;
        cout << "Derived constructor with argument is called" << endl;
    }
};
int main()
{
    // Employee rohan, harry(3);
    // cout << harry.salary << endl;
    // cout << harry.id << endl;
    // cout << rohan.salary << endl;
    // cout << rohan.id << endl;
    // programmer anyany(32,53);
    // cout << anyany.id << endl;
    programmer dev(3), dev2;
    //** cout<<anyany.salary; //-->
    //** cout<<anyany.id;   //---> throws errors because employee class is inherited privately(default).
    return 0;
}