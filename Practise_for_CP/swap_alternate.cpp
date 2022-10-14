#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr = 0;
    int next = 1;
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[curr], arr[next]);
        curr = curr + 2;
        next = next + 2 ;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}