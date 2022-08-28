#include <iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    //Creating a constructor..
    //Constructor is a special member function with the **same name**  of the class..
    //It is used to initialize the objects of its class..
    //It is automatically invoked whenever an object is created..

    Complex(void);  //Constructor declaration...

    void printcomplex(void)
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void)  //This is a default constructor as it takes no parameter...
{
    a = 0;
    b = 0;
    cout <<"Hello world..."<<endl;
}
int main()
{
    Complex c1,c2,c3;
    c1.printcomplex();
    c2.printcomplex();
    c3.printcomplex();
    return 0;
}

/*   Characterstics of constructor---
--> It should be declared in the public section of the class..
--> They are automatically invoke whenever the objects are created..
--> They cannot return value and do not have return types..
--> It can have defult arguments..
--> We cannot refer to their address.. 
*/



