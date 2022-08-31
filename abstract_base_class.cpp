#include <iostream>
using namespace std;
class Base
{
protected:
    int b;

public:
    virtual void Display() = 0; //^  do nothing function --> Pure virtual function
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
    Base *bptr;
    Derived d1;
    bptr = &d1;
    bptr->Display();
    return 0;
}