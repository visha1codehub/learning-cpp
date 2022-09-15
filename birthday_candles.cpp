#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    vector <int> tmp(candles);
    int max = candles[0];
    for(int i=1; i<candles.size(); i++){
        if(candles[i]>max){
            int temp = max;
            max = candles[i];
            candles[i] = temp; 
        }
    }
    int count = 0;
    for(int i=0; i<tmp.size(); i++){
        if(tmp[i] == max)
            count++;
    }
    return count;
}

int main()
{
   int n;
   cin>>n;
   vector <int> v;
   for(int i=0; i<n; i++){
       int x;
       cin>>x;
       v.push_back(x);
   }
   int result = birthdayCakeCandles(v);
   cout << result;
    return 0;
}

