#include <bits/stdc++.h>     //^--> It contains all header files for c++.....
using namespace std;

// #include <iostream>
// #include <cmath>
// class B
// {
//   int b;

// public:
//   B()
//   {
//     cout << "B constructor is called." << endl;
//   }
//   B(int x)
//   {
//     b = x;
//     cout << "B constructor with argument is called." << endl;
//   }
// };
// class D : public B
// {
//   int d;

// public:
//   void printany(){
//       cout<<"This is the testing with the constructor inheritance."<<endl;
//   }
// D(int x)
// {
//   d = x;
//   cout << "D constructor is called." << endl;
// }
// };
// int main()
// {
//   D a;
//   a.printany();
// int x = 23.54;
// cout<<x<<endl;

//   // *****Unlike c language, here is string data type in c++****

//   string name  = "I am Vishal..And I love my Dhannu Madam..I love her so much..\n";
// string pronoun[10] = {"this", "that", "these", "those"};
// cout<<name;
// int a = name.length();
// cout<<a<<endl;
// int q = 14;
// int b= 3;
// double pie = double(22)/double(7);
// cout<<pie<<endl;
// cout<<sin(pie);
// cout <<(double(q)/double(b));
// double xDegrees = 90.0;
// double x = xDegrees*3.14159/180;
// double result = sin(x);
// cout << "sin(x) = " << result << endl;

// 	// ********Reference variable******** //
// int a = 10;
// int &b = a;
// int c = a;
// cout <<a<<" "<<b<<" "<<c<<endl;
// cout <<&a<<" "<<&b<<" "<<&c<<endl;
// a += 10;
// cout <<a<<" "<<b<<" "<<c<<endl;
// b -= 5;
// cout <<a<<" "<<b<<" "<<c<<endl;
// c +=1;
// cout <<a<<" "<<b<<" "<<c<<endl;

//   return 0;
// }
// #include<iostream>
// using namespace std;

// class Complex {
// private:
// 	int real, imag;
// public:
// 	Complex(int r = 0, int i = 0) {real = r; imag = i;}

// // * This is automatically called when '+' is used
// // * between two Complex objects
// 	Complex operator + (Complex const &obj) {
// 		Complex res;
// 		res.real = real + obj.real;
// 		res.imag = imag + obj.imag;
// 		return res;
// 	}
// 	void print() { cout << real << " + i" << imag << '\n'; }
// };

//  int main()
// {
// 	Complex c1(10, 5), c2(6, 2);
// 	c1.print();
// 	c2.print();
// 	Complex c3 = c1 + c2;
// 	c3.print();
// }

//    // Printing "Hello World" without using semicolon  //
// int main()
// {
//   while (cout << "Hello World\n" && false) //?-->Correct
//   for (cout<<"Hello World\n";;)  //!-->Incorrect
//   do{}while (cout<<"Hello World\n"&&false);  //!-->Incorrect
//    return 0;
// }
////     Playing with ACSII character   //
// int main(){
//    char arr[] = {'0','1','2','3','4','5','6','7','8','9','a','b'}; 
//    char a = arr[11]-arr[0];
//    cout<<"hi"<<a;
// }

// int main(){
   // float a = (float)5/3;
   // cout<<a<<endl;

   // char s = '3';
   // int a = s+1-48;
   // cout <<a;
//    int a = 2;
//    char b = 2;
//    cout<<"q"<<b<<"h";

//    return 0;
// }
// #include <vector>
// #include <iostream>
// #include <cstring>
// #include <sstream>
// using namespace std;


// int main() {
//    string str;
//    cin>>str;
//    // cout<<str
//    string str2;
//     for(int i=0; i<str.size(); i++){
//         if(str[i] != ','){
//             str2 = str2+str[i];
//         }
//     }
//     return 0;
// }

// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
// #include <iostream>
// #include <string> 
// #include <cstring> 
// using namespace std;

int main()
{
//  string name;
//  int id;

//  // Taking id as input
//  cout << "Please enter your id: \n";
//  cin >> id;

//  // Takes the empty character as input
//  cout << "Please enter your name: \n";
//  getline(cin, name);

//  // Prints id
//  cout << "Your id : " << id << "\n";

//  // Prints nothing in name field
//  // as "\n" is considered a valid string
//  cout << "Hello, " << name
//   << " welcome to GfG !\n";

 // Again Taking string as input
//  getline(cin, name);

//  // This actually prints the name
//  cout << "Hello, " << name
//   << " welcome to GfG !\n";



// string str = "Hii this is something else means ~ELCAMINO~";
// string str2;
// str2 = str;
// cout <<str2;
// for (int i = 0; i < str.size(); i++)
// {
//     string st2 = "~";
//     // if(str[i].compare(st2) == 0){

//     // }
// }
unsigned long long int v= 1039*3749*8473;
cout<<v;


 return 0;
}

