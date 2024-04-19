/*There are 3 types of loops
for,while,do-while
1.***************For Loop***************
for (initialization, condition, updation(step)) {
    loop body(C++ Code)
}
*/
#include<iostream>
using namespace std;
int main() {
    // int table_no,table_range;
    // cout<<"Enter the table the number: ";
    // cin>>table_no;
    // cout<<"Enter the table range: ";
    // cin>>table_range;
    // for(int i=1;i<=table_range;i++) {
    //     cout<<table_no<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<table_no*i<<endl;

    // }
    // int i = 1;
    // while(i<=100) {
    //     if(i%2 == 0) {
    //         cout<<i<<endl;
    //     }
    //     i++;   
    // }
    // cout<<"Done while loop";

    // Infinite loop bhi bn skta for using "while(true)"

    // int i = 1;
    // while(true) {
    //     cout<<i<<endl;
    //     i++;
    // }


    // ***Handling of infinite while(true) loop***
    // int i = 1;
    // while(true) {
    //     if(i<=100) {
    //         cout<<i<<endl;
    //     }
    //     else {
    //         break;
    //     }
        
    //     i++;
    // }

    //**********do-while loop**********
    /* In do-while loop if the condition is totally false 
    tb bhi 1 baar loop run hoga do means ek baar krdo phir condition check kro
    Syntex!
    do {
        statements
        step
    } while(condition);
    */
//    int i = 1;
//    do {
//     if(i%2==0) {
//         cout<<i<<endl;
//     }
//     i++;
//    }while(i<=40);
    // int i = 1; --> ye loop ek baar chalega bcz do hai.
    // do {
    //     cout<<i<<endl;
    //     i++;
    // }while(false);
    // int a = 6, i = 1;
    // do{
    //     cout<<a<<" "<<"x"<<" "<<i<<" "<<"="<<" "<<a*i<<endl;
    //     i++;
    // }while(i<=10);
    return 0;
}