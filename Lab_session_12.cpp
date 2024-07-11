// #include <iostream>
// using namespace std;

// int startl12()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 12\n" << endl;
//     return 0;
// }
// class Circle
// {
//     private:
//         double radius;

//     public:
//         void setRadius(double r)
//         {
//             radius = r;
//         }
//         friend void area(Circle c);
// };

// void area(Circle c)
// {
//     double a = 3.14 * c.radius * c.radius;
//     cout << "The area of the circle is: " << a << endl;
// }

// int main()
// {
//     startl12();
//     Circle c1;
//     double rd;
//     cout << "Enter radius of the circle: ";
//     cin >> rd;
//     c1.setRadius(rd);
//     area(c1);
//     return 0;
// }

#include <iostream>
using namespace std;

int startL12()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 12\n" << endl;
    return 0;
}
class Rectangle
{
    private:
        float length, width;

    public:
        void setData(float length, float width)
        {
            this->length = length;
            this->width = width;
        }
        friend void perimeter(Rectangle r);
};

void perimeter(Rectangle r)
{
    float perim = 2 * (r.length + r.width);
    cout << "Perimeter of Rectangle is: " << perim << endl;
}

int main()
{
    startL12();
    Rectangle r1;
    float l, w;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the width: ";
    cin >> w;
    r1.setData(l, w);
    perimeter(r1);
    return 0;
}
