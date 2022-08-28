#include <iostream>
using namespace std;
class base
{
private:
    int a;      //-->This is a private and cannot be inherited...

protected:
    int b;     //-->This is private but can be inherited...

public:
    int c;    //-->This is public and always can be inherited.. 
};
class derived : public base
{
    int d;
};
int main()
{
    derived o1;
    // o1.b;  //throws error as it is proctected..
    o1.c;
    return 0;
}