#include <iostream>
using namespace std;

class Complex; //---> This is Forward declaration

class Calculator
{
public:
    int sumrealpart(Complex, Complex);
    int sumcomppart(Complex, Complex);
};

class Complex
{
    int a, b;
    friend class Calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};
int Calculator ::sumrealpart(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
    // int y = (o1.b + o2.b);
    // cout<<"The sum of the real part is: "<<x<<endl;
    // cout<<"The sum of the imaginary part is: "<<y<<"i"<<endl;
}
int Calculator ::sumcomppart(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex c1, c2;
    c1.setdata(1, 4);
    c2.setdata(2, 3);
    Calculator cal;
    int res = cal.sumrealpart(c1, c2);
    cout << "The sum of the real part is: " << res << endl;
    int resc = cal.sumcomppart(c1, c2);
    cout << "The sum of the imaginary part is: " << resc << endl;
    return 0;
}


#include<iostream>
using namespace std;

class Y;
class X{
    int value;
    public:
    void setdata(int a) {
        value = a;
    }
    friend void add(X, Y);
};
class Y{
    int num;
    public:
    void setdata(int b) {
        num = b;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2) {
    cout<<"The sum is: "<<o1.value+o2.num;
}
int main() {
    X c1;
    c1.setdata(3);
    Y c2;
    c2.setdata(6);
    add(c1, c2);
    return 0;
}

#include<iostream>
using namespace std;

class c2;
class c1{
    int value;
    public:
        void initdata(int a) {
            value =  a;
        }
        void display() {
            cout<<value<<endl;
        }
        friend void swp(c1 &, c2 &);

};
class c2{
    int num;
    public:
        void initdata(int b) {
            num =  b;
        }
        void display() {
            cout<<num<<endl;
        }
        friend void swp(c1 &, c2 &);
};

void swp(c1 &o1, c2 &o2) {
    int temp = o1.value;
    o1.value = o2.num;
    o2.num = temp; 
}
int main() {
    c1 x;
    x.initdata(34);
    c2 y;
    y.initdata(67);
    swp(x, y);
    cout<<"The value is: ";
    x.display();
    cout<<"The value is: ";
    y.display();
    return 0;
}

#include<iostream>
using namespace std;

class Complex;
class Calculator{
    public:
        int sumrealpart(Complex, Complex);
        int sumcomppart(Complex, Complex);

};
class Complex{
    int a, b;
    friend class Calculator;
    public:
        int setdata(int a1, int b1) {
            a = a1;
            b = b1;
        }
};
int Calculator::sumrealpart(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}
int Calculator::sumcomppart(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}
int main() {
    Complex c1, c2;
    c1.setdata(3, 4);
    c2.setdata(5, 6);
    Calculator cal, res;
    int sum1;
    sum1 = cal.sumrealpart(c1, c2);
    cout<<"The sum of the real part is: "<<sum1<<endl;
    int sum2;
    sum2 = res.sumcomppart(c1, c2);
    cout<<"The sum of the real part is: "<<sum2<<endl;
    return 0;
}