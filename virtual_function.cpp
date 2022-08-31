#include <iostream>
using namespace std;
class Base
{
protected:
    int b;

public:
    virtual void Display()    //^  Use of virtual keyword
    {
        cout << "Base class funtion is called." << endl;
    }
};
class Derived : public Base
{
    int d;

public:
    void Display()
    {
        cout << "Derived class funtion is called." << endl;
    }
};
int main()
{
    Base b1;
    Derived d1;
    Base *bptr;
    bptr =&b1;
    bptr->Display();
    bptr = &d1;
    bptr->Display();   //^ Here display function of the derived class is called bocz of make virtual to the base class display function 
    return 0;
}