#include <iostream>
using namespace std;

class Number
{
    int a, b, c;

public:
    Number()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    Number(int num1, int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }
    Number(Number &obj)
    { // agr ye nhi bnaenge tu compiler apna copy constructor supply krega. First compiler program main check krta agr nho hai tu phr apna copy constructor provide krta hai.
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
        b = obj.b;
        c = obj.c;
    }
    void printdata()
    {
        cout << "The value is: " << a << endl;
        cout << "The value is: " << b << endl;
        cout << "The value is: " << c << endl;
    }
};
int main()
{
    Number x, y, z(30, 23, 4), z2;
    x.printdata();
    y.printdata();
    z.printdata();
    // Number z1(z); // Copy constructor invoked
    // z1.printdata();
    Number z1(z); // Copy constructor invoked
    z1.printdata();

    // z2 = z;   // Copy constructor not invoked. Jis line mai object bn rha agr whi copy constructor ko call kedain means ek object ki value dosre mai assaign kr dain tu copy sonstructor invoked hojata hai but agr object upper bnaya ho like z2 or niche us mai value assign krain tu is case mai copy constructor jo aap ne bnaya hai wo call nhi hogaa compiler apna default copy constructor isse supply krega.
    // z2.printdata();

    // Number z3 = z;  // Copy constructor invoked
    // z3.printdata();
    return 0;
}

/*
Copy Constructor in C++:
A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we
can use a copy constructor. If no copy constructor is written in the program compiler will supply its own copy constructor.
*/