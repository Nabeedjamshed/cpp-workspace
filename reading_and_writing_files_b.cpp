// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     // ofstream class ka use krke nabeed name ke ek stream bnae. nabeed stream program mai se data ko lekr file mai trasmit krrhi hai that's why it is called output stream kyu ke ye program main se data jo out krke file mai bhj rhi.
//     ofstream nabeed("sample.txt");
//     // cout<<"Enter your name :";

//     string st = "Nabeed Jamshed";
//     // cin>>st;
//     // getline(cin,st);
//     nabeed << "Your name is: " << st; // agr name Nabeed Jamshed denge tiu file mai jsut Nabeed hi jaega bcz cin white spaces ko consider nhi krta hai.
//     nabeed.close();                   // close() se compiler ko bta rhe ke ye file ab close hogae hai.Program or file ka link khatm hogya by using this.jese hi program khatm hoga ye file automatically bhi close hojaegi but good practice is that ke close() function use krain.

//     // ifstream class ka use krke filza name ke ek stream bnae.filza stream file mai se data ko trasmit krke program mai larhi hai that's why it is called an input stream.
//     ifstream filza("sample.txt");
//     string content;
//     getline(filza, content);
//     cout << content;
//     filza.close();

//     return 0;
// }


// You can also use open() function ko open a file intead of using constructor. ye constructor or member function open() ofstream or ifstream classes ke hai 
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // ofstream out;
    // out.open("sample.txt");
    // out<<"Hello Nabeed Jamshed";
    // out.close();

    ifstream in;
    string st,st2; // st2 lgadenge tu file ka dostra word bhi cin lelega kyuke ye ek time per ek hi leta hai agr 2 baar kya hai tu 2 lelega.
    in.open("sample.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    // If you want ke file mai jitni bhi line hai wo sari read hojae tu bhut sare getline use krne ke bjae you can use while loop
    while (in.eof() == 0) // eof means end of file means jb tk file khtm na hojae tb  tk read krte rho.eof() == 0 means jb end of file aje tb tk read kro jese hi eof aje ga tu ye condition false hojaegi or loop terminate hojaega.
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    return 0;
}