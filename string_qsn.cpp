#include <bits/stdc++.h>

using namespace std;
void upper(char &c)
{
	c = c - 'a' + 'A';
}
int main()
{
	while (true)
	{
		string s;
		cin >> s;
		if (s.size() == 0)
		{
			break;
		}
		for (int i = 0; i < s.size(); i++)
		{
			upper(s[i]);
		}
		cout << s << endl;
	}
	return 0;
}