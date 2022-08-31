#include <iostream>
#include <list>
using namespace std;
void display(list<int> lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list <int> list1;   //?-->Zero length size list..
    // int a,size;
    // cout<<"Enter the size of the list: ";
    // cin>>size;
    // cout<<"Enter the elemens in the list: "<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>a;
    //     list1.push_back(a);
    // }
    // display(list1);
    // cout<<list1.size();

    list <int> list2(5);    //?-->Empty list of size 4...
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 85;
    iter++;
    *iter = 61;
    iter++;
    *iter = 9;
    iter++;
    *iter = 9;
    iter++;
    *iter = 317;
    iter++;
    display(list2);
    // list2.push_front(3000);
    // list2.pop_front();
    // list2.pop_back();
    // list2.remove(9);
    // list2.sort();
    // list2.merge(list1);
    // list2.reverse();
    // cout<<list2.size();
    display(list2);
    return 0;
}