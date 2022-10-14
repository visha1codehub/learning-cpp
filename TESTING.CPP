// #include <bits/stdc++.h> //^--> It contains all header files for c++.....
// using namespace std;

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

// int main()
// {
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
// unsigned long long int v= (long long)1039*3749*8473;
// cout<<v;

//  return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'diagonalDifference' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts 2D_INTEGER_ARRAY arr as parameter.
//  */

// int diagonalDifference(int n, vector<vector<int>> arr) {
//     int sumL=0, sumR=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j)
//                 sumL = sumL + arr[i][j];
//             if(i+j == n-1)
//                 sumR = sumR + arr[i][j];
//         }
//     }
//     int dd = sumL - sumR;
//     if (dd<0)
//         dd = dd*(-1);
//     return dd;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector <vector<int>> arr(n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             int x;
//             cin>>x;
//             arr[i].push_back(x);
//         }
//     }
//     int dd = diagonalDifference(n, arr);
//     cout<<dd;
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'plusMinus' function below.
//  *
//  * The function accepts INTEGER_ARRAY arr as parameter.
//  */

// void plusMinus(vector<int> arr)
// {
//     int plus = 0;
//     int minus = 0;
//     int zero = 0;
//     cout << arr.size() << endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr.at(i) > 0)
//             plus++;
//         else if (arr.at(i) < 0)
//             minus++;
//         else
//             zero++;
//     }
//     double size = (double)arr.size();
//     cout << arr.size() << endl;
//     cout << zero << endl;
//     double ap = (double)plus / size;
//     double am = (double)minus / size;
//     double az = (double)zero / size;

//     cout << fixed << setprecision(6) << ap << endl;

//     cout << fixed << setprecision(6) << am << endl;

//     cout << fixed << setprecision(6) << az << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     plusMinus(v);
//     return 0;
// }
// int main()
// {
// int a=10, b=0;
// int c = a/b;  //! Throws error as--floating point exception (core dumped)

// char c =123456;  //*-->gives "@"....
// cout<<c<<endl;

// int n, k;
// cin >> n >> k;
// vector<int> rem;
// while (n > 0)
// {
//     int r = n % 10;
//     rem.push_back(r);
//     n = n / 10;
// }
// for (int i = 0; i < rem.size(); i++)
// {
//     cout << rem[i] << " ";
// }

// int flag = 1;
// for (int i = 0; i < rem.size() - 1; i++)
// {
//     int dif = 0;
//     dif = abs(rem[i] - rem[i + 1]);
//     if (dif != k)
//     {
//         flag = 0;
//         break;
//     }
// }
// if (flag == 1)
// {
//     cout << "You succeed!!!" << endl;
// }
// else
//     cout << "You still succeed but not with special number..\n";

// int n, k;
// cin >> n >> k;
// int rem[20];
// int z = 0;
// while (n > 0)
// {
//     int r = n % 10;
//     rem[z] = r;
//     n = n / 10;
//     z++;
// }
// for (int i = 0; i < z; i++)
// {
//     cout << rem[i] << " ";
// }

// int flag = 1;
// for (int i = 0; i < z - 1; i++)
// {
//     int dif = 0;
//     dif = abs(rem[i] - rem[i + 1]);
//     if (dif != k)
//     {
//         flag = 0;
//         break;
//     }
// }
// if (flag == 1)
// {
//     cout << "You succeed!!!" << endl;
// }
// else
//     cout << "You still succeed but not with special number..\n";

//     return 0;
// }

// int data()
// {
//     int s = 5;
//     return s;
// }
// int main()
// {
//     int a = data();
//     cout<<a;
//     return 0;
// }
// char* data()
// {
//     // char s[] = "vishal";
//     // static char s[] = "vishal";
//     char* s = "vishal";
//     return s;
// }
// int main()
// {
//     char* a = data();
//     // a[0] = 's';
//     cout<<a;
//     return 0;
// }

// int main()
// {
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " " << endl;
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //         sleep(1);
    //         system("clear");
    //     }
    // }

    // cout<<(10&5);


    // string s = "";
    // string t = "";
    // // s.erase(s.begin(),s.end());
    // // t.erase(t.begin(),t.end());
    // s.pop_back();
    // if (s == t)
    //     cout<<"Yes"<<endl;
    // else
    //     cout<<"No"<<endl;
    // return 0;

    // int arr[5] = {8,12,18,20,28};
    // int gcd = arr[0];
    // for (int i = 1; i < 5; i++)
    // {
    //     gcd = __gcd(gcd,arr[i]);
    // }
    // cout<<gcd;

    // vector<int> v = {1,2,3,7,4,69,6,3};
    // int max = *max_element(v.begin(),v.end());
    
    // int *pt = NULL;
    // // pt = new int[10];
    // pt = new int(234);
    // // for(int i=0; i<10; i++)
    // cout<<*pt<<endl;;

//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<(a>b?a>c?a:c:b>c?b:c)<<endl;
// }

// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);


// int beautifulDays(int i, int j, int k) {
//     int count = 0;
//     for(int a=i; a<=j; a++){
//         int original = a;
//         int r, reverse = 0;
//         int temp = a;
//         while (temp>0)
//         {
//             r = temp%10;
//             reverse = r + reverse*10;
//             temp = temp/10;
//         }
//         int val = abs(original-reverse);
//         if(val%k == 0)
//             count++;
//     }
//     return count;      
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string first_multiple_input_temp;
//     getline(cin, first_multiple_input_temp);

//     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

//     int i = stoi(first_multiple_input[0]);

//     int j = stoi(first_multiple_input[1]);

//     int k = stoi(first_multiple_input[2]);

//     int result = beautifulDays(i, j, k);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {18,6,4,4,5,67};
    vector<int> v1 = {13,6,3};
    v = v1;
    for (int i : v1)
        cout << i << " ";
    cout << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}