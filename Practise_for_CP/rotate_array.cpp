#include <bits/stdc++.h>
using namespace std;
void rotateArray(vector<int> &a, int k)
{
    // while (k--)
    // {
    //     int temp = a[a.size()-1];
    //     for (int i = a.size() - 1; i > 0; i--)
    //     {
    //         a[i] = a[i-1];
    //     }
    //     a[0] = temp;
    // }
    vector<int> temp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        temp[(i+k)%a.size()] = a[i];   
    }
    a = temp;

}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotateArray(a, k);
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}