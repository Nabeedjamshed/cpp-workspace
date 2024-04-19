#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    *ptr = 999;                                    // ---> isse value change bhi krskre
    cout << "The value of a is: " << *ptr << endl; // (*ptr) or *ptr dono lilh skte.age ptr ke sath kuch or bhi hota tu bracket lgana must hota like *(ptr+1)
    cout << "The address of a is: " << ptr << endl;

    int *p = new int(40);
    cout << "The value of p is: " << *(p) << endl;

    int *arr = new int[4]; // is syntax se continues 3 block of memory allocate kr die 3 integers ko store krne ke lie ab is mai values assidn krskte.
//                            Ye dynamically array bn gya bcz running timme values assign hoe hai.new oprator se dynamically memory ko allocate krte.
//                            Agr run time per memory nhi hogi tu error throw kya jaega. new and delete are the operators as well as keyword.
    arr[0] = 10;
    *(arr + 1) = 20; // Aese bhi likh skte
    arr[2] = 30;
    arr[3] = 40;
    // delete arr; // delete arr se bol dya ke jo continues block of memory dynamically allocate kya tha usse free krdo tu ab garbage values print hongi
    // delete[] arr; // [] lgane se pori ki pori continues block of memory delete hojaegi
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << *(arr + 1) << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;
    cout << "The value of arr[3] is: " << arr[3] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // int p = 23;
    // int *ptr = &p;
    int *p = new int(23); // ---> If you want ke ek hi line mai value assign krke value daldo or usse pointer bhi bnado tu new keyword ka use krskte.new se dynamically variable etc bnate hai or us mai value assign kr dete hai.
    cout << "The address of p is: " << p << endl;
    cout << "The value at address p is: " << *(p) << endl;
    return 0;
}