#include <iostream>
#include <string>
using namespace std;

class naukar
{
    int id; 
    int salary;
public:
    void setData(void)
    {
        salary = 1200;
        cout << "Enter the id of the employee: ";
        cin >> id;
    }
    void getData(void)
    {
        cout << "The id of this employee is "<<id<<" with salary "<<salary<<endl<<endl;
    }
};
int main()
{
    // naukar rohan,saumya,roshan,priya;
    naukar mg[4];
    for (int i = 0; i < 4; i++)
    {
        mg[i].setData();
        mg[i].getData();
    }
    
    return 0;
}