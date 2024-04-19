#include <iostream>
using namespace std;

// In class same name se different constructor bna skte hr apne argument ke hisaab se apni values lekr execute hoga.
class Complex
{
    int a, b, c;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printdata()
    {
        cout << "Your value is: " << a << " + " << b << "i" << endl;
        cout << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printdata();

    Complex c2(4);
    c2.printdata();

    Complex c3;
    c3.printdata();

    return 0;
}
/*
Constructor Overloading in C++

Constructor overloading is a concept in which one class can have multiple constructors with different parameters. 
The main thing to note here is that the constructors will run according to the arguments for example if a program 
consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler 
will automatically run the constructor which is taking 1 argument.

*/