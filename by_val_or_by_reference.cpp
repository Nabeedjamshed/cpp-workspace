// #include<iostream>
// using namespace std;
/*
****Call by value****
In call by value, a copy of the actual parameter is passed to the function. This means that any modifications made to the 
parameter inside the function do not affect the original value outside the function.
It's like giving a photocopy of a document to someone. Any changes made to the photocopy do not affect the original document.
// Not change the value of a and b because just copy di hai.(Call By value)
// void swp(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int a = 4,b = 3;
//     cout<<"The value of a is "<<a<<" and The value of b is "<<b<<endl;
//     swp(a,b); // ---> this a and b is actual argument ye copy hojaenge formal argument mai swp(int a,int b) mai 
//     //        is se actual a and b ko koi farq nhi parhega jo main() mai hai tu isi lie dono baar a and b ki value same aaengi.
//     cout<<"The value of a is "<<a<<" and The value of b is "<<b;
//     return 0;
// }

****Call by Reference****
In call by reference, instead of passing a copy of the value, you pass the memory address of the actual parameter. 
This means any changes made to the parameter inside the function will affect the original value outside the function.
It's like giving someone direct access to the original document. Any changes made directly affect the original document.
*/
// By reference using pointer
//Change the value of a and b because address dedya hai. (Call By Referene)
// void swppointer(int* a, int* b) {  ---> is function mai memory ka address dedya hai tu ye function 
//                                         us address mai jo bhi variable hai usse dhoond kr us variable ki value ko change krdega
//     int temp = *a; ---. Dereference of a variable
//     *a = *b; --> value at address a = value at address b
//     *b = temp;
// }

// Remember function ek baad run hone ke baad a and b destroy hojaege. 
//*a and *b main jo address hai wo bhi destroy hojaenge but inhone apna
// kaam dikha dya hai.means values ko change kr dya hai.

// int main() {
//     int a = 4,b = 3;
//     cout<<"The value of a is: "<<a<<" The value of b is: "<<b<<endl;
//     swppointer(&a,&b);
//     cout<<"The value of a is: "<<a<<" The value of b is: "<<b;
//     return 0;
// }
/*
By reference using C++ reference variables
We know that refernce variables wo hote ke agr x ke ek reference 
variable y bna dya &y krke tu agr x ko change kroge tu y bhi change hojaega.
*/
// void swpreferenceVar(int &a, int &b) { //--> yha address nhi dya reference variables bna die jb x ko paas kya tu 
// //                                          &a x ka reference variable bn gya tu jb &a change hoga tu x bhi automatically 
// //                                          change hojaega.a point x and b point y in memory.
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 4,y = 3;
//     cout<<"The value of a is "<<x<<" and The value of b is "<<y<<endl;
//     swpreferenceVar(x,y); 
//     cout<<"The value of a is "<<x<<" and The value of b is "<<y;
//     return 0;
// }

/*
*************Return by reference****************
In Return by reference function return krega ek reference. So is technique se aap
 jo reference return kya hai us ki value ko change krskte.
*/
// int & swpreferencereturn(int &a, int &b) { // int & ka type reference variable hojaega bcz ek reference variable return k
    // int temp = a;
    // a = b;       ---> in 3 lines ka return by reference se koi relation nhi just x mai 56 aarh aand wo reference &a mai aakr update horha and at the end reference variable hi return horha.in 3 lines se a per koi effect nhi horha but b change horha ahr ye hta dain tu b ki value change nhi hogi. 
    // b = temp;
//     return a; // return updated value of a.
// }
// int main() {
//     int x = 4,y = 3;
//     cout<<"The value of a is "<<x<<" and The value of b is "<<y<<endl;
//     swpreferencereturn(x,y) = 56; // so ek function call ko ksi number ke equal krskte wo value x ki jga per chale jaegi.ye funtion reference to x retirn krrha hai.return a krrhe wo x ka reference variable hai tu x change hojaega.
//     cout<<"The value of a is "<<x<<" and The value of b is "<<y;
//     return 0;
// }

