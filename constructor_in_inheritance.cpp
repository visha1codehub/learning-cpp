#include <iostream>
using namespace std;

class base1
{
    int data1;
    public:
    base1(int x){
        data1 = x;
        cout<<"Base1 constructor is called."<<endl;
    }
    void printBase1data()
    {
        cout << "The value of data1 is "<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int y){
        data2 = y;
        cout<<"Base2 constructor is called."<<endl;
    }
    void printBase2data()
    {
        cout << "The value of data2 is "<<data2<<endl;
    }
};
class derived :  public base2, public base1
{
    int m,n;
    public:
    derived(int a,int b, int c, int d) : base1(a),base2(b){  //-->Special syntex....
        m = c;
        n = d;
        cout<<"Derived constructor is called."<<endl;
    }
    void printDeriveddata()
    {
        cout << "The value of derived1 is "<<m<<endl;
        cout << "The value of derived2 is "<<n<<endl;
    }
};

int main()
{
    derived obj(1,2,3,4);
    obj.printBase1data();
    obj.printBase2data();
    obj.printDeriveddata();
    return 0;
}