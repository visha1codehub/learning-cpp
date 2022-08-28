#include <iostream>
using namespace std;
 
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout<<"This is the constructor block for the object number "<<count<<endl;
    }
    ~Num()
    {
        cout<<"This is the destructor block for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating a object n1 "<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creatig two more objects n2 and n3"<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Exiting the main function"<<endl;
    // cout<<"This is fucking something else.."<<endl;
    return 0;
}