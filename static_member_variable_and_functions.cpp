#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count; // --> Ek aesa variable jo class ke kitne bhi object bn jae un sb ke lie same rhe.
    // Static variable bydefault (0) se initialized hojata hai app ko isse initialized krne li need nhi hai.
    // Static variable ka simple means ye hai ke ye class se jor jata hai ab class kitni baar use hoe hai
    // utni baar ye increment hoga like niche example mai 3 object hai it means 3 times class run hoe hai
    // that's why static variable count 3 times increment hogya.Static variable is not the property of
    // an object it is the property of class.
    // kyu ke Static variable class se jor jata hai islie in OOPS ise class variable bhi khete hai.

    // int count = 0 --> agr static nhi bnate ye krne tu hr baar 1 hi show hota because hr object ka ek
    // hi count hai ye indivially count ko calculate krega.
public:
    void setdata(void)
    {
        cout << "Enter the employee id: " << endl;
        cin >> id;
        count++; // Dafault value (0) hoti but output 1 se islie start horha hai kyu se count phele increment horha hai then print.
    }
    void getdata(void)
    {
        cout << "The Employee id is " << id << " and the employee number is " << count << endl;
    }

    // Static Function: --> ek aesa function jo sare static members(variable or function) ko hi access krske.
    // agr is function mai let say id ya getdata likh dain tu wo error dega bcz id and getdata are not a 
    //static variable and function.Static functions class ke name se run hojate hai they donot need object to run it.
    //Object ke name se bhi run hoskta or direct class se bhi.
    static void getCount()
    {
        // cout<<id; --> throws an error.
        // cout<<getdata(); --> throws an error.
        cout << "The value of count is: " << count << endl;
    }
};

int Employee ::count; // Static variable ki memory hr object ke saarh nhi aaegi wo class ke saath aaegi.
// ye variable sirf ek baar mamory lega us ke baad update hota jaega.bcz we know that comman cheez sirf
// ek baar hi memory leti hai.Default value is (0).Static variable ki just ek copy bnni hai in memory
// than wo copy phir maintain ki jati hai means wo increment hoti rehti hai 0,1,2...
// Static variable ka scope(visiblity) class ke ander hi rehti hai. and is ki lifetime jb tk pora program
// terminate nhi hojata tb tk ki hoti hai. Static variable must made in the class outside the class it can't be made.

// int Employee :: count=1000; // ---> If we want ke count ki value 1000 se start ho tu yha likh skte.

// Count is the static data member of class Employee.
int main()
{
    Employee nabeed, adnan, huzaifa; // -->Static variable srf 1 hota hai jo class mai bnate ye memory bhi 1 baar hi allocate krta or isse saare object share krte hai.nabeed, adnan, huzaifa ek hi static variable count ko share krrhe hai.
    nabeed.setdata();
    nabeed.getdata();
    // Employee::getdata(); --> throws an error.
    Employee::getCount();

    adnan.setdata();
    adnan.getdata();
    Employee::getCount();
    // adnan.getCount(); --> also run

    huzaifa.setdata();
    huzaifa.getdata();
    Employee::getCount(); // ---> is function ko ksi object ka reference lekr run nhi kya direct class ka name likha kr hi run krdya.

    // Static variable ki value hr object ke lie maintain ki jati hai.aap ksi bhi object mai in ki value modify krskte hai like agr 
    //nabeed ke baad bhi count++ likh dain tu nabeed per tu count 1 hi rhe ga but phir wo 2 nhi 3 hojaega bcz el increment usse upper
    // function se mili or ek yha increment krdi tu istanha static variable(count) tu ek hi hai but us ki value hr object ke lie modify kr skte hai.
    // ye just ek value hai jo class se assotiative rehti hai or hr object isse use krskta hai modify krskta hai.ye bhi keh skte ke class kitni baar use hoe hai ye btaega.
    return 0;
}

/*
A static variable in C++ is a variable that retains its value even after the scope in which it was created has exited.
There are two types of static variables:

Static local variables: These are declared inside a function using the static keyword. They are initialized only once,
and their value persists across function calls.

Static member variables: These are declared inside a class using the static keyword.
They are shared among all instances of the class. There's only one copy of the static
member variable for the entire class, regardless of how many objects of that class are created.
*/