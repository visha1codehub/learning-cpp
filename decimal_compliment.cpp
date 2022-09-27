#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mask = 0;
    int temp = n;
    if (n == 0)
        cout << 1 << endl;
    else
    {
        while (temp != 0)
        {
            mask = (mask << 1) | 1;
            temp = temp >> 1;
        }
        int ans = mask & (~n);
        cout << ans << endl;
    }
    return 0;
}