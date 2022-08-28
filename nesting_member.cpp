#include <iostream>
#include <string>
using namespace std;

class binary
{
public:
    string s;
    void read(void);
    void checkBin(void);
    void ones(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void binary ::checkBin(void)
{
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "This is not a binary number." << endl;
            exit(0);
        }
    }
    if (i == s.length())
        cout << "This is a binary number." << endl;
}
void binary :: ones()
{
    checkBin();         // This is called nesteing of member.....
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            cout<<"0";
        else if (s.at(i) == '0')
            cout<<"1";
    }
    cout<<endl;
    
}
int main()
{
    binary b; 
    b.read();
    // b.checkBin();  -->>This can be written within a function of class..
    b.ones();
    return 0;
}