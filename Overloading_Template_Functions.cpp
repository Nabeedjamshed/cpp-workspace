// Below code mai just ye dekh rhe ke function class ke bahr bhi likh skte with function template
// #include<iostream>
// using namespace std;

// template <class T>
// class Nabeed{
//     T data;
//     public:
//         Nabeed(T a){
//             data = a;
//         }
//         void getdata();
// };

// template <class T>
// void Nabeed <T> :: getdata() {
//     cout<<data<<endl;
// }
// int main() {
//     Nabeed <int> n(5);
//     n.getdata();
//     return 0;
// }

//Now moving overloading template function
#include<iostream>
using namespace std;

void func1(int a){
    cout<<"The value of funct1() is: "<<a<<endl; // if the name of the function is same so the function having exact match will take the highest priority agr int wala function nhi hota tu phr template wala call hojata.
}
template <class T>
void func1(T a){
    cout<<"The value of templatorized function is: "<<a<<endl;
}
template <class T>
void func2(T a){
    cout<<"The value of templatorized function is: "<<a<<endl; // funct2() ka exact match function nhi tha tu template wala run hogya.
}
int main() {
    func1('n');
    // func2(5);
    return 0;
}