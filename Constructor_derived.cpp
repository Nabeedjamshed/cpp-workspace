#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called"<<endl;
    }
    void printdata1()
    {
        cout << "The value of print data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called"<<endl;
    }
    void printdata2()
    {
        cout << "The value of print data1 is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called"<<endl;
    }
    void printdata3()
    {
        cout << "The value of derived1 is: " << derived1 << endl;
        cout << "The value of derived2 is: " << derived2 << endl;
    }
};
int main()
{
    Derived nabeed(1, 2, 3, 4);
    nabeed.printdata1();
    nabeed.printdata2();
    nabeed.printdata3();
    return 0;
}

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};


In case 1, class “B” is inheriting class “A”, so the order of execution will be that first the constructor of class “A” will be executed and then the constructor of class “B” will be executed.
In case 2, class “A” is inheriting two classes “B” and “C”, so the order of execution will be that first constructor of class “B” will be executed and then the constructor of class “C” will be executed and at the end constructor of class “A” will be executed.
In case 3, class “A” is inheriting two classes “B” and virtual class “C”, so the order of execution will be that first constructor of class “C” will be executed because it is a virtual class and it is given more preference and then the constructor of class “B” will be executed and at the end constructor of class “A” will be executed.
*/