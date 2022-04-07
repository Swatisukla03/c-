// here we are using the vector
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    vector<int>newone(5,1);
    vector<int>copiedone(v);
    cout<<"Elements of Newone"<<endl;
    for(int i: newone){
        cout<<newone[i]<<" ";
    }
    cout<<endl;
    // cout<<"Copied elements ito new vector"<<endl;
    // vector<int>v(newone);


    // cout<<"Size ->"<<v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(81);
     cout<<"Copied elements ito new vector"<<endl;
    // vector<int>v(newone);
    for(int i:v){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // v.push_back(9); 
    cout<<"Front element of the array -> "<<v.front()<<endl;
    cout<<"Last Element of the array ->"<<v.back()<<endl;

    cout << "size ->" << v.size() << endl;
    cout << v.capacity() << endl;
    // cout<<v.pop_back();
    // cout<<"After deleting"<<v;
    cout<<"Before deleting the elements"<<endl;
    //using loop
    for(int i:v){
        cout<<i<<" ";
        
    }
     cout<<endl;
    v.pop_back(); // it will delete the last element from the array
    cout<<"After deleting the element"<<endl;
    for(int i:v){
        cout<<i<<" ";
        
    }
    cout<<endl;
    v.clear();
    cout<<"After clearing size is - >"<<v.size();
}
