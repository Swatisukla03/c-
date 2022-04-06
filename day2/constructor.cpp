
// #include<iostream>
// using namespace std;

// // class smartphone{
// //     public:
//     //data members
    
//     // string model;
//     // int year_of_manufacture;
//     // bool _5g_supported;
//     // Default constructor

//     // smartphone(){
//     //     model="M234";
//     //     year_of_manufacture=2007;
//     //     _5g_supported= true;
//     // }
//     // void details(){
//     //     cout<<"Model:"<<model<<endl;
//     //     cout<<"Year of Manufacture"<<year_of_manufacture<<endl;
//     //     cout<<"5g Supported"<<_5g_supported<<endl;

//     // }

// // };
// // int main(){
// //     // details()
// //     smartphone s1;
// //     cout<<"s1 :"<<s1.model<<endl;
    

    

// // }
// // Parameterized
// class smartphone{
//     private:
//     //data members
    
//     int model;
//     int year_of_manufacture;
//     bool _5g_supported;
//     // Default constructor
//     public:

//     smartphone(int mdl, int manu,bool _5g_supp){
//         model=mdl;
//         year_of_manufacture=manu;
//         _5g_supported= _5g_supp;
//     }
//     void details(){
//         cout<<"Model:"<<model<<endl;
//         cout<<"Year of Manufacture"<<year_of_manufacture<<endl;
//         cout<<"5g Supported"<<_5g_supported<<endl;

//     }

// };
// int main(){
//     // details()
//     smartphone s1(2345,2007,true);
//     // cout<<"s1 :"<<s1.model<<endl;
//     // cout<<"s1.model :"<<s1.details()<<endl;
//     s1.details();
    

    

// }
//copy constructor
// #include<iostream>
// using namespace std;
// class point{
//     public:
//     double x,y;
//     public:
//     point(double px,double py){
//         x=px;
//         y=py;
//     }
// };
// int main(){
//     // point a[10];
//     point b=point(5,7);
//     point c(b); //copy constructor values get copied
//     cout<<c.x;
    


// }
// Area
#include<iostream>
using namespace std;
class wall{
    private:
    double length;
    double height;
    public:
    wall(double len,double hgt){
        length=len;
        height=hgt;
    }
    double calculateArea(){
        return length*height;
    }
};
int main(){
    wall wall1(10.658,17.97654);
    wall wall2(12.8965,32.86);
    cout<<"Area of Wall1  ->"<<wall1.calculateArea()<<endl;
    cout<<"Area of Wall2  ->"<<wall2.calculateArea();
    return 0;

}
