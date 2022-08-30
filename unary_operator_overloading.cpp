#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A() { a = 0; }
    A(int x) { a = x; }
    void show()
    {
        cout << "a value: " << a << endl;
    }
    A operator++()
    {
        A temp;
        temp.a = ++a;
        return temp;
    }
    A operator++(int)
    {
        A temp;
        temp.a = ++a;
        return temp;
    }
    // void operator++(void)
    // {
    //     ++a;
    // }
    // void operator++(int)
    // {
    //     a++;
    // }
    void operator -(void)
    {
        a = -a;
    }
};
int main()
{
    A o1(45), o2(290);
    // ++o1;
    // o1.show();
    // o1++;
    // o1.show();
    // A o3 = ++o2;
    // o3.show();
    // A o4 = o1++;
    // o4.show();
    -o2;
    o2.show();
    return 0;
}