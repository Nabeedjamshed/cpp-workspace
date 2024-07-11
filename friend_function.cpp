// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int a, b;
//     public:
//     void setdata(int v1, int v2) {
//         a = v1;
//         b = v2;
//     }
//     //Below line means that non member - sumdata function is allowed to do anything with class private data.
//     friend Complex sumdata(Complex, Complex); // ---> is line ko private or public khi bhi likh skte.
//     void printdata() {
//         cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// Complex sumdata(Complex o1, Complex o2) { // ---> ye function class ke bahr bna hai tu ye class ke private data ko used nhi krskta.Agr isse class hi permission 
// //                                                dede tu data use krskta hai is lie friend keyword ka word use krke compiler ko ye btaenge ke ye function class 
// //                                                ka friend hai isse class ka private data use krnedo.Compiler ksi class ke private data ko ksi dosre function ko
// //                                                access krne nhi deta hai.sumdata() function ka class se koi relation nhi hai ye ek foreign function hai islie 
// //                                                friend lgana parhta hai agr data ko access krna. Remenber friend likhne se ye mtlab nhi hai ke ab ye function is 
// //                                                class ka member bn gya isse c1.sumcomplex() krke print nhi krskte phele ek new object bnana parhega then is 
// //                                                function ko is obejct mai assign krakr print krado. sumcomplex() ek bahari function hai jisse permission mili 
// //                                                hoe hai is class ke private data ko access krne ki friend se bs ye declare krdya hai ke ye iska friend hai not member. 
//     Complex o3;
//     o3.setdata((o1.a + o2.a), (o1.b+o2.b));
//     // cout<<a; --> throws an error bcz a is not define means a kis ka hai o1 ka ya o2 ka ye likhna parhega.agr class mai a likhenge tu means jo object bn rha hai uska a.
//     return o3;
// }
// int main() {
//     Complex c1, c2, sum;
//     c1.setdata(1, 4);
//     c1.printdata();

//     c2.setdata(5,3);
//     c2.printdata();

//     sum = sumdata(c1, c2);
//     sum.printdata();
//     return 0;
// }

// /*
// Friend Function in C++:
// Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class. 
// It is necessary to write the prototype of the friend function. One main thing to note here is that if we have written the prototype for the friend 
// function in the class it will not make that function a member of the class.

// Properties of Friend Function
// Not in the scope of the class
// Since it is not in the scope of the class, it cannot be called from the object of that class, for example, c1.sumComplex() is invalid
// A friend function can be invoked(called upon) without the help of any object
// Usually contain objects as arguments
// Can be declared under the public or private access modifier, it will not make any difference
// It cannot access the members directly by their names, it needs (object_name.member_name) member means function to access any member.
// */



