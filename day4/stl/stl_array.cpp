// here we are using stl for Array
#include<iostream>
#include<array>
using namespace std;
int main(){
    // int basic[3]={1,2,3};
    array<int,4>a={7,2,3,8};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at the 2nd Index"<<a.at(2)<<endl; //finding the elemnt at that particular index
    cout<<"Empty or Not ->"<<a.empty()<<endl; 
        cout<<"To find the front element ->"<<a.front()<<endl;
    cout<<"Last element ->"<<a.back()<<endl;
}