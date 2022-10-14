#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int num, r;
//     string s
//     cout << "Enter the number: ";
//     cin >> num;
//     do
//     {
//         r = num % 2;
//         num = num / 2;
//         s = s + (char)(r + 48);
//     } while (num != 0);
//     string t = string(s.rbegin(),s.rend());
//     cout << t << endl;

//     return 0;
// }

// int main()
// {
//     int num, r, i = 0;
//     int *store = new int[32];
//     cout << "Enter your number: ";
//     cin >> num;
//     do
//     {
//         r = num % 2;
//         store[i] = r;
//         num = num / 2;
//         i++;
//     }while (num > 0);
//     for (int j = i-1; j >=0; j--)
//     {
//         cout<<store[j];
//     }
//     printf("\n");

//     return 0;
// }

int main()
{
    int num = 21;
    int r, i = 0, ans = 0;
    // cout << "Enter your number: ";
    // cin >> num;
    while (num > 0)
    {
        r = num % 2;
        ans = pow(10, i) * r + ans;
        num = num / 2;
        i++;
    }

    cout << ans << endl;

    return 0;
}