#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the value of the m and n: ";
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout <<"Now the value of m and n is: "<<m<<" and "<<n<<endl; 

    return 0;
}