// #include<iostream>
// using namespace std;
// int main() {
//     int a = 4, b = 5;
    // Arithmetic Operators
    // cout<<"The value of a + b is: "<<a+b<<endl;
    // cout<<"The value of a - b is: "<<a-b<<endl;
    // cout<<"The value of a * b is: "<<a*b<<endl;
    // cout<<"The value of a / b is: "<<a/b<<endl;
    // cout<<"The value of a % b is: "<<a%b<<endl;
    // cout<<"The value of a++ b is: "<<a++<<endl;
    // cout<<"The value of a-- is: "<<a--<<endl;
    // cout<<"The value of ++a is: "<<++a<<endl;
    // cout<<"The value of --a b is: "<<--a<<endl;
    // Assignment Operators --> Used to assign value in to variable
    // int a = 4, b = 5;
    
    //Comparision Operators
    // cout<<"The value of a == b is: "<<(a==b)<<endl;
    // cout<<"The value of a != b is: "<<(a!=b)<<endl;
    // cout<<"The value of a <= b is: "<<(a<=b)<<endl;
    // cout<<"The value of a >= b is: "<<(a>=b)<<endl;
    // cout<<"The value of a < b is: "<<(a<b)<<endl;
    // cout<<"The value of a > b is: "<<(a>b)<<endl;

    //Logical Operators
    // cout<<"The value of ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl; //OR
    // cout<<"The value of ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; //AND
    // cout<<"The value of ((a==b) ^ (a<b)) is: "<<((a==b) ^ (a<b))<<endl;   //XOR
    // cout<<"The value of (!(a==b)) is: "<<(!(a==b))<<endl;                 //NOT 

    //Scope resolution operator--> :: --> for this operator we can extract global variable in main program
#include<iostream>
// #include<typeinfo>
using namespace std;
// int c = 45;
// int main() {
    // int a, b, c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";  
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is: "<<::c;
//     float d = 34.5;
//     cout << "The type of d is: " << typeid(d).name() << endl;
//     return 0;
    
// }
int main() {
    // float d = 3.14f; // where f or F represent this number is floating number
    // long double e = 3.14l; // where l or L represent this number is long double number
    // cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e;
    // cout<<"The size of 3.14 is: "<<sizeof(3.14)<<endl; // --> this value consider as double value
    // cout<<"The size of 3.14f is: "<<sizeof(3.14f)<<endl; // size of operator se ksi bhi value ka size pta krte
    // cout<<"The size of 3.14F is: "<<sizeof(3.14F)<<endl;
    // cout<<"The size of 3.14l is: "<<sizeof(3.14l)<<endl;
    // cout<<"The size of 3.14L is: "<<sizeof(3.14L)<<endl;

    //******************Reference Variables**********************
    // reference variables means hum variables ke different names rakh dain 
    //like ek koi variable x hai us ka reference variable y bna de.
    //like Nabeed --> Sonu --> Leader --> Coder, so kitne bhi reference hojae 
    //sb nabeed hi hai same as original variable tu 1 hi hoga baqi uske reference honge 
    // int x = 45;
    // int & y = x; // y = x bhi yhi kaam krrha
    // cout<<"The value of x is: "<<x<<endl;
    // cout<<"The value of y is: "<<y<<endl;

    //******************Type Casting**********************
    // To convert one data type into another data type is called Type Casting.
    // Type casting means variable ki type ko change krna like int ko float bnado ya float ko int etc
    // float a = 34.45;
    // cout<<"The value of a is: "<<int(a)<<endl;
    // int b = 45;
    // cout<<"The value of b is: "<<float(b);

    //Functions ek specific task ko perform krta.Due to functon debugging mai help hoti.

    return 0;

}
