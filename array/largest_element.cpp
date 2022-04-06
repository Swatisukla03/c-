// Finding the largest element in the array
#include<iostream>
using namespace std;
int main(){
    int i,arr[50],size;
    //Size of the array
    cout<<"Enter the array size :";
    cin>>size;
    // Inputing the number of elements
    cout<<"\nEnter array elements :";
    for(i=0;i<size;i++){
        cout<<"Elements are :";
        cin>>arr[i];

    }
    cout<<"Stored Data in an array :";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int largest=arr[0];
    //cons=dition to check the largest element
    for(i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"\n Largest Element in an array is :"<<largest<<endl;
    return 0;
}