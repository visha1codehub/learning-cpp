#include <iostream>
#include <cmath>
using namespace std;

class SimpleCal{
    protected:
    double a,b;
    public:
    SimpleCal(double x, double y){
        a = x;
        b = y;
    }
    void add(){
        cout <<"The sum of the "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    void subtract(){
        cout <<"The difference of the "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
    void multiply(){
        cout <<"The product of the "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
    void division(){
        cout <<"The division of the "<<a<<" and "<<b<<" is "<<(double(a)/double(b))<<endl;
    }
};

class ScientificCal
{
    protected:
    double c;
    public:
    ScientificCal(double z){
        c = z;
    }
    
    void power(){
        double result = pow(c,2);
        cout<<"pow("<<c<<") is "<<result<<endl;
    }
    void squaroot(){
        double result = sqrt(c);
        cout<<"sqrt("<<c<<") is "<<result<<endl;
    }
    void sine(){
        double result = sin(c);
        cout<<"sin("<<c<<") is "<<result<<endl;
    }
    void cosine(){
        double result = cos(c);
        cout<<"cos("<<c<<") is "<<result<<endl;
    }
    void tangent(){
        double result = tan(c);
        cout<<"tan("<<c<<") is "<<result<<endl;
    }
};
class HybridCal : public SimpleCal, public ScientificCal
{
    int f;

};
int main()
{
    // SimpleCal c1(12.4,4);
    // c1.add();
    // c1.subtract();
    // c1.multiply();
    // c1.division();
    // ScientificCal c2(16);
    // c2.power();
    // c2.squaroot();
    // c2.sine();
    HybridCal calc();

    
    return 0;
}