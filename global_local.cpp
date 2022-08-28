#include <iostream>

using namespace std;
int global = 34;

int main()
{
    const int a = 85; //The value of a is cannot be changed.It became constant using const keyword
    // a =  77; //This give error because of the value of a is constant..
    int global = 48;
    global = 93; // This is interesting....
    bool is_sum = true;

    cout << global << is_sum;
    return 0;
}