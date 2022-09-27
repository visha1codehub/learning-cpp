#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int hundred = n/100;
    cout<<"hundred rupee notes required : "<<hundred<<endl;
    n = n-hundred*100;
    int fifty = n/50;
    cout<<"fifty rupee notes required : "<<fifty<<endl;
    n = n-fifty*50;
    int twenty = n/20;
    cout<<"twenty rupee notes required : "<<twenty<<endl;
    n = n-twenty*20;
    int one = n;
    cout<<"one rupee notes required : "<<one<<endl;
    cout<<(hundred*100)+(fifty*50)+(twenty*20)+one<<endl;
    return 0;
}