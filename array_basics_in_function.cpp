#include <iostream>
using namespace std;
int sumArr(int *arr1, int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr1[i];
    }
    cout << sizeof(arr1) << endl;
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int result = sumArr(arr, 5);
    cout << result << endl;
    cout << arr << endl;
    cout << sizeof(arr) << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    return 0;
}