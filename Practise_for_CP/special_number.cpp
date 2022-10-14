#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int rem[10];
    int store[30];
    int y = 0;
    for (int i = (pow(10, (n - 1))); i < (pow(10, n)); i++)
    {
        int z = 0;
        int temp = i;    //sudhar!   but didn't work...........
        while (temp > 0)
        {
            int r = temp % 10;
            rem[z] = r;
            z++;
            temp = temp / 10;
        }
        int flag = 1;
        for (int j = 0; j < z - 1; j++)
        {
            int dif = 0;
            dif = abs(rem[j] - rem[j + 1]);
            if (dif != k)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            store[y] = temp;
            y++;
        }
    }
    for (int i = 0; i < y; i++)
    {
        cout << store[i] << " ";
    }
    cout << endl;

    return 0;
}