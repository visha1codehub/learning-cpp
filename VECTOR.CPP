#include <iostream>
#include <vector>
using namespace std;
template <class T>
void displayarr(vector<T> &v)
{
    cout <<"Displaying this vector.."<<endl;
    for (int i = 0; i < v.size(); i++) //? v.size()--> Return the size of the vector...
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " "; //?--> v.at(i) is same as the v[i]...
    }
    cout << endl;
}
int main()
{
    // *******....Ways to create a vector....********//

    vector<int> vec1; //?--> Zero length integer vector...
    vector<char> vec2(4); //?--> 4 elements character vector...
    vector<char> vec3(vec2);  //?--> 4 elements character vector from vec2...
    vector <int> vec4(6,3);  //? --> 6 elements vector of 3s...
    // vec2.push_back('s');
    // displayarr(vec2);
    // displayarr(vec3);
    // displayarr(vec4);
    // int element, size;
    // cout << "Enter the size of the array: ";
    // cin >> size;
    // cout << "Enter the elements in the array:" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> element;
    //     vec1.push_back(element); //?-->Add element at the end...
    // }
    // vec1.pop_back();    //?-->Delete the element form the end...

    // vector<int>::iterator iter = vec1.begin(); //?-->Creating a iterator(at the begining)...

    // vector <int>:: iterator iter = vec1.end();  //?-->Creating a iterator(at the end)...

    // vec1.insert(iter,500);   //?--> Insert the elements at specified position using iterators..

    // vec1.insert(iter+1,500);  //?--> Insert the elements at first index...

    // vec1.insert(iter, 5, 500); //?--> Insert the five copy of the elements correspond to the iterator...


    return 0;
}