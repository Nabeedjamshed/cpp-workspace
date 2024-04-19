#include <iostream>
using namespace std;

class GrandFather
{
    string name;
    int age, salary;

public:
    GrandFather(string n, int a, int s)
    {
        name = n;
        age = a;
        salary = s;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Father : public GrandFather
{
    string car, banglo;

public:
    Father(string n, int a, int s, string c, string b) : GrandFather(n,a,s){
        car = c;
        banglo = b;
    }
    void fathershow()
    {
        show();
        cout << "Car: " << car << endl;
        cout << "Banglo: " << banglo << endl;
    }
};
class Son : public Father
{
    string profession, p_lang;

public:
    Son(string n, int a, int s, string c, string b, string p, string l) : Father(n, a, s, c, b){
        profession = p;
        p_lang = l;
    }
    void sonshow()
    {
        fathershow();
        cout << "Profession: " << profession << endl;
        cout << "Programming Language: " << p_lang << endl;
    }
};

int main()
{
    GrandFather g("Chote", 80, 50000);
    g.show();
    cout << endl;

    Father f("Jamshaid", 43, 80000, "Mercedes", "Banigala");
    f.fathershow();
    cout << endl;

    Son s("Nabeed", 19, 20000000, "Toyota V8", "New York", "Software Developer", "C++");
    s.sonshow();
    return 0;
}
/*
If we are inheriting B from A and C from B: [ A--->B--->C ]
1. A is the base class for B and B is the base class for C.
2. A-->B-->C is called Inheriting Path.(Multilevel mai ek class dosre se connect hotitu ek Inheriting path bn jata)
*/