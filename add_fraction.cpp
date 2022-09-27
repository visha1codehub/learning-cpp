#include <bits/stdc++.h>

using namespace std;
class AddFraction
{
    int a, b;

public:
    AddFraction(int x = 0, int y = 1) : a{x}, b{y} {}
    void showFraction()
    {
        cout << "The fraction is " << a << "/" << b << endl;
    }
    int getGCD(int n1, int n2)
    {
        if (n1 == 0)
            return n2;
        return getGCD(n2 % n1, n1);
    }
    int getLCM(int n1, int n2)
    {
        return (n1 / getGCD(n1, n2)) * n2;
    }
    AddFraction operator+(const AddFraction &obj)
    {
        AddFraction temp;
        int LCM = getLCM(b, obj.b);
        temp.a = ((LCM / b) * a) + ((LCM / obj.b) * obj.a);
        temp.b = LCM;
        return temp;
    }
};

int main()
{
    AddFraction e1, e2(1, 3);
    e1.showFraction();
    e2.showFraction();
    AddFraction e3 = e1 + e2;
    e3.showFraction();
    return 0;
}