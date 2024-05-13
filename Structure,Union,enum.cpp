#include<iostream>
using namespace std;
//*********Structures***********
//Structure ---> Structure is the user define data type. It is use to combine antities
//different types of items(int,float,char etc) because this is not possible in array.
// Structure tb bnate hai jb hum ek aesi user define data type bnana chate ho jis ke ander
// ki entities different data type ho.
typedef struct employee
{
    string name;
    int eid;
    float salary;
    char favChar;
} se; // if we want ke hr baar struct employee na likhna parhe tu usse phele typedef lga kr last mai jo name rakhna rakhlo

void setdata(employee e1){
    e1.eid = 12;
    e1.salary = 2423;
    e1.favChar = 'b';
    e1.name = "Nabeed";
}
int main() {
    // se nabeed;
    // nabeed.eid = 101;
    // nabeed.name = "Nabeed Jamshed";
    // nabeed.salary = 12000000.00;
    // nabeed.favChar = 'n';
    // cout<<"Name: "<<nabeed.name<<endl;
    // cout<<"Student ID: "<<nabeed.eid<<endl;
    // cout<<"Salary: "<<nabeed.salary<<endl;
    // cout<<"Favourite character: "<<nabeed.favChar<<endl;
    employee na;
    setdata(na);
}
// //******Union********
// // union is just like a structure but it also provide better memory management
// union money
// {
//     int rise; // We can define money is so many ways like how many kg rice hai iske point se 
//               //money ko describe krskte.car and pounds same as ye just currency ko define krrhe.
//     float pounds;
//     char car;
//     /*
//     at union above 3 maise at a time 1 hi use krskte means money ko ek hi mai define krskte.
//     lets say whenever we use pound so on that time mujhe rise,car se koi matlab nhi hoga. 
//     So agr mai chata ho ke rise, pounds, car etc mai se koi 1 use kro tu union use krenge iskelie.
//     By the help of union memory ko apne hisaab se optimize kr skte.
//     Union rise, pounds and car ke between memory ko share kr dega. eg: let say rise and pounds 
//     4byte lete in memory or car 1byte leta tu union just 4byte allocate krega means jo maximum 
//     hoga wo allocate krdega tu isse baqi walo ka bhi kaam bnjae ga kyu ke baqi wali usse km byte
//     ki hai tu agr max ki jga wo aati tu wo bhi us block mai aaskti while agr ye stucture hota 
//     tu 4+4+1=9bype allocate(chalejate) memory ke.
//     agr rice = 10 krte ho tu ye 4byte ko use krlega, lekin agr kha pounds = 20.22 tu rice 
//     overwrite hojaega ab aap pound use krrhe ho.

//     ***Remember Union mai jitne bhi datatype hote hao un ko memory share ki jati hai or 
//     jo max wala hota us ke hisaab se ek block bn hjata wo bhi us mai aaskta or uuse km 
//     wale bhi ek waqt per ek hi aasktain union.
//     */
// };
// int main() {
//     union money m1;
//     m1.rise = 44;
//     m1.car = 'c';
//     cout<<m1.car;
//     cout<<m1.rise; //---> this show garbage value because in memory 'c' 44 per overwrite hogya hai 
//     //agr 'c' print kraao tu wo tu hojaega but 44 nhi hoga kyuke "c" usper overwrite hogya hai garbage value show hogi.


//     // ***ENUM***
//     enum Meal{breakfast, lunch, dinner};// ---> by the help of enum aap integers ko store krskte in the form of variables.
//     //                                          In C++, an enum (short for enumeration) is a user-defined data type used to 
//     //                                          assign names to integral constants, making the code more readable and maintainable. 
//     //                                          It allows you to define a set of named constants, each associated with an integer value. 
//     //                                          The primary purpose of using enums is to make your code more expressive and self-documenting 
//     //                                          by giving meaningful names to constant values..
//     int m1 = breakfast;              //like breakfast is converted to 0, lunch converted to 1 and dinner converted to 2. 
//     // cout<<m1<<endl;  //---> 0          //enum se program readable hojata.Meal ek datatype bn chuka hai.so it means enum se aap datatype bhi bna skte.
//                                         // enum Meal ek data type bn gya or us mai 0,1,2... value store kr skte.or compare bhi kr skte like m1 == 1 etc.  
//     Meal m1 = breakfast;
//     // cout<<m1<<endl;  // ----> 0
//     cout<<breakfast<<endl; // ---> 0
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;
//     // cout<<(m1==0)<<endl; // ---> Output mai 1 aaega it means m1(breakfast) 0 ke equal hai.it means enum 0,1,2 values ko store krrta.breakfast,lunch,dinner ye just 0,1,2 ke name dedie hai for readiblity
//     return 0;
// }






