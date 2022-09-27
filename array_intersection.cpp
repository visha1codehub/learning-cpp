#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> arr1, int m, vector<int> arr2, int n)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return ans;
}
void printvec(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int m, n;
    cin >> m;
    vector<int> arr1;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    cin >> n;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> ans = intersection(arr1, m, arr2, n);
    printvec(ans);

    return 0;
}