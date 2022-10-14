#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 5, 4};
    int n = 25;
    vector<int> ans;
    int carry = 0;
    int i = v.size() - 1;
    while (i >= 0)
    {
        int prod = n * v[i--] + carry;
        carry = prod / 10;
        int val = prod % 10;
        ans.push_back(val);
    }
    while (carry != 0)
    {
        int prod = carry;
        carry = prod / 10;
        int val = prod % 10;
        ans.push_back(val);
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}