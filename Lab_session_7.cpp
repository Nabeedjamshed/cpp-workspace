// #include <iostream>
// using namespace std;

// int startl7()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 07\n" << endl;
//     return 0;
// }
// class Vehicle
// {
//     public:
//         void move()
//         {
//             cout << "Vehicle is moving" << endl;
//         }
// };

// class Car : public Vehicle
// {
//     public:
//         void move()
//         {
//             cout << "Car is moving" << endl;
//         }
// };
// int main()
// {
//     startl7();
//     Vehicle v1;
//     v1.move();
//     Car c1;
//     c1.move();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL7()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 07\n" << endl;
//     return 0;
// }
// class Person
// {
//     private:
//         string name;
//         int age;

//     public:
//         Person(string name, int age)
//         {
//             this->name = name;
//             this->age = age;
//         }
//         void display1()
//         {
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//         }
// };

// class Student : public Person
// {
//     private:
//         int studentID;

//     public:
//         Student(string name, int age, int studentID) : Person(name, age)
//         {
//             this->studentID = studentID;
//         }
//         void display2()
//         {
//             display1();
//             cout << "Student ID: " << studentID << endl;
//         }
// };

// int main()
// {
//     startL7();
//     Person p1("Nabeed", 19);
//     p1.display1();
//     cout << endl;

//     Student s1("Talha", 18, 101);
//     s1.display2();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL7()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 07\n" << endl;
//     return 0;
// }
// class Shape
// {
//     public:
//         void draw()
//         {
//             cout << "Drawing Shape" << endl;
//         }
// };
// class Circle : public Shape
// {
//     public:
//         void draw()
//         {
//             cout << "Drawing Circle" << endl;
//         }
// };
// class Square : public Shape
// {
//     public:
//         void draw()
//         {
//             cout << "Drawing Square" << endl;
//         }
// };
// int main()
// {
//     startL7();
//     Shape s1;
//     s1.draw();
//     Circle c1;
//     c1.draw();
//     Square sq;
//     sq.draw();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL7()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 07\n" << endl;
//     return 0;
// }
// class Base
// {
//     private:
//         int privateVar = 0; // Accessible only within Base
//     protected:
//         int protectedVar = 0; // Accessible within Base and derived classes
//     public:
//         int publicVar = 0; // Accessible from anywhere
// };

// class Derived1 : public Base
// {
//     public:
//         void display()
//         {
//             // cout << "Private Var: " << privateVar << endl; // Error: privateVar is private in Base
//             cout << "Protected Var: " << protectedVar << endl; // Accessible
//             cout << "Public Var: " << publicVar << endl;       // Accessible
//         }
// };

// class Derived2 : protected Base
// {
//     public:
//         void display()
//         {
//             // cout << "Private Var: " << privateVar << endl; // Error: privateVar is private in Base
//             cout << "Protected Var: " << protectedVar << endl; // Accessible
//             cout << "Public Var: " << publicVar << endl;       // Accessible
//         }
// };

// class Derived3 : private Base
// {
//     public:
//         void display()
//         {
//             // cout << "Private Var: " << privateVar << endl; // Error: privateVar is private in Base
//             cout << "Protected Var: " << protectedVar << endl; // Accessible
//             cout << "Public Var: " << publicVar << endl;       // Accessible
//         }
// };

// int main()
// {
//     startL7();
//     Derived1 d1;
//     d1.display(); // Only publicVar and protectedVar are accessible

//     Derived2 d2;
//     d2.display(); // Only publicVar and protectedVar are accessible

//     Derived3 d3;
//     d3.display(); // Only publicVar and protectedVar are accessible

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int startL7()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 07\n" << endl;
    return 0;
}
class Shape
{
    protected:
        string color;

    public:
        Shape(string color)
        {
            this->color = color;
        }

        virtual double area() = 0;

        virtual void display()
        {
            cout << "Color: " << color << endl;
        }
};

class Rectangle : public Shape
{
    private:
        double width, height;

    public:
        Rectangle(string color, double width, double height) : Shape(color)
        {
            this->width = width;
            this->height = height;
        }

        double area()
        {
            return width * height;
        }

        void display()
        {
            cout << "Color: " << color << endl;
            cout << "Width: " << width << endl;
            cout << "Height: " << height << endl;
            cout << "Area: " << area() << endl;
        }
};

class Circle : public Shape
{
    private:
        double radius;

    public:
        Circle(string color, double radius) : Shape(color)
        {
            this->radius = radius;
        }

        double area()
        {
            return (3.14 * pow(radius, 2));
        }

        void display()
        {
            cout << "Color: " << color << endl;
            cout << "Radius: " << radius << endl;
            cout << "Area: " << area() << endl;
        }
};

int main()
{
    startL7();
    Rectangle r1("Blue", 3.2341, 4.4462);
    Circle c1("White", 2.4572);

    Shape *shapes[2];
    shapes[0] = &r1;
    shapes[1] = &c1;

    shapes[0]->display();
    cout << endl;
    shapes[1]->display();

    return 0;
}
