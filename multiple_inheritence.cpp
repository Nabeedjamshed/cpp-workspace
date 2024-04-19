#include <iostream>
using namespace std;

class Father
{
private:
    string name, profession;
    int age;

public:
    Father(string n, string p, int a)
    {
        name = n;
        profession = p;
        age = a;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Profession: " << profession << endl;
        cout << "Age: " << age << endl;
    }
};
class Mother
{
private:
    string smile, car, hobby;

public:
    Mother(string s, string c, string h)
    {
        smile = s;
        car = c;
        hobby = h;
    }
    void show()
    {
        cout << "Smile: " << smile << endl;
        cout << "Car: " << car << endl;
        cout << "Hobby: " << hobby << endl;
    }
};
class Son : public Father, public Mother
{
private:
    string lang, designation;

public:
    Son(string n, string p, int a, string s, string c, string h, string l, string d)
        : Father(n, p, a), Mother(s, c, h), lang(l), designation(d)
    {
    }
    void show()
    {
        Father ::show();
        Mother ::show();
        cout << "Designation: " << designation << endl;
        cout << "Programming Language: " << lang << endl;
    }
};
int main()
{
    string n, p, s, c, h, l, d;
    int a;
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the profession: ";
    cin >> p;
    cout << "Enter the age: ";
    cin >> a;
    cout << "What is your face expression: ";
    cin >> s;
    cout << "Enter the car name: ";
    cin >> c;
    cout << "Enter the hobby: ";
    cin >> h;
    cout << "Enter the programming language :";
    cin >> l;
    cout << "Enter the designation: ";
    cin >> d;
    // Father j(n, p, a);
    // cout << endl;
    // Mother hu(s, c, h);
    cout << endl;
    Son nabeed(n, p, a, s, c, h, l, d);
    nabeed.show();
    return 0;
}