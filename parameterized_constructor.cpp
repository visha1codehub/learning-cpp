#include <iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int, int); 

    void printcomplex(void)
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x, int y) 
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call..
    Complex c1(8,9);
    c1.printcomplex();

    // Explicit call
    Complex c2 = Complex(6,7);
    c2.printcomplex();
    return 0;
}