#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setData()
    {
        data1 = 20;
        data2 = 50;
    }
    int getData1()
    {
        return data1;
    }
};
class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "The value of data1 is " << getData1() << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};
int main()
{
    derived roar;
    roar.setData();
    roar.process();
    roar.display();
    // cout<<roar.data2<<endl;
    // cout<<roar.getData1()<<endl;

    return 0;
}