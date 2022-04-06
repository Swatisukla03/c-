#include<stdio.h>
// using namespace std;

void display(int arr[],int n){
    for(int i=0;i<=n;i++){
        printf(" %d ,",arr[i]);
    }
}
int main(){
     int arr[]={2,3,4,5,9};
     int size=3;
    display(arr,3);
}
