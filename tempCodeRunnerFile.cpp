#include <iostream>
using namespace std;

int startL4()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 04\n" << endl;
    return 0;
}
int* maximum(int a[], int size)
{
    int *max = &a[0];
    for (int i = 0; i < size; i++)
    {
        if (*max < a[i])
        {
            max = &a[i];
        }
    }
    return max;
}
int main()
{
    startL4();
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number of an array: ";
        cin >> a[i];
    }
    int size = int(sizeof(a) / sizeof(a[0]));
    int *b = maximum(a, size);
    cout << "The maximum value of an array is: " << *b << endl;
    cout << "The adress of maximum value of an array is: " << b;
    return 0;
}