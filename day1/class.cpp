// Here we are Learning Classes in Cpp
//C++ initially named as C with Classes
//In classes we get security main difference between structure and classes  is the security
#include<iostream>
using namespace std;
class student
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData() {
        cout<<"The value of a is "<<a<<endl;
         cout<<"The value of b is "<<b<<endl;
          cout<<"The value of c is "<<c<<endl;
           cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;

    }
};
void student ::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    student Swati;
    Swati.setData(23,17,14);
    Swati.e=13;
    Swati.d=15;

    Swati.getData();
    return 0;

}

