#include <bits/stdc++.h>
using namespace std;
vector <int> reverse(vector<int> &v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<=e)
    {
        swap(v[s++], v[e--]);
    }
    return v;  
}
vector<int> sumArray(vector<int> a, vector<int> b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        i--;
    }
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }
    ans.push_back(carry);
    // while (carry != 0)
    // {
    //     int sum = carry;
    //     carry = sum/10;
    //     int value = sum%10;
    //     ans.push_back(value);
    // }
    return reverse(ans);
}
int main()
{
    vector<int> a = {9, 9, 9, 9};
    vector<int> b = {9, 9, 9, 9};
    vector<int> sum = sumArray(a, b);
    for (int i : sum)
        cout << i << " ";
    cout << endl;
    return 0;
}