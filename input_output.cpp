#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; // '<<' is called the insertion operator....
    cin >> num1;                          // '>>' is called the extraction operator...
    cout << "Enter the value of num2:\n";
    cin >> num2;
    cout << "The sum is " << num1 + num2 << endl<<endl;  // 'endl' is used for the new line....

    //Using the setw manipulator//   
    cout << "The value of num1 is: " << setw(4)<<num1<<endl;
    cout << "The value of num2 is: " << setw(4)<<num2<<endl;
    cout << "The value of num1+num2 is: " << setw(4)<<num1+num2<<endl;

    return 0;
}