#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
    public:
    void setdata(int x, int y){
        real = x;
        imaginary = y;
    } 
    void getdata(){
        cout << "The real part is "<<real<<endl;
        cout << "The imaginary part is "<<imaginary<<endl;
    } 
};
int main()
{
    Complex c1;
    Complex*  ptr = &c1;
    (*ptr).setdata(2,6);
    (*ptr).getdata();
    Complex* ptr2 = new Complex;
    // (*ptr2).setdata(3,7); // is exactly as same as
    ptr->setdata(3,7);
    // (*ptr2).getdata();  // is as good as
    ptr->getdata();

    //   Array of objects
    Complex* arr = new Complex[4];
    arr->setdata(1,15);
    arr->getdata();

    return 0;
}