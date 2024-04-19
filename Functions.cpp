#include<iostream>
using namespace std;
//******Function Prototype*********** ---> Agr jo function bnaya hai wo main() ke baad likha hai tu compiler ko us ka 
//                                         nhi pta it will generate an error kyu ke program run hote hi sb se phele main 
//                                         ke paas jata hai.But agr function prototype lgadain tu compiler ko bolte hai 
//                                         ke main ke baad bhi is function ko dhondo.Compiler ko phele se btata hai ke ye
//                                         function aane wala hai.ye function ye values lekr ye return krega so compiler 
//                                         phele se ready ho jata hai un functions ko execute krne ke lie. Program ek 
//                                         assurity deta hai function ke aage milne ki not gurrenty.It just like a 
//                                         templet jo ksi function ko declare or define kene ke lie use krte.
// Syntex: type function-name(argument)
int sum(int a, int b); // Acceptable
int sum(int, int); // Acceptable a, b likhne ki need nhi hai hai because ye actual argument nhi hote hai.Just type bta dain bhut hai.
// int sum(int a, b); // Not Acceptable --> dono jga int likhna hai
void g();
int main() {
    int num1, num2;
    cout<<"Enter the number 1: "<<num1<<endl;
    cin>>num1;
    cout<<"Enter the number 2: "<<num2<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b) {
    // a and b are formal parameters. It will take the values from actual parameters num1 and num2
    int c = a + b;
    return c;
}
// Formal Parameters --> wo parameters jo function mai bnae hote hai like a and b.
// Formal parameters ko function mai define krte ye just function mai hi use hote.
// Actual Parameters --> wo values jo function ko paas krae jati hai like num1, num2.
// Formal parameters and Actual Parameters ke name same hoskte.

// There is no need to return value in function if void name se function bnae tu wo kuch return nhi krega.

void g() {
    cout<<"\nHello, Good Morning";
}