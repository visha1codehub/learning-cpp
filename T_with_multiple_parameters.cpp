#include <iostream>
#include <cstring>
using namespace std;
template <class T1, class T2>
class MyClass
{
    T1 data1;
    T2 data2;

public:
    MyClass(T1 x, T2 s) : data1{x}, data2{s} {}
    void display()
    {
        cout << data1 << " " << data2 << endl;
    }
};
int main()
{
    int num = 1004;
    string str = "This is Superman.";
    MyClass <int, string> o1(num,str);
    o1.display();

    MyClass <char, float> o2('S',643.66);
    o2.display();
    return 0;
}