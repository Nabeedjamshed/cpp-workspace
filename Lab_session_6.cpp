// #include <iostream>
// using namespace std;

// int startl6()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 06\n" << endl;
//     return 0;
// }

// class Rectangle
// {
//     private:
//         float length, width;

//     public:
//         Rectangle(float length, float width)
//         {
//             this->length = length;
//             this->width = width;
//         }
//         float calculate_area()
//         {
//             float area = length * width;
//             return area;
//         }
//         int calculate_parameter()
//         {
//             int parameter = 2 * (length + width);
//             return parameter;
//         }
// };

// int main()
// {
//     startl6();
//     float l, w;
//     cout << "Enter the length: ";
//     cin >> l;
//     cout << "Enter the width: ";
//     cin >> w;
//     Rectangle r1(l, w);
//     float ar = r1.calculate_area();
//     int par = r1.calculate_parameter();
//     cout << "Area: " << ar << endl;
//     cout << "Parameter: " << par << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int startL6()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 06\n" << endl;
//     return 0;
// }

// class Circle
// {
//     private:
//         int radius;

//     public:
//         Circle(int radius)
//         {
//             this->radius = radius;
//         }
//         float calculate_radius()
//         {
//             float rad = (3.14 * pow(radius, 2));
//             return rad;
//         }
//         float cal_circumference()
//         {
//             float circum = (2 * 3.14 * radius);
//             return circum;
//         }
// };
// int main()
// {
//     startL6();
//     int r;
//     cout << "Enter the radius: ";
//     cin >> r;
//     Circle c1(r);
//     float ra = c1.calculate_radius();
//     float cir = c1.cal_circumference();
//     cout << "Area: " << ra << endl;
//     cout << "Circumference: " << cir << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL6()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 06\n" << endl;
//     return 0;
// }

// class Employee
// {
//     private:
//         string name;
//         int salary;

//     public:
//         Employee(string name, int salary)
//         {
//             this->name = name;
//             this->salary = salary;
//         }
//         void display()
//         {
//             cout << "Employee Details" << endl;
//             cout << "Name: " << name << endl;
//             cout << "Salary: " << salary << endl;
//         }
// };
// int main()
// {
//     startL6();
//     string n;
//     int s;
//     cout << "Enter the name: ";
//     cin >> n;
//     cout << "Enter the salary: ";
//     cin >> s;
//     cout << endl;
//     Employee e1(n, s);
//     e1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL6()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 06\n" << endl;
//     return 0;
// }

// class BankAccount
// {
//     private:
//         int accountNumber, balance;
//         string accountHolder;

//     public:
//         BankAccount(int accountNumber, string accountHolder, int balance)
//         {
//             this->accountNumber = accountNumber;
//             this->accountHolder = accountHolder;
//             this->balance = balance;
//         }
//         void display()
//         {
//             cout << "Account Number: " << accountNumber << endl;
//             cout << "Account Holder: " << accountHolder << endl;
//             cout << "Balance: " << balance << endl;
//         }
//         int deposit(int amount)
//         {
//             balance = balance + amount;
//             display();
//         }
//         int withdraw(int amount)
//         {
//             if (amount > balance)
//             {
//                 cout << "Insufficient funds or invalid amount!" << endl;
//             }
//             else
//             {
//                 balance = balance - amount;
//                 display();
//             }
//         }
// };
// int main()
// {
//     startL6();
//     int acc_no, b;
//     string acc_hol;
//     cout << "Enter account number: ";
//     cin >> acc_no;
//     cout << "Enter account holder: ";
//     cin >> acc_hol;
//     cout << "Enter current balance: ";
//     cin >> b;
//     BankAccount ba(acc_no, acc_hol, b);
//     cout << endl;
//     ba.display();
//     cout << endl;
//     int amt1;
//     cout << "Enter deposit amount: ";
//     cin >> amt1;
//     ba.deposit(amt1);
//     cout << endl;
//     int amt2;
//     cout << "Enter withdraw amount: ";
//     cin >> amt2;
//     ba.withdraw(amt2);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL6()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 06\n" << endl;
//     return 0;
// }

// class Car
// {
//     private:
//         string brand, model;
//         int year;

//     public:
//         Car(string brand, string model, int year)
//         {
//             this->brand = brand;
//             this->model = model;
//             this->year = year;
//         }
//         void display()
//         {
//             cout << "Brand: " << brand << endl;
//             cout << "Model: " << model << endl;
//             cout << "Year: " << year << endl;
//         }
// };
// int main()
// {
//     startL6();
//     string b, m;
//     int y;
//     cout << "Enter car brand: ";
//     cin >> b;
//     cout << "Enter car model: ";
//     cin >> m;
//     cout << "Enter launching year: ";
//     cin >> y;
//     cout << endl;
//     Car c(b, m, y);
//     c.display();
//     return 0;
// }

#include <iostream>
using namespace std;

int startL6()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 06\n" << endl;
    return 0;
}

class Fraction
{
    private:
        int numerator, denominator;

    public:
        Fraction(int numerator, int denominator)
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        int gcd(int a, int b)
        {
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        void calculation()
        {
            int divisor = gcd(numerator, denominator);
            numerator = numerator / divisor;
            denominator = denominator / divisor;
        }

        void display()
        {
            cout << "Simplified fraction is: " << numerator << "/" << denominator << endl;
        }
        void check()
        {
            if (denominator == 0)
            {
                cout << "Denominator cannot be zero.";
            }
            else
            {
                display();
            }
        }
};

int main()
{
    startL6();
    int n, d;
    cout << "Enter numerator: ";
    cin >> n;
    cout << "Enter denominator: ";
    cin >> d;

    Fraction f(n, d);
    f.calculation();
    f.check();
    return 0;
}
