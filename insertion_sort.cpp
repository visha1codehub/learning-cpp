#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        // for (; j >= 0; j--)
        // {
        //     if (arr[j] > temp)
        //     {
        //         arr[j + 1] = arr[j];
        //     }
        //     else
        //         break;
        // }
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[6] = {10, 8, 6, 1, 3, 2};
    insertionSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}