#include <bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
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
int main()
{
    int arr[] = {1, 3, 4, 6, 7, 9, 12, 26};
    int ans = binSearch(arr, 9, 26);
    cout << "Answer is " << ans << endl;
    return 0;
}