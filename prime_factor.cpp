#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    // cout<<"1 x ";
    // for (int i = 2; i <= num;)
    // {
    //     if (num %i == 0)
    //     {
    //         cout<<i<<" x ";
    //         num=num/i;
    //     }
    //     else
    //         i++;
    // }

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}