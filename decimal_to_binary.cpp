#include <iostream>
#include <cstring>
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

int main()
{
    int num, r, i = 0;
    int *store = new int[32];
    cout << "Enter your number: ";
    cin >> num;
    do
    {
        r = num % 2;
        store[i] = r;
        num = num / 2;
        i++;
    }while (num > 0);
    for (int j = i-1; j >=0; j--)
    {
        cout<<store[j];
    }
    printf("\n");

    return 0;
}