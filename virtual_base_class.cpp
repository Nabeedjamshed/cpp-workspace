// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int a;
//     int b;
//     void show(int x, int y)
//     {
//         a = x;
//         b = y;
//         cout<<"The ans is: "<<a+b<<endl;
//     }
// };
// class B: virtual public A{ // By using virtual keyword B and C dono mao show() method tha or in dono se D bani tu 2 baar D mai show()
// //                            aajata tu duplication and ambiguity se bachne ke lie virtual use kya is ki wj ase srf ek baar hi show()
// //                            method D mai gya.A class ke jitne bhi member functions the wo D class mai 2 2 bsr aagae.ty ye ambiguity
// //                            hogae duplication aagae tu isse solve krne ke lie virtual key word ka use krte hai.
//     public:
//     int c;
// };

// class C: virtual public A{
//     public:
//     int d;
// };

// class D: public B,public C{
//     int f;
// };

// int main() {
//     D dr;
//     dr.show(3,4);
//     return 0;
// }
/*
Virtual Base Class in C++:

The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.
For example: suppose we created a class “A” and two classes “B” and “C”, are being derived from class “A”. But once
we create a class “D” which is being derived from class “B” and “C”.

1. Class “A” is a parent class of two classes “B” and “C”
2. And both “B” and “C” classes are the parent of class “D”
The main thing to note here is that the data members and member functions of class “A” will be inherited twice in class “D” because class
“B” and “C” are the parent classes of class “D” and they both are being derived from class “A”.
So when the class “D” will try to access the data member or member function of class “A” it will cause ambiguity for the compiler
and the compiler will throw an error. To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual
base class “virtual” keyword is used.
When one class is made virtual then only one copy of its data member and member function is passed to the classes inheriting it.
So in our example when we will make class “A” a virtual class then only one copy of the data member and member function will be
passed to the classes “B” and “C” which will be shared between all classes. This will help to solve the ambiguity.
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_rollno(int a)
    {
        roll_no = a;
    }
    void print_rollno(void)
    {
        cout << "Your print no is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Math marks: " << math << endl
             << "Physics marks: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your score is: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    int total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_rollno(); // agr virtual nhi lgaenge tu ye function Result mai 2 baar aajaega bcz Result class Test or Sports se bn rhi hai or ye dono classes Student se bn rhi hai tu student ka print_rollno() in dono mai aajaega tu jab indono classes se Result bnegi tu ye method 2 baar result mai aajaega tu is ambiguity duplication ko solve krne ke lie virtual keyword use krte hai.
        print_marks();
        print_score();
        cout << "Your total marks is: " << total << endl;
    }
};
int main()
{
    Result nabeed;
    nabeed.set_rollno(101);
    nabeed.set_marks(96.9, 98.0);
    nabeed.set_score(10);
    nabeed.display();
    return 0;
}