/*
A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is, 

It gives faster insertion and deletion operations.
Its access to random elements is slow.

What makes a list different from an array?

An array stores the elements in a contiguous manner in which inserting some element calls for a shift of other elements, which is time taking. But in a list, we can simply change the address the pointer is pointing to. I’ll show you how these work via an illustration.
*/
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *(iter) << " "; // iterator just like a pointer a tu usse defernce krrhe.
    }
    cout << endl;
}
int main()
{
    list<int> lst1;
    int size;
    cout << "Enter a data of list 1: " << endl;
    cout << "Enter total numbers: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter a value of an element: ";
        cin >> element;
        lst1.push_back(element);
    }
    display(lst1);

    list<int> lst2(5); // is mai push_back nhi krenge bcz iska size tu memory mai allocate hai just is ,ai value set krna hai.
    list<int>::iterator it;
    for (it = lst2.begin(); it != lst2.end(); it++)
    {
        cout << "Enter a data of list 2: " << endl;

        int size;
        cout << "Enter a value: ";
        cin >> size;
        *it = size;
    }
    // sorting and merging a list

    lst1.sort(); // sort a list
    display(lst1);
    lst2.sort(); // sort a list
    display(lst2);
    cout << "lst1 after merging: ";
    lst1.merge(lst2);
    display(lst1);
    // lst2.pop_back();
    // display(lst2);
    // lst2.pop_front();
    // lst2.remove(8); // jitni bar bhi input list mai ksi bhi position per 8 hoga usse remove krdega if agr 8 nhi hai tu error show nhi krega jo list inputki hai whi display kradega.
    // display(lst2);

    // Reversing a list
    lst1.reverse();
    display(lst1);
    lst2.reverse();
    display(lst2);
    return 0;
}

// #include <iostream>
// #include <list>

// int main() {
//     std::list<int> myList = {1, 2, 3, 4, 5, 3, 6, 7, 3, 8};

//     std::cout << "Enter the value to remove: ";
//     int value;
//     std::cin >> value;

//     myList.remove(value);

//     // Display the modified list
//     for (int num : myList) { // num ek variable bn gya jis mai modified lidt ke elements store horhe.
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
