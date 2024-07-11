// // // #include <iostream>
// // // #include <algorithm>
// // // using namespace std;
// // // int main()
// // // {
// // //     int nums[5]={3,1,2,5};
// // //     int sm=0;
// // //     int n=sizeof(nums)/sizeof(int);
// // //     for (int i=0;i<n;i++)
// // //     {
// // //         sm+=nums[i];

// // //     }
// // //     int max=*max_element(nums,nums+n);
// // //     int total=max*(max+1)/2;
// // //     int number=total-sm;
// // //     cout<<number;
// // //     return 0;
// // // }


// // // #include<iostream>
// // // #include<ctime>
// // // #include<cstdlib>
// // // using namespace std;

// // // int main() {
// // //     srand((unsigned)time(NULL));
// // //     int pl1 = 1 + (rand() % 6);
// // //     int pl2 = 1 + (rand() % 6);
// // //     cout<<"Player 1 choose this: "<<pl1<<endl;
// // //     cout<<"Player 2 choose this: "<<pl2<<endl;
// // //     if (pl1>pl2){
// // //         cout<<"Player 1 Wins";
// // //     } else {
// // //         cout<<"Player 2 Wins";
// // //     }
// // //     return 0;
// // // }


// // // #include<iostream>
// // // #include<set>
// // // using namespace std;

// // // int main() {
// // //     set <int> s;
// // //     int nums[] = {1,1,1,2,2,3};
// // //     int size = sizeof(nums) / sizeof(nums[0]);
// // //     for (int i = 0; i < size-1; i++)
// // //     {
// // //         if (nums[i] == nums[i+1])
// // //         {
// // //             s.insert(nums[i]);
// // //         }
// // //     }
// // //     for(set<int>::iterator it = s.begin(); it!=s.end();it++){
// // //         cout<<*it<<" ";
// // //     }
// // //     return 0;
// // // }

// // // #include<iostream>
// // // #include<set>
// // // using namespace std;

// // // int main() {
// // //     set <int> s;
// // //     int nums[] = {1,1,1,2,2,3};
// // //     int size = sizeof(nums) / sizeof(nums[0]);
// // //     for (int i = 0; i < size; i++)
// // //     {
// // //             s.insert(nums[i]);
// // //     }
// // //     for(set<int>::iterator it = s.begin(); it!=s.end();it++){
// // //         cout<<*it<<" ";
// // //     }
// // //     return 0;
// // // }


// // // #include<iostream>
// // // #include<algorithm>
// // // using namespace std;

// // // int main() {
// // //     int nums[] = {1,2,3,5};
// // //     int n = sizeof(nums) / sizeof(nums[0]);
// // //     int sum1 = 0;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         sum1 += nums[i];
// // //     }
// // //     int max = *max_element(nums,nums+n);
// // //     int sum2 = 0;
// // //     for (int j = 1; j <= max; j++)
// // //     {
// // //         sum2 += j;
// // //     }
// // //     int result = sum2-sum1;
// // //     cout<<result;
// // //     return 0;
// // // }


// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;

// int main() {
//     map <int , int> m;
//     int nums[] = {1,1,1,2,2,3,3,3,4,4};
//     int k = 2; 
//     int n = int(sizeof(nums) / sizeof(nums[0]));
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 count += 1;
//             }
//         }
//         m.insert(make_pair(nums[i],count));
//     }
//     map<int,int> :: iterator iter;
//     vector <int> v;
 
//     for(iter=m.begin();iter!=m.end();iter++)
//     {
//         if ((*iter).second == k)
//         {
//             v.push_back((*iter).first);
//         }
//     }
         
//     for(auto &a:v){
//         cout<<a<<" ";
//     }
//     return 0;
// }


