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
    int element = 0;
    for (int i = 0; i < n; i++)
    {
        element = element ^ arr[i];
    }
    cout << "The unique element is " << element << endl;

    return 0;
}