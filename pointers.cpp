#include<iostream>
using namespace std;
/*
Pointers: ----> Pointers are the data type(type of variable) which holds(store) the address of
other datatypes.where * is a notation to make pointers. * datatype ke saath lgta hai or 
&variable ke saath lgta hai.Ek alg variable bna kr bhi address ko store kr skte previous 
variable ka address is case mai * lgana hai.or previous variable ke saath 
& lgakr bhi address store kr skte. 

& ---> Address of Operator
jab program run hota hai tu wo RAM mai copy hojata hai then saare variables 
ko RAM mai kuch jga di jaati hai un ka koi address hota hai wo address ko 
dekhne ke lie  & ka sign lgate hai.

*/
int main() {
    int a = 3;
    int* b = &a;            
    // int* means ek aese type ka variable(pointer) bna do jo a ka address 
    //hold krega. b ek pointer hai jo a ka address hold(store) krha hai.
    int b;
    b = &a;             
    cout<<"The value of a is: "<<a<<endl<<"The address of a is: "<<b<<endl;
    
    int c = 64;
    cout<<"The address of b is: "<<&c<<endl;
    // * ---> Dereference Operator --> Value at operator
    // cout<<"The value that hold at address b is: "<<*b<<endl;     
    // Dereference operator se address mai jo value hai wo nikalte 
    // b is a pointer variable



    // *****Pointers to Pointers*****
    // Ek pointer ksi variable ka address store krta hai and is pointer ka bhi koi address  hoga 
    // if we want ke is pointer ka jo address hai wo bhi pta lg jae tu (**) lgate 
    // ** means ek pointer dosre pointer ke address ko point krrha.
    // pointer to pointer means ek pointer dosre pointer ke address ko locate krrha ke wo kha hai

    // int** c = &b;
    // int***d = &c;
    // c is a pointer to pointer variable means ek aesa pointer jo pointers ke address ko store krta hai 
    cout<<"The address of pointer b that hold a address is: "<<c<<endl;

    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    // cout<<"The value at address c is: "<<*c<<endl;
    // cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
    // cout<<"The address of b is: "<<d<<endl;
    // easy way to remember
    // * means piche aajao
    // & means aage chalejao
    return 0;  
}