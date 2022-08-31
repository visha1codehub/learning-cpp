#include <iostream>
using namespace std;
class Base
{
protected:
    int b;

public:
    void setBaseData(int x)
    {
        b = x;
    }
    void showBaseData(void)
    {
        cout << "The value of base data is " << b << endl;
    }
    void sameFun()
    {
        cout << "Base class funtion is called." << endl;
    }
};
class Derived : public Base
{
    int d;

public:
    void setDerivedData(int y)
    {
        d = y;
    }
    void showDerivedData(void)
    {
        cout << "The value of derived data is " << d << endl;
    }
    void sameFun()
    {
        cout << "Derived class funtion is called." << endl;
    }
};
int main()
{
    Base b1;
    Base *bptr;
    bptr = &b1;
    bptr->setBaseData(100);
    bptr->showBaseData();
    bptr->sameFun();
    Derived d1;
    bptr = &d1;
    // bptr->setDerivedData(200);  //! -->This gives error bcoz pointer of the base class cannot access the member of the derivd class > directly < although it can point the derived class object....
    ((Derived *)bptr)->setDerivedData(200); //? --> Use of {type casting} for accessing the     derived class members using base class pointer..
    ((Derived *)bptr)->showDerivedData();
    ((Derived *)bptr)->sameFun(); //* --> Here it calls the derived class function(same name)...
    return 0;
}