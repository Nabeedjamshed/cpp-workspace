#include <iostream>
using namespace std;

class Bank
{
    int principle;
    float interestrate, year,returnValue;

public:
    Bank() {} //This default constructor initializes all the member variables to some default values.
    //          With either of these approaches, the compiler will then be able to create objects using
    //          the default constructor when you declare them without any arguments, as in Bank bd1, bd2.
    //          if p,q,r ki value nhi bhi de pate tb bhi due to default constructor object bn jaega.
    Bank(int p, float y, float r);
    Bank(int p, float y, int r);
    void show()
    {
        cout << "Your principle amount was " << principle << " and the return value after "
             << year << " year is " << returnValue << endl;
    }
};

Bank::Bank(int p, float y, float r)
{
    principle = p;
    year = y;
    interestrate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}
Bank::Bank(int p, float y, int r)
{
    principle = p;
    year = y;
    interestrate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestrate);
    }
}
int main()
{
    Bank bd1, bd2; // --> ye blank object bn rhe islie wo default constructor bnaya hai then phr in object ko overwrite krdya means value paas kradi.by default constructor by default values ko zero set krdega then wo overwrite hojaengi.ku ke jese hi bd1 and bd2 bna tu in object ke lie Bank function run hogya but yha tu hum ne koi parameter hi nhi die hai islie upper dafault constructor bnaya hai jo initially in object mai zero set krdega take error nhi aae kyu ke jb object bnenge or unhe koi constructor hi nhi milega tu wo error denge lekin due to dafault constructor error nhi aaege then jb parameter paas kraenge tu is ke ande values overwrite hojaengi.
    int p, R;
    float r, y;

    // Bank bd3;
    // bd3.show();

    cout << "Enter the principle(p) value : ";
    cin >> p;
    cout << "Enter the year(y) : ";
    cin >> y;
    cout << "Enter the interest rate(r) : ";
    cin >> r;

    Bank bd1(p, y, r); // Compiler seen r ki value float hai tu wo automatically ye wala constructor run krdega.
    bd1.show();

    cout << "Enter the principle value(p) : ";
    cin >> p;
    cout << "Enter the year(y) : ";
    cin >> y;
    cout << "Enter the interest rate(R) : ";
    cin >> R;

    Bank bd2(p, y, R); // Compiler seen R ki value integer hai tu wo automatically ye wala constructor run krdega.
    bd2.show();

    return 0;
}
/*

The dynamic initialization of the object means that the object is initialized at the runtime.
Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.

Dynamically means jb program run howa or user ne input krdya us ke baad pta chale ke konsa constructor run hoga depends on user
kya input krrha us ke input ke hisab se constructor run hoga(Overloaded constructor hone chaeye). Hoskta ke user ne koi input hi
nhi dya tu default value le kr constructor run kre.Object ki value phele se set nhi krte on running time user khud object ki 
value input krta hai this is basically caleed dynamically. on the run time object create hota hai in dynamic initialization 
object creation means user object ki values set krega name tu program mai hi bta denge bhut values use btaega.
on the running time object ka bnna(means input user se lena) this is called dynamic initialization.
*/
