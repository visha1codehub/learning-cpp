#include <bits/stdc++.h>
using namespace std;
void large_factorial(int n){
    vector<int> v = {1};
    int a = n;
    while (a >= 1)
    {
        vector<int> temp;
        int carry = 0;
        int i = v.size() - 1;
        while (i >= 0)
        {
            int prod = a * v[i--] + carry;
            carry = prod / 10;
            int val = prod % 10;
            temp.push_back(val);
        }
        while (carry != 0)
        {
            int prod = carry;
            carry = prod / 10;
            int val = prod % 10;
            temp.push_back(val);
        }
        reverse(temp.begin(), temp.end());
        v = temp;
        a--;
    }
    //   print the vector //
    for (int i : v)
        cout << i;
    cout << endl;
}
int main()
{
    int n = 25;
    large_factorial(n);
    return 0;
}