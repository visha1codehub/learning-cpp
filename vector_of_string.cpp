#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> str;
    int n;
    cout<<"Enter the number of the line: ";
    cin >> n;
    cin.ignore();
    cout<<"Start writing below: "<<endl;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin,s);
        str.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < str[i].size(); j++)
        {
            
        }
        
    }

    return 0;
}