#include <iostream>
using namespace std;

int main()
{
    int *p1 = new int(23);
    float *p2 = new float(59.334);

    // delete p2;  //-->  This deletes the pointer...

    cout << "The value at adress ptr is " << *p1 << endl;
    cout << "The value at adress ptr is " << *p2 << endl;

    int *arr = new int[4];  //-->Dynamically create a array using 'new' keyword....
    arr[0] = 1;
    arr[1] = 2;
    *(arr+2) = 3;
    arr[3] = 4;

    // delete[] arr;   //-->This deletes the array....

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<*(arr+1)<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;
    return 0;
}