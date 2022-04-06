// Here we are finding the unique numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        ans=ans^x;   //here we are doing XOR where similar nos will get cancelled


    }
    cout<<ans<<endl;
}