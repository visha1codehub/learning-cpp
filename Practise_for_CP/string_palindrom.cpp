#include <bits/stdc++.h>
using namespace std;
void manageString(string &s)
{
    string temp = "";
    int i = 0;
    while (i < s.size())
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            temp = temp + s[i];
        }
        i++;
    }
    int j = 0;
    while (j < temp.size())
    {
        if ((temp[j] >= 'A' && temp[j] <= 'Z'))
        {
            temp[j] = temp[j] - 'A' + 'a';
        }
        j++;
    }
    s = temp;
}
bool isPalindrome(string s)
{
    manageString(s);
    int st = 0;
    int e = s.size() - 1;
    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return false;
        }
        st++;
        e--;
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    cout<<isPalindrome(s);
    return 0;
}