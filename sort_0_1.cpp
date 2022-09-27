#include <bits/stdc++.h>
using namespace std;
void sort_0_1(vector<int> &arr, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
            i++;
        while (arr[j] == 1 && i < j)
            j--;
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void printvec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort_0_1(arr, n);
    printvec(arr);
    return 0;
}