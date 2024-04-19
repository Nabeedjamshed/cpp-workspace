#include<iostream>
using namespace std;
int factorial(int n) {
    if(n == 0 or n == 1) {
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<": "<<factorial(num)<<endl;
    return 0;
}
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     int fact = 1;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         fact = fact * i;
//     }
//     cout<<"The factorial is: "<<fact;
//     return 0;
// }