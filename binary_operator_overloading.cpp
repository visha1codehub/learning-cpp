#include <iostream>
using namespace std;
class Equation
{
    int a, b, c;
    // friend Equation operator +(Equation, Equation);
public:
    Equation(int x = 0, int y = 0, int z = 0) : a{x}, b(y), c{z} {}  //! -->{} or () both can be used
    void showEqn()
    {
        cout << "The equation is " << a << "x + " << b << "y + " << c << " = 0" << endl;
    }
    Equation operator+(const Equation &obj)
    {
        Equation temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        temp.c = c + obj.c;
        return temp;
    }
};
// Equation operator +(Equation obj1, Equation obj2){
//     Equation temp;
//     temp.a = obj1.a + obj2.a;                //! --> Same thing using friend function
//     temp.b = obj1.b + obj2.b;
//     temp.c = obj1.c + obj2.c;
//    return temp;
// }
int main()
{
    Equation e1(1, 2, 3), e2(7, 8, 9);
    e1.showEqn();
    e2.showEqn();
    Equation e3 = e1 + e2;
    e3.showEqn();
    Equation e4 = e1 + e2 + e3;
    e4.showEqn();
    return 0;
}