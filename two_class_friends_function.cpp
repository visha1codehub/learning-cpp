#include <iostream>
using namespace std;

//Forward declaration
class complex;

class calculator
{
public:
    int add(int m, int n)
    {
        return m+n;
    }
    int sumReal(complex, complex);
    int sumImg(complex, complex);
};

class complex
{
    int a,b;
    //Individually declaring function as friends...
    // friend int calculator ::sumReal(complex, complex);
    // friend int calculator ::sumImg(complex, complex);

    //Aliter: Declaring the entire calculator class as using friend class...
    friend class calculator;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void printcomplex(void)
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator :: sumReal (complex o1, complex o2)
{
    return o1.a+o2.a;
}
int calculator :: sumImg (complex o1, complex o2)
{
    return o1.b+o2.b;
}

int main()
{
    complex c1, c2;
    c1.setData(9,4);
    c1.printcomplex();

    c2.setData(3,5);
    c2.printcomplex();

    calculator sum;
    int res = sum.sumReal(c1,c2);
    cout<<"The sum of the real part of complex number is "<<res<<endl;
    int resi = sum.sumImg(c1,c2);
    cout<<"The sum of the imaginary part of complex number is "<<resi<<endl;
    return 0;
}