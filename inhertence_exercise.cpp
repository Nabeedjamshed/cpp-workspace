#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    float a, b;

public:
    void set_data1(float x, float y)
    {
        a = x;
        b = y;
    }
    void display1()
    {
        cout << "The addition of two numbers is: " << a + b << endl;
        cout << "The subtraction of two numbers is: " << a - b << endl;
        cout << "The multiplication of two numbers is: " << a * b << endl;
        cout << "The division of two numbers is: " << a / b << endl;
    }
};
class ScientificCalculator
{
protected:
    double num1;

public:
    void set_data2(double x)
    {
        num1 = x;
    }
    void display2()
    {
        cout << "The cosine of the number is: " << cos(num1) << endl;
        cout << "The cosine of the number is: " << sin(num1) << endl;
        cout << "The cosine of the number is: " << tan(num1) << endl;
        cout << "The cosine of the number is: " << sqrt(num1) << endl;
        cout << "The cosine of the number is: " << pow(num1, 2) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void show()
    {
        cout << "Thank You" << endl;
    }
};
int main()
{
    HybridCalculator h;
    h.set_data1(3, 4);
    h.display1();
    h.set_data2(9);
    h.display2();
    h.show();
    return 0;
}