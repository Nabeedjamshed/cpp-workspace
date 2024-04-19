//In C++ the Control stuctures gives the flow and logic of a program.
// There are 3 types of basic control structure:
// 1. Sequence Structure
// 2. Selection Structure
// 3. Loop Structure
// Sequence Structure: In Sequence Structure first we take entry in strucure then perform sequence of action then finally exist to the program
// Entry --> Action1 --> Action2 --> and so on --> exist 
// Selection Structure: In Selection Structure first we take entry in strucure then condition lgate if condition is true tu action 1 kr do agr False hogay tu action 2 krdo then exit
// Entry --> Condition(if/else) --> True(Perforn Action 1) or --> if False(Perform Action 2) --> exist 
// Loop Structure: In Loop Structure just looping technique hoti.

//There are 3 ways that we can use to model above structure in program
//1. if-else statement.
//2. if-esle ladder(multiple if-else statement)
//3. Switch Case.


    // int age;
    // cout<<"Tell me your age: ";
    // cin>>age;
    // if(age<18 and age>0) {
    //     cout<<"You cannot come to the party.";
    // }
    // else if(age==18) {
    //     cout<<"You need a pass for party.";
    // }
    // else if(age<1) {
    //     cout<<"You are not yet born.";
    // }
    // else{
    //     cout<<"You can come to the party.";
    // }
#include<iostream>
using namespace std;
int main() {
    //***********Switch Case Statements***********
    char day;
    cout<<"Enter the day first letter: ";
    cin>>day;
    switch (day) // Switch means day ki value ko check kro jis case se value match krjae wo print krado.
    {
    case 'm': cout<<"Monday";
        break;              // if there is no break tu sare cases print hojaenge like agr case 1 true howa tu wo tu print hoga lekin us ke saath saath niche wale sare cases print hojaenge.
    case 't': cout<<"Tuesday";// break just switch se bahr nikalega agr uske baad koi cout hai tu wo print hojaega.
        break;
    case 'w': cout<<"Wednesday";
        break;
    case 'T': cout<<"Thursday";
        break;
    case 'f': cout<<"Friday";
        break;
    case 's': cout<<"Saturday";
        break;
    case 'S': cout<<"Sunday";
        break;
    default: cout<<"Invalid input!!";
    }
    cout<<"\nDone with switch case!!"; //ye statement hr case mai execute hogi.
    return 0;
}