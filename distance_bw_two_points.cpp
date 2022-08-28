#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend void distance(point, point);

public:
    point(int, int);

};
point ::point(int a, int b)
{
    x = a;
    y = b;
}
void distance(point p, point q)
{
    double dis;
    // dis = sqrt((q.x-p.x)*(q.x-p.x) + (q.y-p.y)*(q.y-p.y));
    dis = sqrt(pow((q.x - p.x), 2) + pow((q.y - p.y), 2));
    cout << "The distance between both the point is " << dis << endl;
}
int main()
{
    point p1(1, 5), p2(3, 8);
    distance(p1, p2);

    point c1(0, 1), c2(0, 70);
    distance(c1, c2);
    return 0;
}