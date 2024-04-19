#include<iostream>
using namespace std;
int main() {
    int num1,num2; 
    char operand;
    cout<<"Enter the number 1: ";
    cin>>num1;
    cout<<"Enter the number 2: ";
    cin>>num2;
    cout<<"Enter the operand: ";
    cin>>operand;
    if (operand == '+') {
        cout<<"The addition is: " << num1+num2;
    } 
    else if(operand == '-') {
        cout<<"The subtraction is: " << num1-num2;
    }
    else if(operand == '*') {
        cout<<"The multiplication is: " << num1*num2;
    }
    else if(operand == '/') {
        cout<<"The division is: " << num1/num2;
    }
    else if(operand == '%') {
        cout<<"The modulo is: " << num1%num2;
    }
    else {
        cout<<"Invalid operand";
    }
    return 0;
}