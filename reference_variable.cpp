#include <iostream>

using namespace std;

void swap (int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}
int main()
{
    //*******Simple pointer*******//

    // int x = 83;
    // int* y = &x;
    // *y = 34;
    // cout<<"The value of x is "<<x<<endl;

    //******Referencing variable********//

    // int a = 94;
    // int &b = a;
    // b = 12345;   //This changes the value of a//
    // cout << "The value of a is "<<a<<endl;
    // cout << "The value of a is "<<b<<endl;

    //***Let's make swap function using reference variable***//
    int l=100, m=200;
    cout <<"Before calling the function the value of l is "<<l<<" and m is "<<m<<endl;
    swap(l,m);
    cout <<"After  calling the function the value of l is "<<l<<" and m is "<<m<<endl;

    return 0;
}