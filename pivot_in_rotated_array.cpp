#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5};
    cout << "The pivot is at index: " << find_pivot(arr, 8) << endl;
    return 0;
}