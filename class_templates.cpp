// #include<iostream>
// using namespace std;

// template <class T> // data type ko ek variable ki tanha pass krdya hai T is just like a variable jis mai datatype ko store krdya hai. T is exactly not a variable its a template parameter
// class Vector{
//     public:
//         T *arr;
//         int size;
//         Vector(int m){
//             size = m;
//             arr = new T[size];
//         }
//         T dotproduct(Vector v){
//             T d=0;
//             for (int i = 0; i < size; i++)
//             {
//                 d += this->arr[i] * v.arr[i];
//             }
//             return d;
//         }
// };
// int main() {
// Vector <int> v1(3);
// v1.arr[0] = 1;
// v1.arr[1] = 2;
// v1.arr[2] = 3;
// Vector <int> v2(3);
// v2.arr[0] = 5;
// v2.arr[1] = 2;
// v2.arr[2] = 8;
// int a = v1.dotproduct(v2);
// cout<<a<<endl;
// Vector <float> v1(3);
// v1.arr[0] = 1.5;
// v1.arr[1] = 2.2;
// v1.arr[2] = 1.3;
// Vector <float> v2(3);
// v2.arr[0] = 4.5;
// v2.arr[1] = 2.2;
// v2.arr[2] = 1.8;
// float a = v1.dotproduct(v2);
// cout<<a<<endl;
// return 0;
// agr template nhi hota tu int,float,char sb ke lie alg alg class bnana parhti.
// }

/*
What is a template in C++ programming?

 A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types. Declaring classes for every other data type(which if counted is way too much) in the very first place violates the DRY( Don’t Repeat Yourself) rule of programming and on the other doesn't completely utilise the potential of C++.



It is very analogous to when we said classes are the templates for objects, here templates itself are the templates of the classes. That is, what classes are for objects, templates are for classes.

Why templates?

DRY Rule:
To understand the reason behind using templates, we will have to understand the effort behind declaring classes for different data types. Suppose we want to have a vector for each of the three(can be more) data types, int, float and char. Then we’ll obviously write the whole thing again and again making it awfully difficult. This is where the saviour comes, the templates. It helps parametrizing the data type and declaring it once in the source code suffice. Very similar to what we do in functions. It is because of this, also called, ‘parameterized classes’.

Generic Programming:
It is called generic, because it is sufficient to declare a template once, it becomes general and it works all along for all the data types.
*/

// ********Templates with multiple parameters*******
// #include<iostream>
// using namespace std;

// template <class T1, class T2> // T1,T2 dosri class bhi hoskti. Bhut sari custom datatype(classes) is mai <> add krskte hai.
// class Myclass{
//     T1 data1;
//     T2 data2;
//     public:
//         Myclass(T1 a,T2 b){
//             data1 = a;
//             data2 = b;
//         }
//         void display(void){
//             cout<<this->data1<<endl<<this->data2<<endl;
//         }
// };
// int main() {
//     Myclass <int , char> obj1(1,1); // agr char lekr koi number input krdenge tu usse recommended char jo us number per save hai wo print hojaega
//     obj1.display();
//     Myclass <float , int> obj2(1.6,1); // agr char lekr koi number input krdenge tu usse recommended char jo us number per save hai wo print hojaega
//     obj2.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// template <class T1, class T2, class T3>
// class Mathopr
// {
//     T1 data1;
//     T2 data2;
//     char character;
//     int result;

// public:
//     Mathopr(T1 a, T2 b)
//     {
//         data1 = a;
//         data2 = b;
//     }
//     void operations(T3 c)
//     {
//         character = c;
//         if (character == '+')
//         {
//             result = data1 + data2;
//         }
//         else if (character == '-')
//         {
//             result = data1 - data2;
//         }
//         else if (character == '*')
//         {
//             result = data1 * data2;
//         }
//         else if (character == '/')
//         {
//             result = data1 / data2;
//         }
//     }
//     void show(void)
//     {
//         cout << "The first value is: " << data1 << endl;
//         cout << "The second value is: " << data2 << endl;
//         cout << "The character that you input is: " << character << endl;
//         cout << "The answer is: " << result << endl;
//     }
// };
// int main()
// {
//     Mathopr<int, float, char> add(8, 3.14);
//     add.operations('*');
//     add.show();
//     return 0;
// }

// ********Templates with default parameters*******
// #include<iostream>
// using namespace std;

// template <class T1=int, class T2=char, class T3=float>
// class Simple{
//     T1 data1;
//     T2 data2;
//     T3 data3;
//     public:
//         Simple(T1 data1, T2 data2, T3 data3){
//             this->data1 = data1;
//             this->data2 = data2;
//             this->data3 = data3;
//         }
//         void display(void){
//             cout<<"The value of data1 is: "<<data1<<endl;
//             cout<<"The value of data2 is: "<<data2<<endl;
//             cout<<"The value of data3 is: "<<data3<<endl;
//         }
// };
// int main() {
//     Simple <> s(2,'+',3.4); // agr <> ko empty chor denge tu compiler defaulit argument set krdega.
//     s.display();
//     cout<<endl;
//     Simple <float, char, char> n(3.14,'n','d'); // agr <> mai parameters die hai tu jo die hai wo set krdega compiler.
//     n.display(); 
//     return 0;
// }

#include<iostream>
#include<sstream>
using namespace std;

int main() {
    stringstream ss;
    string x,y,z;
    ss>>x>>y>>z;
   
    return 0;
}


