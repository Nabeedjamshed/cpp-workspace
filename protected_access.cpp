#include <iostream>
using namespace std;

class Base
{
private:
    int a;
    int b;

public:
    void setdata()
    {
        a = 20;
        b = 30;
    }
    void getdata1()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }

protected:
    int c = 2; // c is protected member tu c . lgakr tu access nhi krskte but c inherit hoskta.
};
class Derived : public Base // agr public ki jga protected likk daain tu setdata or getdata1 ko . lgajr use nhi krskta bcz jb drived class ka object bnaenge tu drived class mai base class ke method and attribute protected hokr aarhe bcz protected mode use krrhe and agr ye protected hokr aarhe tu inhe . lgakr use nhi krskte agr derived class ka object bnarhe. Agr base class ka object bnae tu setdata or getdata1 . lgakr use krskte bcz in base class ye public hai.
{
public:
    int d;
    void getdata2()
    {
        d = c;
        cout << "The value of d is: " << d << endl;
    }
};
int main()
{
    Derived dr;
    dr.setdata();
    dr.getdata1();
    dr.getdata2();
    return 0;
}

/*
Protected Access Modifiers in C++
Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private 
access modifiers cannot be accessed in the derived class. A table is shown below which shows the behavior of access modifiers when they are derived 
“public”, “private”, and “protected”.

//	                       Public Derivation      	   Private Derivation    	   Protected Derivation
Private members           	Not Inherited              	Not Inherited              	Not Inherited              
Protected members           Protected                   Private                     Protected                    
Public members           	Public	                    Private                     Protected       
*/