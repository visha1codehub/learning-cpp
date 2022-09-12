#include <iostream>
#include <cmath>
using namespace std;

// int main()
// {
//     string bin;
//     cout << "Enter your binary number: ";
//     cin >> bin;
//     int temp = bin.size();
//     int sum = 0;
//     for (int i = 0; i < bin.size(); i++)
//     {
//         sum = sum + (bin[i] - 48) * pow(2, temp - 1);
//         temp--;
//     }
//     cout << sum << endl;
//     return 0;
// }

int main()
{
    int bin, i = 0;
    int r, sum = 0;
    cout << "Enter your binary number: ";
    cin >> bin;
    while (bin != 0)
    {
        r = bin % 10;
        sum = sum + pow(2, i) * r;
        bin = bin / 10;
        i++;
    }
    cout << sum << endl;
    return 0;
}