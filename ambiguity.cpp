#include <iostream>
using namespace std;
class base1
{
    int a;
    public:
    void greet()
    {
        cout<<"Hello this is the base1"<<endl;
    }
};
class base2
{
    int a;
    public:
    void greet()
    {
        cout<<"Hello this is the base2"<<endl;
    }
};
class derived : public base1, public base2{
    public:
    void derivedgreet(){
        cout<<"This is derived class"<<endl;
    }
    void greet()
    {
        base2 :: greet();   //-->This is the solution of the ambiguity...
    }
};
int main()
{
    derived w;
    w.greet();
    return 0;
}