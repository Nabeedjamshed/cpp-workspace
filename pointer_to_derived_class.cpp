#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Display a of base class: " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Display a of base class: " << var_base << endl;
        cout << "Display a of derived class: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // base class ke pointer ko point kradya derived class ke object se. lrkin agr is poiner se koi function call krege tu wo base class ka hi call hoga let say agr display call kre tu wo base class ka display call hoga kyuke ye pointer base class ka hai.This is called late binding, pointer jis class ka ha ussi ke saath bind krta hai usse hi late binding khete hai.Late binding, also known as dynamic binding or runtime polymorphism,
    base_class_pointer->var_base = 34;
    // // base_class_pointer->var_derived=99; // It throws an error
    base_class_pointer->display();

    DerivedClass *derived_class_pointer; // This is derived class pointer tu ye derived class ke display() function se bind hojaega. while base class pointer base class ke display() function ke saath bind hoga.
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->var_base = 77; // This will not throws an error bcz derived class publically inherite hoewi hai base class se tu derived class ka pointer base class ke data members ko access krskta hai.
    derived_class_pointer->display();

    // DerivedClass * derived_class_pointer;
    // derived_class_pointer = &obj_base; // This will throws an error reverse nhi krskte base class ka pointer derived class ke object ko tu point krskta but reverse is not possible.
    // In C++, you can assign a pointer of a derived class to a pointer of its base class, but the reverse is not true without explicit casting. This is due to the fact that the derived class may have additional members or functionality that the base class does not have, and allowing such a conversion could lead to accessing members or behaviors that do not exist in the base class.
    return 0;
}
// on runtime decide howa ke konsa display() function run hoga this is called run-time polymorphism.

/*
***virtual function***
A member function in the base class which is declared using virtual keyword is called virtual functions. They can be redefined in the derived class.
The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class then beside of the point that we have pointed our base call pointer to derived class object still the compiler would have called the “display” function of the base class because this is its default behavior as we have seen in the previous tutorial.

But we have used the “virtual” keyword with the “display” function of the base class to make is virtual function so when the display function is called by using the base class pointer the display function of the derived class will run because the base class pointer is pointing to the derived class object.

jb hum base class ka pointer bna kr usse derived class se point krrhe the tb bhi wo base class ka hi function run krrhe hai but if I want ke derived class ka function run ho nake base class ka tu hame base class ke function ko virtual banana parhega is ka mtlab ye hoga ke ye function bole ga ke agr meri class ka pointer ksi dosri class ko pointer krrha hai tu ussi class ka function run krna mera nhi krna.
*/

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() // virtual likhne se derived class ka function run howa bcz pointer derived class ke function ko point krrha tha.
    {
        cout << "Display a of base class: " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Display a of base class: " << var_base << endl;
        cout << "Display a of derived class: " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}