// #include <iostream>
// #include <cmath>
// using namespace std;
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
