#include <bits/stdc++.h>
using namespace std;
char upper(char c){
    return (c - 'a' + 'A');
}
char lower(char C){
    return (C - 'A' + 'a');
}
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = lower(s[i]);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
    }
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            result = result - s[i];
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            result = result + s[i];
        }
    }
    if (result < 0)
    {
        result = result * -1;
    }
    
    int flag = 0;
    for (int i = 2; i < result; i++)
    {
        if(result%i == 0)
            flag = 1;
            break;
    }
    if (flag == 0)
    {
        cout<<1;
    }
    else
        cout<<0;
    
    
    return 0;
}