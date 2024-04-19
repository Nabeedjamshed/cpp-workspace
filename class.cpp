// #include<iostream>
// using namespace std;

// Classes are custom datatype.

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setdata(int a1, int b1, int c1);
//         void getdata()
//         {
//             cout<<"The value of a is: "<<a<<endl;
//             cout<<"The value of b is: "<<b<<endl;
//             cout<<"The value of c is: "<<c<<endl;
//             cout<<"The value of d is: "<<d<<endl;
//             cout<<"The value of e is: "<<e<<endl;
//         }
// };
// void Employee :: setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main()
// {
//     Employee nabeed;
//     nabeed.d = 34;
//     nabeed.e = 54;
//     nabeed.setdata(2, 5, 9);
//     nabeed.getdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Animal
// {
//     private:
//         string name;
//         int age;
//     public:
//         string sound, food, genter;
//         void setdata(string name1, int age1);
//         void getdata()
//         {
//             cout<<"Animal name is: "<<name<<endl;
//             cout<<"Animal age is: "<<age<<endl;
//             cout<<"Animal sound is: "<<sound<<endl;
//             cout<<"Food that eaten by Animal is: "<<food<<endl;
//             cout<<"Animal genter is: "<<genter<<endl;
//         }
// };
// void Animal :: setdata(string name1, int age1)
// {
//     name = name1;
//     age = age1;
// }

// class Student
// {
//     private:
//         int id, password, age;
//     public:
//         string name, fathername, institutename, genter ;
//         void setdata(int id1, int password1, int age1);
//         void getdata() {
//             cout<<"Name of Student: "<<name<<endl;
//             cout<<"Father Name: "<<fathername<<endl;
//             cout<<"Student ID: "<<id<<endl;
//             cout<<"ID Password: "<<password<<endl;
//             cout<<"Age of a Student: "<<age<<endl;
//             cout<<"Genter: "<<genter<<endl;
//             cout<<"Institute in which he/she study: "<<institutename<<endl;
//         }
// };
// void Student :: setdata(int id1, int password1, int age1) {
//     id = id1;
//     password = password1;
//     age = age1;
// }
// int main()
// {
//     Student nabeed;
//     nabeed.name = "Nabeed Jamshed";
//     nabeed.fathername = "Jamshed Ali";
//     nabeed.institutename = "NED University";
//     nabeed.genter = "Male";
//     nabeed.setdata(101, 157903, 19);
//     nabeed.getdata();
//     cout<<endl;

//     Student filza;
//     filza.name = "Filza Jamshed";
//     filza.fathername = "Jamshed Ali";
//     filza.institutename = "Prince Secondary School";
//     filza.genter = "Female";
//     filza.setdata(172, 1673923, 16);
//     filza.getdata();
//     cout<<endl;

//     Animal dog;
//     dog.sound = "Bark";
//     dog.food = "Meat";
//     dog.genter = "Male";
//     dog.setdata("German Shaperd", 5);
//     dog.getdata();
//     cout<<endl;

//     Animal cat;
//     cat.sound = "Meaow";
//     cat.food = "Milk";
//     cat.genter = "Female";
//     cat.setdata("Catty", 3);
//     cat.getdata();
//     return 0;
// }

// Nesting of member function

// #include<iostream>
// using namespace std;

// class binary
// {
//     private: //---> private likhna optional hai bcz class mai sb private hi hota hai.
//         string s;
//         void chk_binary();
//     public:
//         void read();
//         void one_compliment();
//         void two_compliment();
//         void display();
// };
// void binary :: read() {
//     cout<<"Enter a number: ";
//     cin>>s;
// }
// void binary :: chk_binary() {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i) != '0' && s.at(i) != '1') {
//             cout<<"Invalid binary format";
//             exit(0);
//         }
//     }
// }
// void binary :: one_compliment() {
//     chk_binary();
//     for (int i = 0; i < s.length(); i++) {
//         if(s.at(i) == '0') {
//             s.at(i) = '1';
//         }
//         else {
//             s.at(i) = '0';
//         }
//     }
// }
// void binary :: two_compliment() {
//     chk_binary(); // You should check if the binary number is valid first
//     int n = s.length();
//     int i;
//     for (i = n - 1; i >= 0; i--) {
//         if (s.at(i) == '0') {
//             s.at(i) = '1';
//             break;
//         } else {
//             s.at(i) = '0';
//         }
//     }
//     if (i == -1) {
//         // If there was no '0' found, then the binary number is all ones,
//         // so we need to add a '1' at the beginning to get the two's complement.
//         s = '1' + s;
//     }
// }

// void binary :: display() {
//     cout<<"Display a binary number!!"<<endl;
//     for (int i = 0; i < s.length(); i++) {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }

// int main() {
//     binary b;
//     b.read();
//     // b.chk_binary();
//     b.display();
//     b.one_compliment();
//     b.display();
//     b.two_compliment();
//     b.display();
//     return 0;
// }

// Using Array in Class.
#include <iostream>
using namespace std;

class Shop
{
private:
    int itemid[100], itemprice[100];
    int counter;

public:
    void inititem()
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
};

void Shop ::setprice()
{
    cout << "Enter the ID of item no. " << counter + 1 << ": ";
    cin >> itemid[counter];
    cout << "Enter the price: of item no. " << counter + 1 << ": ";
    cin >> itemprice[counter];
    counter++;
}

void Shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The ID of your item is " << itemid[i] << " and its price is " << itemprice[i] << endl;
        // cout<<"Total price: "<<sum(itemprice[i]);
    }
}
int main()
{
    Shop dukkan;
    dukkan.inititem();
    int n;
    cout << "How many items you are purchased: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukkan.setprice();
    }
    dukkan.displayprice();
    return 0;
}