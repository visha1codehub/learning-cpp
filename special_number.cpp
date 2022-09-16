#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> store;
    for (int i = (pow(10, (n - 1))); i < (pow(10, n)); i++)
    {
        vector<int> rem;
        while (i > 0)
        {
            int r = i % 10;
            rem.push_back(r);
            i = i / 10;
        }
        int flag = 1;
        for (int j = 0; j < rem.size() - 1; j++)
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
            store.push_back(i);
        }
        rem.clear();
    }
    for (int i = 0; i < store.size(); i++)
    {
        cout << store[i] << " ";
    }
    cout << endl;

    return 0;
}