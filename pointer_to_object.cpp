#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata(void)
    {
        cout << "The value of real part is: " << real << endl;
        cout << "The value of imaginary part is: " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c;
    c.setdata(4, 5);
    c.getdata();
    Complex *ptr = &c; // Ye pointer c object ko point krrha
    ptr->setdata(3, 2);
    ptr->getdata();       // -> ka matlab hota ke ptr pointer ko deference kro or iske lie getdata() function run kro. ptr ke baad jb arrow lgta hai tu us ka mtlab hai ke ye pointer jis object ko point krrha hai uska getdata() run kro.
    (*ptr).setdata(7, 8); // Pointer ke methods run krne ke lie (*ptr) or ptr-> dono use krskte. arrow operator( -> ) se directly ek pointer ko deference krke uske lie function ko run krskte hai.
    (*ptr).getdata();

    // Below method se output tu same aaega bs hum ye dekh rhe ke ek pointer se object ke public members ko kese access krskte.
    // Complex c;
    // Complex *ptr = &c;
    // (*ptr).setdata(7,8);
    // (*ptr).getdata();

    // Pointers ke object bnane ka tariqe:
    // Complex a;
    // Complex *p = &a;
    // // OR
    Complex *p = new Complex; // new lgar ek new object bn jata hai chahe wo int ho float ho custom class ka object ho etc
    return 0;
}

/*
The main thing to note here is that we called the member function with pointers by using arrow operator “->” instead of the dot operator “.”
but still it will give the same results.
*/