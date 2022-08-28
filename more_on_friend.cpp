#include <iostream>
using namespace std;
class Y;
class X 
{
    int dx;
    friend void swap(X &,Y &);
public:
    void inData(int data)
    {
        dx = data;
    }
    void displayx(void)
    {
        cout<<dx<<endl;
    }
};
class Y 
{
    int dy;
    friend void swap(X &,Y &);
public:
    void inData(int data)
    {
        dy = data;
    }
    void displayy(void)
    {
        cout<<dy<<endl;
    }
};
void swap(X &m, Y &n)
{
    int temp = m.dx;
    m.dx = n.dy;
    n.dy = temp;
}
int main()
{
    X x1;
    x1.inData(388);

    Y y1;
    y1.inData(415);

    swap(x1,y1);
    cout<<"The value of x1 after swapping becomes: ";
    x1.displayx();
    cout<<"The value of y1 after swapping becomes: ";
    y1.displayy();

    return 0;
}