#include <iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
    void setData(int x, int y, int z);
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{
    Employee vishal;
    vishal.d = 54;
    vishal.e = 98;
    // vishal.a = 49; // --> This throw error because int a is a private variable
    vishal.setData(3,7,9);
    vishal.getData();
    return 0;
}