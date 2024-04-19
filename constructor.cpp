// #include<iostream>
// using namespace std;

// class Complex{
//     int a, b, c, d;
//     public:
//     Complex(int w, int x, int y, int z); // ---> This is constructor declaration,
//     void printnumber() {
//         cout<<"Your value is: "<<a<<" + "<<b<<"i"<<endl;
//         cout<<"Your value is: "<<c<<" + "<<d<<"i"<<endl;
//         cout<<"The sum is: "<<a+c<<" + "<<b+d<<"i"<<endl;
//         cout<<endl;
//     }
// };
// Complex :: Complex(int w=11, int x=12, int y=13, int z=14) { // This is default constructor it accept no argument.
//     a = w;
//     b = x;
//     c = y;
//     d = z;
// }
// int main() {
//     Complex c1; //---> without constructor ek alag function bnana parhtha jo data ko set krta, 
// //                     but due to constructor jese hi object bnega uski value automatically set hojaegi. 
// //                     Complex function mai jo kuch bhi likha hai wo sb is object ke lie run hojaega.
//     c1.printnumber();
//  // This is also an example of default constructor agr values paas nhi krenge tu default values print 
//  // hojaengi agr paas krenge tu jo values paas ki hai whi print hongi.

//     return 0;
// }

/*
******* Constructors in C++ *******

A constructor is a special member function with the same name as of the class. 
The constructor doesn’t have a return type. Constructors are used to initialize 
the objects of its class (jese hi class ka jo object bna hai tu usse whi ke whi initialize krdega constructor). 
Constructors are automatically invoked(call) whenever an object is created.

******** Important Characteristics of Constructors in C++ ********

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/

//**********Parameterized Constructor***********
#include<iostream>
#include<cmath>
using namespace std;

class Point;
class Calculator{
    public:
    int distance(Point, Point);
};
class Point{
    int x, y;
    public:
    friend class Calculator;
    Point(int a, int b) { // ---> This is parameterized constructor it takes two argument.
        x = a;
        y = b;
    }
    void display() {
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

int Calculator:: distance(Point o1, Point o2) {
        int diff1, diff2;
        diff1 = (o2.x - o1.x);
        diff2 = (o2.y - o2.y);
        int sq1, sq2;
        sq1 = pow(diff1, 2);
        sq2 = pow(diff2, 2);
        int add;
        add = sq1 + sq2;
        int sr;
        sr = sqrt(add);
        cout<<"The distance between two points is: "<<sr;
    };

int main() {
    Point p(3, 4);
    p.display();
    Point q(6 ,4);
    q.display();
    Calculator cal;
    cal.distance(p, q);
    return 0;
}