#include <bits/stdc++.h>
using namespace std;
int peak_element(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int ans;
    while (s < e)
    {
        if (arr[m] < arr[m + 1])
            s = m + 1;
        else 
            e = m;
        m = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[] = {1, 3, 4, 6, 9, 7, 5, 2};
    int ans = peak_element(arr, 8);
    cout << "Answer is " << arr[ans] << endl;
    return 0;
}