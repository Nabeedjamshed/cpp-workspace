// #include<iostream>
// using namespace std;

// class Simple{
//     int data1, data2, data3;
//     public:
//         Simple(int a, int b=9, int c=1) { // ---> Default argument ki value tb run hogi jb value jo paas krrhe hai un mai se koi miss ho tu compiler default argument ki value lelega but agr value saari paas ki hai tu wo hi print hogi default wali nhi.
//             data1 = a;
//             data2 = b;
//             data3 = c;
//         }
//         void printdata() {
//             cout<<"The value of data1,data2 and data3 are: "<<data1<<", "<<data2<<" and "<<data3<<endl;
//         }
// };
// int main() {
//     // Simple s(4);
//     Simple s(11, 12, 13);
//     s.printdata();
//     return 0;
// }

#include<iostream>
using namespace std;

class Simple{
    int a, b;
    public:
        void setdata(int x, int y) {
            a = x;
            b = y;
        }
        void printdata() {
            cout<<"The value are: "<<a<<" and "<<b<<endl;
        }
        Simple* getAddress() { // This is not a constructor.
            return this; // this is a pointer that holds the address of the current object.
        }
};
int main() {
    Simple c1;
    c1.setdata(3, 4);
    c1.printdata();
    Simple* x = c1.getAddress();
    cout<<"The address is: "<<x<<endl;
    return 0;
}
