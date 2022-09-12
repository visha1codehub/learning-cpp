#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, q;
    cin >> N >> q;
    vector<int> vec[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vec[i].push_back(x);
        }
    }

    for (int k = 0; k < q; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << vec[i].at(j);
    }

    return 0;
}