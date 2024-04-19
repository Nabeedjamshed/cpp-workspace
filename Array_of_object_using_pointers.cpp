#include <iostream>
using namespace std;

class ShopItems
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of the item is: " << id << endl;
        cout << "Price of the item is: " << price << endl;
    }
};
int main()
{
    int size = 3;
    ShopItems *ptr = new ShopItems[size]; // Ye array of object bn gya hai.
    ShopItems *ptrTemp = ptr;
    int p, i;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item number " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptrTemp->getData();
        cout << "The address of Item " << i + 1 << " is " << ptrTemp << endl;
        ptrTemp++;
    }
    return 0;
}
/*
The main thing to note here is that in the first “for” loop we are incrementing the value of the pointer “ptr” because it is pointing to the address of array of 
objects and when loop will run every time the function “setdata” will be called by the different object. If we don’t increment the value of the pointer “ptr” the
each time function “setdata” will be called by the same object. Likewise in the second loop we are incrementing the pointer “ptrTemp” so that the function “getdata” 
could be called by each object in the array.
*/