#include <bits/stdc++.h>
using namespace std;
int *grading_students(int arr[], int n)
{
    static int result[100];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 38)
        {
            result[i] = arr[i];
        }
        else if ((5 - arr[i] % 5) < 3)
        {
            result[i] = (5 - arr[i] % 5) + arr[i];
        }
        else if ((5 - arr[i] % 5) >= 3)
        {
            result[i] = arr[i];
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *res = grading_students(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<*(res+i)<<" ";
    }
    cout<<endl;

    return 0;
}