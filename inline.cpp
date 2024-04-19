// #include<iostream>
// using namespace std;

// inline int product(int a, int b) {
//     return a*b;
// }
// int main() {
//     int a,b;
//     cout<<"Enter the value of a and b: "<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// inline int product(int a, int b) {
//     static int c=0;
//     c = c+1;
//     return a*b+c;
// }
// int main() {
//     int a,b;
//     cout<<"Enter the value of a and b: "<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     cout<<"The product of a and b is: "<<product(a,b)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// float moneyreceived(int currentmoney, float factor=1.04) {
//     return currentmoney * factor;
// }
// int main() {
//     int money;
//     money = 1000;
//     cout<<"If you have "<<money<<" then the total interest is "<<moneyreceived(money)<<endl; //---> Bydefault factor argument compiler ne khud hi lelya.
//     cout<<"If you have "<<money<<" then the total interest is "<<moneyreceived(money, 1.1);
//     return 0;
// }

/*
Agar aap chahte hain ke factor ki value change na ho, to aap moneyreceived function ko call karte waqt sirf ek 
argument pass karen jaise aapne pehli baar kiya tha. Matlab, aapne jo function definition mein default argument 
rakha hai usko use karen. Yani aap sirf moneyreceived(money) likhen, bina doosre argument ke. Isse compiler wahi 
default value use karega jo function definition mein di gayi hai.
*/
#include<iostream>
using namespace std;
float moneyreceived(int currentmoney, const float factor=1.04) {
    return currentmoney * factor;
}
int main() {
    int money;
    money = 1000;
    cout<<"If you have "<<money<<" then the total interest is "<<moneyreceived(money)<<endl; //---> Bydefault factor argument compiler ne khud hi lelya.
    // cout<<"If you have "<<money<<" then the total interest is "<<moneyreceived(money, 1.1);
    return 0;
}