#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void sumData(complex z1, complex z2)
    {
        a = z1.a + z2.a;
        b = z1.b + z2.b;
    }
    void printSum(void) 
    {
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1,2);
    c1.printSum();
    c2.setData(3,4);
    c2.printSum();
    c3.sumData(c1, c2);
    c3.printSum();
    return 0;
}