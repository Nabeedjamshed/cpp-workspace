// #include <iostream>
// #include <vector>
// using namespace std;

// class Stack
// {
    
//     vector<int> stack;
//     int count=0;
    
//     public:
//     void push(int x)
//     {
        
//         stack.push_back(x);
//         count+=1;
//     }
//     void pop()
//     {
//         if(!stack.empty())
//         {
//             stack.pop_back();
//             count-=1;
//         }
//     }
//     int top()
//     {
//         if(!stack.empty())
//         {
//         return stack[count-1];
//         }
//     }
//     bool isempty()
//     {
//         if(stack.empty())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     Stack s;
//     s.push(2);
//     s.push(3);
//     int val=s.top();
//     cout<<val;
//     s.pop();
//     val=s.top();
//     cout<<val;
    
//    return 0;
    
// }


#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> stack;
    int count = 0;
    public:
        void push(int x){
            stack.push_back(x);
            count += 1;
        }

        int top(){
            if (!stack.empty())
            {
                return stack[count-1];
            }
        }
        int pop(){
            if (!stack.empty())
            {
                int val=top();
                stack.pop_back();
                count -= 1;
                return val;
            } else {
                cout<<"Stack is empty";
            }
        }
        bool empty(){
            if(stack.empty()){
                return true;
            } else {
                return false;
            }
        }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    int val = s.top();
    cout<<val<<endl;
    cout<<s.pop()<<endl;
    bool val1 = s.empty();
    cout<<val1<<endl;
    return 0;
}



// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;

// int main() {
//     srand((unsigned)time(NULL));
//     int n = (1 + (rand() % 6));
//     cout<<n;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// class Expense{
//     private:
//         int amount; string category, date;
//     public:
//         Expense(int amount, string category, string date) {
//             this->amount = amount;
//             this->category = category;
//             this->date = date;
//         }

//         int amt(){
//             return amount;
//         }

//         string cat(){
//             return category;
//         }

//         string dt(){
//             return date;
//         }
// };

// class Expense_Tracker{
//     vector<Expense> exp;
//     public:
//         void addexpense(Expense &obj){
//             exp.push_back(obj);
//         }
//         // void removeexpense(Expense &obj){
//         //     if (!exp.empty())
//         //     {
//         //         exp.erase(obj);
//         //     }
            
//         // }
//         int gettotalexpense(){
//             int total = 0;
//             for(auto &e:exp){
//                 total += e.amt();
//             }
//             return total;
//         }
// };
// int main() {

//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[]  = {1,5,2,6,4,3};
//     int k = 4;
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     sort(arr,arr+n);
//     reverse(arr,arr+n);
//     int val = arr[k-1];
//     cout<<val;
//     return 0;
// }


// #include<iostream>
// #include<set>
// using namespace std;

// int main() {
//     int arr[] = {4,3,2,7,8,2,3,1};
//     set <int> s;
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int val = arr[i] ^ arr[j];
//             if (val==1)
//             {
//                 s.insert(arr[i]);
//                 break;
//             }
//         }
//     }
//     for(auto &a:s){
//         cout<<a<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;

// int main() {
//     map <int , int> m;
//     int arr[] = {4,3,2,7,8,2,3,3,1};
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count += 1;
//             }
//         }
//         m.insert(make_pair(arr[i],count));
//     }
//     map<int,int> :: iterator iter;
//     vector <int> v;
//     for(iter = m.begin(); iter != m.end();iter++)
//     {
//         if ((*iter).second == 2)
//         {
//             v.push_back((*iter).first);
//         }
//     }
//     for(auto &a:v){
//         cout<<a<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<set>
// using namespace std;

// int main() {
//     set <int> s;
//     int arr[] = {4,3,2,7,8,2,3,3,1};
//     int n = int(sizeof(arr) / sizeof(arr[0]));
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
    
//     set <int> :: iterator iter;
//     for(iter=s.begin();iter!=s.end();iter++){
//         cout<<(*(iter))<<" ";
//     }
//     return 0;
// }