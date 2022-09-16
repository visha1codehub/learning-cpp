#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    vector<int> multip;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        multip.push_back(x);
    }
    int score = 0;
    for (int i = 0; i < multip.size(); i++)
    {
        if ((nums[0] * multip[i]) > (nums[nums.size() - 1] * multip[i]))
        {
            score = score + (nums[0] * multip[i]);
            nums.erase(nums.begin());
        }
        else
        {
            score = score + (nums[nums.size() - 1] * multip[i]);
            nums.pop_back();
        }
    }
    cout << score << endl;
    return 0;
}