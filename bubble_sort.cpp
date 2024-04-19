//**********User Input List**************

#include<iostream>
using namespace std;

void bubble_sort(int lst[], int n) 
{
    for(int i=0;i<n-1;i++) 
    {
        for(int j=0;j<n-i-1;j++) 
        {
            if(lst[j] > lst[j+1]) 
            {
                int temp = lst[j];
                lst[j] = lst[j+1];
                lst[j+1] = temp;
            }
        }
    }
}
int main() 
{
    int n;
    cout<<"Enter the number of an element: ";
    cin>>n;

    int l[n];
    for(int i=0;i<n;i++) 
    {
        cout<<"Enter the no.: ";
        cin>>l[i];
    }
    bubble_sort(l,n);
    for(int k=0;k<n;k++) 
    {
        cout<<l[k]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;

// ***********Without User Input************** 

void bubble_sort(int lst[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(lst[j] > lst[j+1]) {
                int temp = lst[j];
                lst[j] = lst[j+1];
                lst[j+1] = temp;
            }
        }
    }
}

int main() {
    int l[] = {45,3,1,4,56,22,46,2,76};
    int n = sizeof(l) / sizeof(l[0]);    // 1 element is equal to 4 byte so, if we want to find the total no. of element we divide the 
// //                                         total size/size of 1 element----.> Total elements are 9 (9*4=36), size of one element is 4byte
// //                                         (36/4=9) so 9 total no. of element aagae. Jo start mai 9*4=36 likha hai wo just apni understanding 
// //                                         ke lie likha hai compiler ko just 36 pta hai wo usse 4 se divide krega or total no. of elements 9 pta krlega.
//                                             jb size user input lenge tu size nikalne ki nedd nhi hai.
    bubble_sort(l, n);
    
    for(int i = 0; i < n; i++) {
        cout << l[i] << " ";
    }
    return 0;
}



