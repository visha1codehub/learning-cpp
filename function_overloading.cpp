#include <iostream>

using namespace std;
    // *****Function overlaoding is several functions with SAME NAME****
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
float sum(float a, int b)
{
    return a*b;
}
int main()
{
    int x = 34, y = 6,z = 10;
    float s = 12;
    cout <<"The sum x+y is "<<sum(x,y)<<endl;
    cout <<"The sum x+y is "<<sum(s,y)<<endl;
    cout <<"The sum x+y+z is "<<sum(x,y,z)<<endl;
    return 0;
}