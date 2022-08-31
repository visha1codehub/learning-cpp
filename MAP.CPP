#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Vishnu"] = 65;
    marksMap["Dhanvi"] = 38;
    marksMap["Visarika"] = 99;
    marksMap["Vishdhan"] = 69;
    marksMap.insert({{"Devoze",220}, {"Wemhao",400}});
    map <string, int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first<<" "<<(*iter).second<<endl;  //? Here (*iter).first gives us the key and (*iter).second gives us the value from the key-value pair..
    }
    
    return 0;
}