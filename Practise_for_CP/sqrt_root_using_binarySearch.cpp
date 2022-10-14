#include <bits/stdc++.h>
using namespace std;
int sqrt(int x)
{
    int s = 0;
    int e = x;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (m * m == x)
            return m;
        if (m * m < x)
        {
            ans = m;
            s = m + 1;
        }
        else
            e = m - 1;
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = sqrt(n);
    cout << ans;
    return 0;
}