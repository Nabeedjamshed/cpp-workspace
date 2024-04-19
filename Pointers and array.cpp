// #include<iostream>
// using namespace std;
// // Arrays  ---> arrays are the continues block in memory.
// Only one type of data is store in array like int etc
// int main() {
//     int marks[] = {23,54,57,13};    // [] is mai size of an array dalte. ye optional hai is [] mai size dal bhi skte or empty bhi chor skte C++ ka compiler khud understand krlega. 
//     marks[2] = 45;  // change the value of an array
//     for(int i=0;i<4;i++) {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//     }

//     int i = 0;
//     while(i<4) {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     }

//     int marks[] = {22, 45, 66, 23};
//     int i = 0;
//     do {
//         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     }while(i<4);

//     cout<<marks[0]<<endl;    // where 0,1,2,3 are the indexes
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<endl;

//     // Another way to declaration of an array
//     int math_marks[4];
//     math_marks[0] = 11;
//     math_marks[1] = 12;
//     math_marks[2] = 13;
//     math_marks[3] = 15;

//     for(int i=0;i<4;i++) {
//         cout<<math_marks[i]<<endl;
//     }
//     cout<<math_marks[0]<<endl;
//     cout<<math_marks[1]<<endl;
//     cout<<math_marks[2]<<endl;
//     cout<<math_marks[3]<<endl;


//     //*********Pointers and array**********
//     //******FORMULA OF POINTER ARITHMATIC*******
//     // address(new) = address(current) + i * size of data type  where address(current) == p and address(new) == i.
//     // Array ka address store krne ke lie & nhi lgate.

//     int marks[] = {22, 34, 51, 56};
//     int* b = marks;
//     for(int i = 0;i<4;i++) {
//         cout<<"The address of array of marks "<<i<<" is "<<b<<endl;
//         b++; // This is pointer arithematic b++ se ek ek block ka address aajaega.
//     }
//     cout<<endl;
//     int marks[] = {22, 34, 51, 56};
//     int* p = marks;
//     for(int i=0;i<4;i++) {
//         cout<<"The value of marks "<<i<<" is: "<<*(p+i)<<endl;
//     }
    

//     int marks[] = {22, 34, 51, 56};
//     int* p = marks;
//     for(int i=0;i<4;i++) {
//         cout<<"The value of marks "<<i<<" is: "<<*(p+i)<<endl; 
//     } // Dreference of an array element
//     cout<<"The value of marks[0] is: "<<*(p)<<endl;
//     cout<<"The value of marks[0] is: "<<*(p+1)<<endl;
//     cout<<"The value of marks[0] is: "<<*(p+2)<<endl;
//     cout<<"The value of marks[0] is: "<<*(p+3)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// /*
// Pointers: ----> Pointers are the data type(type of variable) which holds(store) the address of
// other datatypes.where * is a notation to make pointers. * datatype ke saath lgta hai or 
// &variable ke saath lgta hai.Ek alg variable bna kr bhi address ko store kr skte previous 
// variable ka address is case mai * lgana hai.or previous variable ke saath 
// & lgakr bhi address store kr skte. 

// & ---> Address of Operator
// jab program run hota hai tu wo RAM mai copy hojata hai then saare variables 
// ko RAM mai kuch jga di jaati hai un ka koi address hota hai wo address ko 
// dekhne ke lie  & ka sign lgate hai.

// */
// int main() {
//     int a = 3;
//     int* b = &a;            
//     // int* means ek aese type ka variable(pointer) bna do jo a ka address 
//     //hold krega. b ek pointer hai jo a ka address hold(store) krha hai.
//     int b;
//     b = &a;             
//     cout<<"The value of a is: "<<a<<endl<<"The address of a is: "<<b<<endl;
    
//     int c = 64;
//     cout<<"The address of b is: "<<&c<<endl;
//     // * ---> Dereference Operator --> Value at operator
//     // cout<<"The value that hold at address b is: "<<*b<<endl;     
//     // Dereference operator se address mai jo value hai wo nikalte 
//     // b is a pointer variable



//     // *****Pointers to Pointers*****
//     // Ek pointer ksi variable ka address store krta hai and is pointer ka bhi koi address  hoga 
//     // if we want ke is pointer ka jo address hai wo bhi pta lg jae tu (**) lgate 
//     // ** means ek pointer dosre pointer ke address ko point krrha.
//     // pointer to pointer means ek pointer dosre pointer ke address ko locate krrha ke wo kha hai

//     // int** c = &b;
//     // int***d = &c;
//     // c is a pointer to pointer variable means ek aesa pointer jo pointers ke address ko store krta hai 
//     cout<<"The address of pointer b that hold a address is: "<<c<<endl;

//     cout<<"The address of b is: "<<&b<<endl;
//     cout<<"The address of b is: "<<c<<endl;
//     // cout<<"The value at address c is: "<<*c<<endl;
//     // cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl;
//     // cout<<"The address of b is: "<<d<<endl;
//     // easy way to remember
//     // * means piche aajao
//     // & means aage chalejao
//     return 0;  
// }