#include <iostream>
using namespace std;

int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "The value of count after making an object is: " << count << endl;
    }
    ~Num()
    {
        cout << "The value of count after destroying an object is: " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are on main body" << endl;
    cout << "Creating n1" << endl;
    Num n1;
    {
        cout << "Entering in block" << endl;
        cout << "Creating n2" << endl;
        Num n2;
        cout << "Creating n3" << endl;
        Num n3;
        cout << "Exting the block" << endl;
    }
    cout << "Back to the main body" << endl;
    return 0;
}
/*
Destructor in C++:
A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value.
jo object ne dynamically memory allocate ki hoe thi destructor usko free kedeta hai. 
*/