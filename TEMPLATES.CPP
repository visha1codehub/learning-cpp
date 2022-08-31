#include <iostream>
using namespace std;
template <class T>   //* T can be any variable type
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + arr[i] * v.arr[i];
        }
        return d;
    }
    // T operator ^(Vector &v)  //^  This is nothing but finding dot product using operator overloading
    // {
    //     T d = 0;
    //     for (int i = 0; i < size; i++)
    //     {
    //         d = d + arr[i] * v.arr[i];
    //     }
    //     return d;
    // }
};
int main()
{
    Vector <int> d1(3);
    d1.arr[0] = 2;
    d1.arr[1] = 1;
    d1.arr[2] = 4;
    Vector <int> d2(3);
    d2.arr[0] = 1;
    d2.arr[1] = 3;
    d2.arr[2] = 0;
    int a = d1.dotProduct(d2);
    cout << a << endl;

    Vector <float> d3(3);
    d3.arr[0] = 2.1;
    d3.arr[1] = 1.6;
    d3.arr[2] = 0.4;
    Vector <float> d4(3);
    d4.arr[0] = 1.95;
    d4.arr[1] = 0.93;
    d4.arr[2] = 0.44;
    float b = d3.dotProduct(d4);
    cout << b << endl;
    // int a = d1^d2;
    return 0;
}