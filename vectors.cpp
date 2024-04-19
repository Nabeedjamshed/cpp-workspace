// Vector is a resizeable array means jis ke size ko chnage krskte
// #include <iostream>
// #include <vector>
// using namespace std;

// template <class T>
// void display(vector<T> &v)
// {
//     // cout<<"Display a vector";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//         // cout << v.at(i) << " "; // Both lines have same work
//     }
//     cout<<endl;
// }
// int main()
// {   
//     // Ways to create a vector!!!
//     vector<int> myvec1; // zero length integer vector means initially is mai koi element nhi hai tu iski length zeto hai.
//     // vector<float> myvec;
//     int elements;
//     cout << "Enter a number of an elements: ";
//     cin >> elements;
//     for (int i = 0; i < elements; i++)
//     {
//         int value;
//         // float value;
//         cout << "Enter a value: ";
//         cin >> value;
//         myvec1.push_back(value);
//     }
//     // int last_element = myvec.back(); // This will give last element
//     // cout<<"The last element is: "<<last_element<<endl;
//     // myvec.pop_back(); // This will remove last element
//     // myvec.insert(myvec.begin(),9); // This will insert a value of specified location
//     // vector<int> :: iterator iter = myvec.begin(); // Ye end iterator bngya hai jo last element ko point krrha hai.
//     // myvec.insert(iter,9); 
//     // myvec.insert(iter+1,9); // if i want ke 9 second position mai insert ho. 
//     // myvec.insert(iter+1,5,9); // if i want ke 9 ki copies insert ho= let sat 5 copies 9 ki insert ho at position 2
    
//     display(myvec1);



//     // vector<char>myvec2(4); //4-element character vector is ka phele hi size define krdya hai
//     // myvec2.push_back('a');
//     // myvec2.push_back('b');
//     // myvec2.push_back('c');
//     // myvec2.push_back('d');

//     // vector<char>myvec3(myvec2); //4-element character vector from myvec2
//     // myvec3.push_back('e');
//     // display(myvec3);

//     // vector<int>myvec4(4,5); // ye 5 ko 4 baar lekr uska vector bnadega.
//     // display(myvec4);

//     // vector<int>myvec5 = {1,2,3,4,5};
//     // // cout<<"The value of myvec5 at index 1 is: "<<myvec5[1]<<endl; // [] this is a operator[] isse values jo vector mai hai usse access krskte.
//     // // display(myvec5);
//     // const vector<int>& constVector = myvec5; // aese bhi access krskte value
//     // cout << "Element at index 4 (const): " << constVector[4] << endl;

//     // by using variat header file different datatypes ke members bhi ek vector mai dalskte just like python list
    
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>l;
    int n;
    cout<<"Enter a total number of an array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int n1;
        cout<<"Enter a value: ";
        cin>>n1;
        l.push_back(n1);
        for (int j = 0; j < l.size(); j++)
    {
        cout<<l[j]<<" "; // is mai l.size is lie nhi likha kyu ke hr baar sari values print hoti rheti bcz ye nested hai.
    }
    cout<<endl;
    cout<<l.size()<<endl; // kyu ke ek ek value lekr uska size print krarhe islie l.size() lo is loop mai hi dala hai jha value ka poch rhe.
    }
    
    
    return 0;
}
