#include<iostream>
using namespace std;
struct student
{
    int student_id;
    float gpa;
    string address;
    string course;

    /* data */
};

int main(){
    struct student Swati;    //Assugning to Swati the template 
    struct student Shreya;    //assigning to Shreya
    struct student Shivam;
    struct student Khushboo;//
    // Swati's info is there
    Swati.student_id=203030;
    Swati.gpa=9.8;
    Swati.address="Odisha";
    // Shreya 's info :
    Shreya.student_id=203024;
    Shreya.gpa=9.0;
    Shreya.address="Raipur";

    // Shivam's info
    Shivam.student_id=203034;
     Shivam.gpa=10.0;
     Shivam.address="Delhi";
    //  Khushboo's info

    Khushboo.student_id=203039;
     Khushboo.gpa=9.4;
     Khushboo.address="Noida";
    cout<<"Student id is :"<<Swati.student_id<<endl;
    cout<<"Student id is :"<<Shivam.student_id<<endl;
    cout<<"Student id is :"<<Shreya.student_id<<endl;
    cout<<"Student id is :"<<Khushboo.student_id<<endl;

    

}