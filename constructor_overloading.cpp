#include <iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    
    Complex(int x, int y)
    {
        a = x;
        b = y;
    } 

    Complex(int x)                 // --> Multiple constructor obivously with same name...
    {
        a = x;
        b = 0;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    void printcomplex(void)
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1(2,9);
    c1.printcomplex();
    Complex c2(5);
    c2.printcomplex();
    Complex c3;
    c3.printcomplex();
    Complex c4 = Complex(c3);
    c4.printcomplex();
    return 0;
}