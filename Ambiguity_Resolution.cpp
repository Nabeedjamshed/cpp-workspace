// Ambiguity 1
#include <iostream>
using namespace std;

// class Base1
// {
// public:
//     void show()
//     {
//         cout << "Hello";
//     }
// };

// class Base2
// {
// public:
//     void show()
//     {
//         cout << "How are you?";
//     }
// };

// class Base3
// {
// public:
//     void show()
//     {
//         cout << "Thank You";
//     }
// };

// class Derived : public Base1, public Base2, public Base3
// {
//     int a;

// public:
//     void show()
//     {
//         Base2 ::show(); // Agr functions ke name same ho tu in tanha se ambiguity ko resolve krskte hai means konsi class ka wo function run hoga.
//     }
// };
// int main()
// {
//     Derived dr;
//     dr.show();
//     return 0;
// }

/*
Ambiguity Resolution in Inheritance:
Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the
 base classes have functions with the same name. So it will confuse derived class to choose from similar name functions.
 To solve this ambiguity scope resolution operator is used “::”
*/
/*
Ambiguity 2 ---> agr Base class or derived class mai same name se method hai or agr derived ka object bna kr say method ko call
karain agr derived mai us name se function nhi hai tu base ka method run hojaega or agr derived mai us name se method hai tu wo
run hoga derived ka say() mathod base ke say method ko overwrite krdega or run hojae ga it means ambiguity aae or wo automatically
solve hogae.
*/
class Base
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class Derived : public Base
{
public:
    void say()
    {
        cout << "Hello World how are you?" << endl;
    }
};
int main()
{
    Base b;
    b.say();
    Derived d;
    d.say();
    return 0;
}