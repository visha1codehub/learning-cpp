#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int st, int end, int k)
{
    int s = st;
    int e = end - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[m] == k)
            return m;
        if (arr[m] > k)
            e = m - 1;
        else
            s = m + 1;
        m = s + (e - s) / 2;
    }
    return -1;
}
int find_pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] >= arr[0])
            s = m + 1;
        else
            e = m;
        m = s + (e - s) / 2;
    }
    return s;
}
int find_target(int arr[], int n, int k)
{
    int pivot = find_pivot(arr, n);
    int ans;
    if (k >= arr[pivot] && k <= arr[n - 1])
        ans = binSearch(arr, pivot, n, k);
    else
        ans = binSearch(arr, 0, pivot - 1, k);
    return ans;
}
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5};
    cout << "The target is at index: " << find_target(arr, 8, 2) << endl;
    return 0;
}