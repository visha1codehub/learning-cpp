#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int x, float y)
    {
        id = x;
        price = y;
    }
    void getData()
    {
        cout << "Id of the item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptrTemp->setData(p, q);
        ptrTemp++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Here is item: " << i + 1 << endl;
        ptr->getData();
        ptr++;
    }

    return 0;
}