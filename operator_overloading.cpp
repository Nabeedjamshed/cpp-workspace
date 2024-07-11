// operator overloading means built in operator se wo kaam krao jis ke lie unhe bnaa hi nhi gya means means  unhe ek new definition assign krdo. like + operator is not add class object bcz ye iska kaam nhi hai ye just bulit in data type ko add krta hai but agr aesa program likhain jis se + class ke objects ko bhi add krde tu it means hum ne + ko overload krdya hai.
// cc = aa + bb --> it means that aa ke reference se means aa ke zarie aap se + function ko call kya or bb ko as a argument pass kradya or reyrn type cc ki jo datatype hai wo hogi.

#include <iostream>
using namespace std;

class Demo
{
    int a;

public:
    void setdata()
    {
        cout << "Enter value: ";
        cin >> a;
    }
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
    }

    Demo operator+(const Demo& bb)
    {
        Demo cc;
        cc.a = a + bb.a; // a mai us object ka a ajaega jis ke reference se ye function call horha in this scnerio aa ka a yha aytomatically aajaega uske lie aa.a likhe ki need nhi hai.
        return cc;
    }
    Demo operator-(const Demo& bb)
    {
        Demo cc;
        cc.a = a - bb.a; // a mai us object ka a ajaega jis ke reference se ye function call horha in this scnerio aa ka a yha aytomatically aajaega uske lie aa.a likhe ki need nhi hai.
        return cc;
    }
    Demo operator*(const Demo& bb)
    {
        Demo cc;
        cc.a = a * bb.a; // a mai us object ka a ajaega jis ke reference se ye function call horha in this scnerio aa ka a yha aytomatically aajaega uske lie aa.a likhe ki need nhi hai.
        return cc;
    }
    Demo add(const Demo& bb) // Also do thid, (p1+p2) * (p3-p2)
    {
        Demo cc;
        cc.a = a + bb.a; // a mai us object ka a ajaega jis ke reference se ye function call horha in this scnerio aa ka a yha aytomatically aajaega uske lie aa.a likhe ki need nhi hai.
        return cc;
    }
};
int main()
{
    Demo aa, bb, cc;
    aa.setdata();
    bb.setdata();
    cc = aa + bb;
    aa.getdata();
    bb.getdata();
    cc.getdata();

    Demo d;
    d = aa.add(bb);
    d.getdata();


    Demo x = (aa+bb) * (aa-cc);
    x.getdata();
    return 0;
}