// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int id, salary;
//     string name;
// public:
//     void setid(void)
//     {
//         cout<<"Enter the name of an employee: ";
//         cin>>name;
//         cout << "Enter the id of "<<name<<": "<<endl;
//         cin >> id;
//         cout << "Enter the salary of "<<name<<": "<<endl;
//         cin>>salary;
//     }
//     void getid(void)
//     {
//         cout << "The name of an employee is: " << name << endl;
//         cout << "The id of "<<name<<" is: "<<id<<endl;
//         cout << "The salary of "<<name<<" is: "<<salary<<endl;
//     }
// };
// int main()
// {
//     Employee fb[4]; //--> make array of object
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
//     return 0;
// }

// Function ko ksi class ka object bhi paas krskte

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatasum(Complex o1, Complex o2) //---> like this we paas object as function argument.
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printdata(void)
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // Complex c1, c2, c3;
    // c1.setdata(2, 3);
    // c1.printdata();

    // c2.setdata(4, 5);
    // c2.printdata();

    // c3.setdatasum(c1, c2);
    // c3.printdata();
    
    return 0;
}

