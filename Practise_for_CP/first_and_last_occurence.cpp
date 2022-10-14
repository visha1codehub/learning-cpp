#include <bits/stdc++.h>
using namespace std;
int left_occur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            e = m - 1;
        }
        else if (arr[m] > k)
            e = m - 1;
        else
            s = m + 1;
        m = s + (e - s) / 2;
    }
    return ans;
}
int right_occur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[m] == k)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] > k)
            e = m - 1;
        else
            s = m + 1;
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 5, 6, 7};
    cout << "First occurence is: " <<left_occur(arr, 12, 3) << endl;
    cout << "Last occurence is: " <<right_occur(arr, 12, 3) << endl;

    //?  We can also find number of occurence using this method....
    int left = left_occur(arr, 12, 3);
    int right = right_occur(arr, 12, 3);
    int no_of_occur = right -left+1;
    cout<<"The number of occurence is: "<<no_of_occur<<endl;
    return 0;
}