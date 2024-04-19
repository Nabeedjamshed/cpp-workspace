/*
Function object(Functors): In function object function wrapped in a class so that this function is available like an object. means function ko just like object ki tanha use krrhe hai.
*/
#include<iostream>
#include<algorithm>
#include<functional> // function objects are present in this header file
using namespace std;

int main() {
    // int arr[] = {2,5,1,7,88,3,56,6};
    // // sort(arr, arr+5); // This will sort starting 5 elements
    // sort(arr, arr+8 ,greater<int>());  //greater<int>() se arrat reverse sort hojaega greater<int>() is a function object. Remember on that time greater<int>() is an object not a function. sort method ek object leta hai.
    // for (int i = 0; i < 8; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    plus<int> adder; //plus is a functor
    int result = adder(4,6);
    cout<<"Result: "<<result;
    return 0;
}   

// A function object, also known as a functor, is an object that can be called as if it were a function. In C++, function objects are instances of classes or structs that overload the operator().

#include <iostream>

// Define a function object class
class MyFunctor {
public:
    // Overload the function call operator ()
    int operator()(int x, int y) const {
        return x + y;
    }
};

int main() {
    MyFunctor myFunc; // Create an instance of the function object

    int result = myFunc(3, 4); // Call the function object as if it were a function

    std::cout << "Result: " << result << std::endl; // Output: 7

    return 0;
}
// In this example, MyFunctor is a function object class with an overloaded operator() that takes two int parameters and returns their sum. When myFunc(3, 4) is called, it's essentially invoking the operator() function of the myFunc object, resulting in 3 + 4, which yields 7.

// Function objects are particularly useful in scenarios where you need to parameterize behavior, such as when using algorithms from the Standard Library like std::sort, std::transform, or when you need custom comparison functions for containers like std::set or std::map. They provide more flexibility than regular functions, allowing state to be maintained between calls.






