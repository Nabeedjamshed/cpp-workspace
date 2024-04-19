// #include<iostream>
// using namespace std;

// template <class T1, class T2>
// float funcavg(T1 a, T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// int main() {
//     float a;
//     a = funcavg(5,6);
//     cout<<"The value of a is: "<<a<<endl;
//     a = funcavg(5,6.5);
//     cout<<"The value of a is: "<<a<<endl;
//     a = funcavg(8.3,6.5);
//     cout<<"The value of a is: "<<a<<endl;
//     return 0;
// }

//Instead of using overloaded function we can make function template this is better option wrna swap name ke bhut sare function bnana parhte koi int ko swap krta koi float etc ko tu isse acha ek function template swap name ki bnali. function overloaded and template dono ke apne faide hai on suitation ke hisaab se dono maise koi bhi use krskte hai.

// #include<iostream>
// using namespace std;

// template <class T>
// float swap(T a, T b){
//     T a1;
//     T b1;
//     T temp;
//     a1 = a;
//     b1 = b;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"The value of a and b before swap is: "<<a1<<" and "<<b1<<endl;
//     cout<<"The value of a and b after swap is: "<<a<<" and "<<b<<endl;
// }
// int main() {
//     float num;
//     num = swap(4,5);
//     cout<<endl;
//     num = swap(4.9,5.5);
//     cout<<endl;
//     num = swap('+','-');
//     cout<<endl;
//     num = swap("Nabeed","Jamshed");
//     return 0;
// }

#include<iostream>
using namespace std;

template <class T>
float swaap(T &a, T &b){
    cout<<"The value of a and b before swap is: "<<a<<" and "<<b<<endl;
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The value of a and b after swap is: "<<a<<" and "<<b<<endl;
}
int main() {
    float num1=3,num2=4;
    swaap(num1,num2);
    return 0;
}