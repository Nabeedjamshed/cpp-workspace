#include <iostream>
#include <fstream> //  is header file se fstreambase,ifstream and ofstream classes aati hai.
using namespace std;

int main()
{

    // Opening files using constructor and writing it.
    // string st = "Nabeed Jamshed Ali"; // is string ko file mai write kra rhe hai.
    // ofstream out("sample.txt"); //This is Write operation. Object ke name kuch bhi hoskte hai out wale object ka kaam just like cout hai while in wale onject ka kaam just like cin hai. By using ofstream out("sample.txt") se file ko stream se connect krrhe hai. out stream bnsli hai usse connect krrhe hai.Data flow horha from this cpp program to sample.txt file.ofstream ko use krke apni ek out stream bnali ab wo sample.txt ko data trasmit kregi. 
    // out<<st;

    // Opening files using constructor and reading it.
    string st2; // file ka data ek string mai aajaega by using this.
    ifstream in("sample.txt"); // This is Read operation.
    // in>>st2; // ye just ek word ko hi read krega islie getline function ka use kya hai.jb ifstream ke object ko use krte hai tu spaces or new lines nhi aati hai.
    getline(in, st2); // The function “getline” is called and the object “in” and the string “st2” are passed to it. The main thing to note here is that the function “getline” is used when we want to read the whole line.
    cout << st2;
    return 0;
}
/*
File I/O in C++: Reading and Writing Files:

These are some useful classes for working with files in C++:
fstreambase --> This is a base class ifstream or ofstream isse derived hokr bnti hai.
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
Using the constructor
Using the member function open() of the class
*/