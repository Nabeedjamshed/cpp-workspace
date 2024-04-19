#include<iostream>
using namespace std;
int fabonacci(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else{
        return fabonacci(n-1) + fabonacci(n-2);
    }
}
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=0;i<=num;i++) {
        cout<<fabonacci(i)<<" ";
    }
    return 0;
}