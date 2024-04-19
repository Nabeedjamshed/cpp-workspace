// #include<iostream>
// using namespace std;

// class Employee{
//     string name;
//     int id, age;
//     public:
//     Employee(string n, int inpid, int a){
//         name = n;
//         id = inpid;
//         age = a;
//     }
//     void getdata() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"ID: "<<id<<endl;
//         cout<<"Age: "<<age<<endl;
//     }
// };
// class Programmer : public Employee{
//     string lang, profession;
//     public:
//     Programmer(string n, int inpid, int a, string l, string p)
//      : Employee(n,inpid,a), lang(l), profession(p)
//     {
//     }
//     void get() {
//         getdata();
//         cout<<"Language: "<<lang<<endl;
//         cout<<"Profession: "<<profession<<endl;
//     }
// };
// int main() {
//     Programmer nabeed("Nabeed", 101, 19, "C++", "Software Developer");
//     nabeed.getdata(); // Agr visiblity mode public nhi likhenge tu getdata as a private aaega in function class tu ' . ' lgakr isse use nhi krskte.
//     cout<<endl;
//     nabeed.get();

//     return 0;
// }

/*
Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

As shown in a code snippet 1,

After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name.

Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/


// // PUBLIC VISIBLITY
// #include <iostream>
// using namespace std;

// class Base
// {
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void Base :: setdata() {
//     data1 = 10;
//     data2 = 20;
// }
// int Base :: getdata1() {
//     return data1;
// }
// int Base :: getdata2() {
//     return data2;
// }

// class Derived : public Base{
//     int data3;
//     public:
//     int process();
//     void display();
// };
// int Derived :: process() {
//     return data3 = data2 * getdata1();
// }
// void Derived :: display() {
//     cout<<"The value of data 1 is: "<<getdata1()<<endl;
//     cout<<"The value of data 2 is: "<<data2<<endl;
//     cout<<"The value of data 3 is: "<<data3<<endl;
// }
// int main()
// {
//     Derived dr;
//     dr.setdata();
//     dr.process();
//     dr.display();
//     return 0;
// }


// PRIVATE VISIBLITY
#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base :: setdata() {
    data1 = 10;
    data2 = 20;
}
int Base :: getdata1() {
    return data1;
}
int Base :: getdata2() {
    return data2;
}

class Derived : private Base{
    int data3;
    public:
    int process();
    void display();
};
int Derived :: process() {
    setdata();
    return data3 = data2 * getdata1();
}
void Derived :: display() {
    cout<<"The value of data 1 is: "<<getdata1()<<endl;
    cout<<"The value of data 2 is: "<<data2<<endl;
    cout<<"The value of data 3 is: "<<data3<<endl;
}
int main()
{
    Derived dr; 
    // dr.setdata(); // agr private visiblity hai tu ye . lga kr access nhi kr skte bcz ye as a private Derived class mai aaya hai.Derived class ke ksi method mai call keke use krskte hai means ye private bn gya hai ti class mai hi acess ho skta class ke bahr nhi hosjta.
    dr.process();
    dr.display();
    return 0;
}