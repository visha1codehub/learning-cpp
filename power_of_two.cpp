#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // bool isTwo = true;
    // if (n == 0)
    //     isTwo = false;
    // else
    // {
    //     while (n != 1)
    //     {
    //         if (n % 2 != 0)
    //         {
    //             isTwo = false;
    //         }
    //         n = n / 2;
    //     }
    // }
    // if (isTwo)
    //     cout << "True!\n";
    // else
    //     cout << "False!\n";

    int n;
    cin>>n;
    int setBit = 0;
    while (n != 0)
    {
        if(n&1 == 1)
            setBit++;
        n = n>>1;
    }
    if(setBit == 1)
        cout<<"true\n";
    else
        cout<<"false\n";
    
    return 0;
}