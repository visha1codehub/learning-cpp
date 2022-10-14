#include <bits/stdc++.h>

using namespace std;

// void miniMaxSum(vector<int> arr)
// {
//     int sum1 = 0;
//     int sum2 = 0;
//     int sum3 = 0;
//     int sum4 = 0;
//     int sum5 = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (i != 0)
//         {
//             sum1 = sum1 + arr[i];
//         }
//         if (i != 1)
//         {
//             sum2 = sum2 + arr[i];
//         }
//         if (i != 2)
//         {
//             sum3 = sum3 + arr[i];
//         }
//         if (i != 3)
//         {
//             sum4 = sum4 + arr[i];
//         }
//         if (i != 4)
//         {
//             sum5 = sum5 + arr[i];
//         }
//     }
//     int max;
//     if (sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5)
//         max = sum1;
//     else if (sum2 > sum1 && sum2 > sum3 && sum2 > sum4 && sum2 > sum5)
//         max = sum2;
//     else if (sum3 > sum2 && sum3 > sum1 && sum3 > sum4 && sum3 > sum5)
//         max = sum3;
//     else if (sum4 > sum2 && sum4 > sum3 && sum4 > sum1 && sum4 > sum5)
//         max = sum4;
//     else if (sum5 > sum2 && sum5 > sum3 && sum5 > sum4 && sum5 > sum1)
//         max = sum5;
//     else
//         max = sum1;
//     int min;
//     if (sum1 < sum2 && sum1 < sum3 && sum1 < sum4 && sum1 < sum5)
//         min = sum1;
//     else if (sum2 < sum1 && sum2 < sum3 && sum2 < sum4 && sum2 < sum5)
//         min = sum2;
//     else if (sum3 < sum2 && sum3 < sum1 && sum3 < sum4 && sum3 < sum5)
//         min = sum3;
//     else if (sum4 < sum2 && sum4 < sum3 && sum4 < sum1 && sum4 < sum5)
//         min = sum4;
//     else if (sum5 < sum2 && sum5 < sum3 && sum5 < sum4 && sum5 < sum1)
//         min = sum5;
//     else
//         min = sum1;
//     cout << max << " " << min;
// }

// int main()
// {
//     vector<int> v;
//     for (int i = 0; i < 5; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     miniMaxSum(v);
//     return 0;
// }

void miniMaxSum(vector<long> arr)
{
    vector<long> sum(5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j != i)
            {
                sum[i] = sum[i] + arr[j];
            }
        }
    }
    cout << *min_element(sum.begin(), sum.end()) << " " << *max_element(sum.begin(), sum.end());

    // sort(sum.begin(),sum.end());                 //?-->  Nice way to find max and min..
    // cout<<sum[0]<<" "<<sum[sum.size()-1]<<endl;
    // long *min = min_element(sum.begin(), sum.end());  //!--> Don't know but throw error..
    // long *max = max_element(sum.begin(), sum.end());  //!--> Need any "Comparator" as third argument..
    
}
int main()
{
    vector<long> v;
    for (int i = 0; i < 5; i++)
    {
        long x;
        cin >> x;
        v.push_back(x);
    }
    miniMaxSum(v);
    return 0;
}
