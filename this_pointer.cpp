#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // void setData(int a) {
    //     this->a = a; // A class se different object bnenge jo is setData() ko use karenge tu jis time jis object ne call kya wo this hai jese jb a ne call kya tu a this hai. Agr a = a1 krenge tu ye bhi this pointer hi call horha but implicity call horha .
    // }
    A &setData(int a)
    {                 // “this” pointer can be used to return a reference to the invoking object.(this keyword se object ko return bhi krskte)
                      // 1. In the function “setData” the reference of the object is returned using “this” pointer.
                      // 2. In the main program by using a single object we have made a chain of the function calls. The main thing to note here is that
                      //    the function “setData” is returning an object on which we have used the “getData” function. so we don’t need to call the function “getData” explicitly.
        this->a = a;  // object a ne isse call kya tu this (a) hai tu object a ka reference return hoga then isse is function ko bhi a.setData().getData() krke use krskte.
        return *this; // Isse object jis ne setData() ko call kya hai uska reference return horha
    }
    void getData(void)
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{
    A a;
    // a.setData(5).getData(); // aetData() ek object return krrha hai jis per .getData() lga skte hai.Tu ab .getData() explicity lgane ki need nhi hai
    a.setData(5);
    a.getData();
    return 0;
}

/*
“this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function.
(this pointer us object ko point krta hai jo object member function ko call krrha hai like a.setdata() tu this pointer a
object ko point karega).

*/