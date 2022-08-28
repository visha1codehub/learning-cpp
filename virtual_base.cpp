#include <iostream>
using namespace std;
class Student
{
    int rollno;
    public:
    void setrollno(int x){
        rollno = x;
    }
    void getrollno(){
        cout <<"Your roll number is "<<rollno<<endl;
    }
};
class Exam : virtual public Student   //-->Solution for the virtual base...
{
protected:
    float maths;
    float physics;
    public:
    void setmarks(float m, float n){
        maths = m;
        physics = n;
    }
    void getmarks(){
        cout <<"Your maths marks is "<<maths<<endl;
        cout <<"Your physics marks is "<<physics<<endl;
    }
};
class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void setscore(float s){
        score = s;
    }
    void getscore(){
        cout <<"Your score in sports is "<<score<<endl;
    }
};
class Result : public Exam, public Sports
{
    float result;
    public:
    void printresult(){
        getrollno();
        getmarks();
        getscore();
        cout<<"Your result is "<<maths+physics+score<<endl;
    }
};
int main()
{
    Result a;
    a.setrollno(11);
    a.setmarks(96.4, 95.1);
    a.setscore(42.4);
    a.printresult();
    return 0;
}