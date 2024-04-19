#include<iostream>
using namespace std;

class A{
    int a;
    int b;
    public:
        // A(int i, int j) : a(i), b(j)
        // A(int i, int j) : a(i+j), b(j)
        A(int i, int j) : b(j), a(i+b) // --> Ye garbage value dega bcz first int a likha hai then int b tu b main phele value assign nhi krskte. If you want ke ye line garbage value nhi de tu int b phele likhdo.
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main() {
    A nabeed(2,3);
    return 0;
}

/*
Initialization list in Constructors in C++
The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in constructors is shown below.

Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
Code Snippet 1: Initialization list in Constructors Syntax

As shown in a code snippet 1,

A constructor is written first and then the initializations section is written
In the initialization section, the data members are initialized
*/