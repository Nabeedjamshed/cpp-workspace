#include<iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<max(max(a, b), max(c, d)); // --> in c++ pairs ki form mai maximum niklta hai.
    return 0;
}