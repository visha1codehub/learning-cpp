#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
public:
    void setData(void)
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is "<< id<<" and this employee number is "<<count<<endl;
    }
    static void getcount(void)  //It takes only static member variable...
    {
        // cout << id;  //-->This throws error
        cout << "The value of the count is "<<count<<endl;
    }
};
int Employee :: count; // Default value is 0
int main()
{
    Employee rohan, rohit, roshan;
    rohan.setData();
    rohan.getData();
    Employee::getcount();

    rohit.setData();
    rohit.getData();
    Employee::getcount();

    roshan.setData();
    roshan.getData();
    Employee::getcount();
    return 0;
}