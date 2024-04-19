#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int n1[n];

    int reverse = 0;
    
    while (n>0)
    {
        int x;
        cin>>n1[x];
        for (int i = 0; i < n; i++)
        {
            int lastdigit = n1[i]%10;
            reverse = reverse*10 + lastdigit;
            x = x/10;
        }
    }
    cout<<reverse<<endl;
}