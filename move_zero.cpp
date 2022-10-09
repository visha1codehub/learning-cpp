#include <bits/stdc++.h>
using namespace std;
void moveZeros(vector<int> &a)
{
    // vector<int> temp(a);
    // a.clear();
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     if (temp[i] != 0)
    //     {
    //         a.push_back(temp[i]);
    //     }
    // }
    // int i = a.size();
    // while (i < temp.size())
    // {
    //     a.push_back(0);
    //     i++;
    // }
    int i = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] != 0)
        {
            swap(a[i], a[j]);
            i++;
        }
    }
}
int main()
{
    vector<int> a = {5, 0, 1, 3, 0, 0, 2};
    moveZeros(a);
    cout << a.size() << endl;
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}