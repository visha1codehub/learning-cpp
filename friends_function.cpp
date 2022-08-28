#include <iostream>
using namespace std;

class complex
{
    int a,b;
public:
    friend complex sumcomplex(complex , complex);
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
/*Here the sumcomplex function is not the memeber function of the class complex...
It is a outsider function which has permission of access the private member of the class
with help of the freinds function...... */
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setData(2,8);
    c1.printcomplex();

    c2.setData(5,7);
    c2.printcomplex();

    sum = sumcomplex(c1, c2);
    sum.printcomplex();

    return 0;
}