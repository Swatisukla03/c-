#include<iostream>
using namespace std;
class car{
    public:
    string model;
    int price;
    string fuel;
    int manufacture_yr;
    car( string mod,int p,string f, int man_yr){
        model=mod;
        price=p;
        fuel=f;
        manufacture_yr=man_yr;


    }
    // void display(){
    //     cout<<"The model name"<<model<<endl;
    //     cout<<"Price is "<<price;
    // }

};
int main(){
    car c1("M123",2700000,"CNG",2007);
    // c1.fuel;
    cout<<c1.model;
    // c1.display();
}