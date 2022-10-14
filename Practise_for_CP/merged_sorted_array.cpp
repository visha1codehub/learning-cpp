#include <bits/stdc++.h>
using namespace std;
vector<int> mergeVec(vector<int> a, vector<int> b){
    vector<int> c;
    int i=0, j=0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    // Remaining elements............
    while (i < a.size())
        c.push_back(a[i++]);
    while (j < b.size())
        c.push_back(b[j++]);
    return c;
}
int main()
{
    vector<int> a = {1,3,5,7,9};
    vector<int> b = {2,4,6,8,10,11,12};
    vector<int> ans = mergeVec(a,b);
    for(int i : ans)
        cout << i << " ";
    cout<<endl;
    return 0;
}