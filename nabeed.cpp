// // #include <iostream>

// // using namespace std;

// // class A
// // {
// // public:
// //     A()
// //     {
// //         callA = 0;
// //     }

// // private:
// //     int callA;
// //     void inc()
// //     {
// //         callA++;
// //     }

// // protected:
// //     void func(int &a)
// //     {
// //         a = a * 2;
// //         inc();
// //     }

// // public:
// //     int getA()
// //     {
// //         return callA;
// //     }
// // };

// // class B
// // {
// // public:
// //     B()
// //     {
// //         callB = 0;
// //     }

// // private:
// //     int callB;
// //     void inc()
// //     {
// //         callB++;
// //     }

// // protected:
// //     void func(int &a)
// //     {
// //         a = a * 3;
// //         inc();
// //     }

// // public:
// //     int getB()
// //     {
// //         return callB;
// //     }
// // };

// // class C
// // {
// // public:
// //     C()
// //     {
// //         callC = 0;
// //     }

// // private:
// //     int callC;
// //     void inc()
// //     {
// //         callC++;
// //     }

// // protected:
// //     void func(int &a)
// //     {
// //         a = a * 5;
// //         inc();
// //     }

// // public:
// //     int getC()
// //     {
// //         return callC;
// //     }
// // };

// // class D : protected A, public B, public C
// // {

// //     int val;

// // public:
// //     // Initially val is 1
// //     D()
// //     {
// //         val = 1;
// //     }

// //     // Implement this function
// //     void update_val(int new_val)
// //     {
// //         while (new_val % 2 == 0)
// //         {
// //             A::func(val);
// //             new_val /= 2;
// //         }
// //         while (new_val % 3 == 0)
// //         {
// //             B::func(val);
// //             new_val /= 3;
// //         }
// //         while (new_val % 5 == 0)
// //         {
// //             C::func(val);
// //             new_val /= 5;
// //         }
// //     }
// //     // For Checking Purpose
// //     void check(int);
// // };

// // void D::check(int new_val)
// // {
// //     update_val(new_val);
// //     cout << "Value = " << val << endl
// //          << "A's func called " << getA() << " times " << endl
// //          << "B's func called " << getB() << " times" << endl
// //          << "C's func called " << getC() << " times" << endl;
// // }

// // int main()
// // {

// //     D d;
// //     int new_val;
// //     cin >> new_val;
// //     d.check(new_val);
// // }



// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     vector <int> v1;
//     int n1;
//     cin>>n1;
//     for (int i=0; i<n1; i++) {
//         int n2;
//         cin>>n2;
//         v1.push_back(n2);
//     }  
//     int n3;
//     cin>>n3;
//     v1.erase(v1.begin()+(n3-1));
//     int n4,n5;
//     cin>>n4>>n5;
//     v1.erase(v1.begin()+(n4-1),v1.begin()+(n5-1));
//     cout<<v1.size()<<endl;
//     for (auto x:v1) {
//         cout<<x<<" ";
//     }
//     return 0;
// }




// #include <iostream>
// #include <set>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     set<int> s;
//     int n;
//     cin>>n;
//     for (int i = 0; i<n; i++) {
//         int query,interger;
//         cin>>query;
//         cin>>interger;
//         if (query==1) {
//             s.insert(interger);
//         }
//         else if(query == 2){
//             s.erase(interger);
//         }
//         else{
//             set<int>::iterator itr=s.find(interger);
//             if (itr != s.end()){
//                 cout<<"Yes"<<endl;
//             }
//             else{
//                 cout<<"No"<<endl;
//             }
//         }
//     }
//     return 0;
// }



// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<string,int>m;
//     int n;
//     cin>>n;
//     for (int i = 0; i<n; i++) {
//         int query,marks;
//         cin>>query;
//         string name;
//         if (query == 1) {
//         cin>>marks;
//         m.insert(make_pair(name,marks));
//         }
//         else if(query == 2){
//             m.erase(name);
//         }
//         else{
//             map<string,int>::iterator itr=m.find(name);
//             if (itr != m.end()){
//                 cout<<0<<endl;
//             }
//         int sum;
//         if (query==3) {
//             if (query==1) {
//                 sum = marks + marks;
//             }
//         }
//         cout<<sum;
//         }
//     }
//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <sstream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> l;
//     string input_str;
//     getline(std::cin, input_str); // Input in a single line

//     stringstream ss(input_str);
//     string token;

//     while (getline(ss, token, ',')) {
//         int n3 = stoi(token);
//         l.push_back(n3);
//     }

//     for (int j : l) {
//         cout << j << endl;
//     }

//     return 0;
// }







