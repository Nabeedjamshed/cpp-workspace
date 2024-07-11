#include <iostream>
using namespace std;

int startl2() {
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Start of Lab 02\n" << endl;
    return 0;
}
int main() {
    startl2();
    char c;
    cout << "Entre a character: ";
    cin >> c;
    if (int(c) >= 65 && int(c) <= 90){
        cout << "You entered Capital letter";
    } else if (int(c) >= 97 && int(c) <= 122) {
        cout << "You entered Small letter";
    } else if (int(c) >= 48 && int(c) <= 57) {
        cout << "You entered a digit";
    } else {
        cout << "You entered special symbol";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n"<< endl;
//     cout << "Lab 02\n"<< endl;
//     return 0;
// }
// int main() {
//     startL2();
//     int calls;
//     cout << "Enter the number of calls: ";
//     cin >> calls;
//     int bills;
//     if (calls <= 100) {
//         bills = 200;
//     } else if (calls <= 150) {
//         bills = 200 + (calls - 100) * 0.60;
//     } else if (calls <= 200) {
//         bills = 200 + (50) * 0.60 + (calls - 150) * 0.50;
//     } else {
//         bills = 200 + (50) * 0.60 + (50) * 0.50 + (calls - 200) * 0.40;
//     }
//     cout << "Your monthly telephone bill is Rs. " << bills;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n"<< endl;
//     cout << "Lab 02\n"<< endl;
//     return 0;
// }

// bool upper = 0;
// bool lower = 0;
// bool digit = 0;
// bool special_character = 0;
// bool length = 0;
// int check(string s) {
//     for (auto i : s) {
//         if (isupper(i)) {
//             upper = 1;
//         } else if (islower(i)) {
//             lower = 1;
//         } else if (i >= 48 && i <= 57){
//             digit = 1;
//         } else if ((i >= 0 && i <= 47) || (i >= 58 && i <= 64) || (i >= 91 && i <= 96) || (i >= 123 && i <= 127)){
//             special_character = 1;
//         } else if (s.size() < 8) {
//             length = 1;
//         }
//     }
// }

// int main() {
//     startL2();
//     string s;
//     cout << "Enter a password: ";
//     cin >> s;
//     check(s);
//     if (upper == 0) {
//         cout << "Weak password" << endl;
//         cout << "Password must contain atleast one uppercase character.";
//     } else if (lower == 0) {
//         cout << "Weak password" << endl;
//         cout << "Password must contain atleast one lowercase character.";
//     } else if (digit == 0){
//         cout << "Weak password" << endl;
//         cout << "Password must contain atleast one digit.";
//     } else if (special_character == 0) {
//         cout << "Weak password" << endl;
//         cout << "Password must contain atleast one special character.";
//     } else if (length == 1){
//         cout << "Weak password" << endl;
//         cout << "Password's length must be atleast 8 character.";
//     } else {
//         cout << "Strong password";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int startL2(){
//     cout << "\nName: Nabeed Ali (SE-23054)\n"<< endl;
//     cout << "Lab 02\n"<< endl;
//     return 0;
// }

// int main() {
//     startL2();
//     int table_no,table_limit;
//     cout<<"Enter a table number: ";
//     cin>>table_no;
//     cout<<"Enter a table limit: ";
//     cin>>table_limit;
//     for (int i = 1; i <= table_limit; i++) {
//         cout<<table_no<<" x "<<i<<" = "<<table_no*i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int startL2(){
//     cout << "\nName: Nabeed Ali (SE-23054)\n"<< endl;
//     cout << "Lab 02\n"<< endl;
//     return 0;
// }

// void check(){
//     int n1,n2;
//     char operation;
//     cout<<"Enter number 1: ";
//     cin>>n1;
//     cout<<"Enter number 2: ";
//     cin>>n2;
//     cout<<"Enter the operation which you want to perform(+,-,*,/): ";
//     cin>>operation;
//     switch (operation){
//     case '+' : cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<n1+n2<<endl;
//         break;
//     case '-' : cout<<"The subtraction of "<<n1<<" and "<<n2<<" is "<<n1-n2<<endl;
//         break;
//     case '*' : cout<<"The multiplication of "<<n1<<" and "<<n2<<" is "<<n1*n2<<endl;
//         break;
//     case '/' : cout<<"The division of "<<n1<<" and "<<n2<<" is "<<float(n1/n2)<<endl;
//         break;
//     default: cout<<"Invalid input!!";
//         break;
//     }
// }
// int main() {
//     startL2();
//     check();
//     while (true){
//         char c;
//         cout<<"Do you want to perform more operations (Y/N): ";
//         cin>>c;
//         if (c=='Y'){
//             check();
//         } else {
//             break;
//         }
//     }
//     return 0;
// }  

// #include <iostream>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 02\n" << endl;
//     return 0;
// }

// int fabonacci(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return fabonacci(n - 1) + fabonacci(n - 2);
//     }
// }

// int main() {
//     startL2();
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << "Fabonacci Series: ";
//     for (int i = 0; i <= num; i++) {
//         cout << fabonacci(i) << " ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<random>
// #include<vector>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 02\n" << endl;
//     return 0;
// }
// int main() {
//     startL2();
//     vector<string> inputs = {"rock", "paper", "scissor"};
//     string user_choice;
//     cout<<"Enter your choice: ";
//     cin>>user_choice;
    
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dist(0, inputs.size() - 1);
//     int randomIndex = dist(gen);
//     string computer_choice = inputs[randomIndex];
//     if ((user_choice == "rock" && computer_choice == "paper") || (user_choice == "paper" && computer_choice == "scissor") || (user_choice == "scissor" && computer_choice == "rock"))
//     {
//         cout<<"Computer choice "<<computer_choice<<endl<<"Your choice "<<user_choice<<endl<<"Computer wins!!";
//     } else if (user_choice == computer_choice)
//     {
//         cout<<"Computer choice "<<computer_choice<<endl<<"Your choice "<<user_choice<<endl<<"Match draws";
//     } else {
//         cout<<"Computer choice "<<computer_choice<<endl<<"Your choice "<<user_choice<<endl<<"You wins!!";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 02\n" << endl;
//     return 0;
// }
// int main() {
//     startL2();
//     int day;
//     cout<<"1->Sunday, 2->Monday, 3->Tuesday, 4->Wednesday, 5->Thursday, 6->Friday, 7->Saturday"<<endl;
//     cout<<"Enter the day number: ";
//     cin>>day;
//     switch (day) 
//     {
//     case 1: cout<<"Sunday";
//         break;
//     case 2: cout<<"Monday";
//         break;              
//     case 3: cout<<"Tuesday";
//         break;
//     case 4: cout<<"Wednesday";
//         break;
//     case 5: cout<<"Thursday";
//         break;
//     case 6: cout<<"Friday";
//         break;
//     case 7: cout<<"Saturday";
//         break;
//     default: cout<<"Invalid input!!";
//     }
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 02\n" << endl;
//     return 0;
// }
// int main() {
//     startL2();
//     cout<<"Encrypting"<<endl;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     string s;
//     cout<<"Enter a string: ";
//     cin>>s; 
//     string ne;
//     for(auto i:s){
//         if((int(i) >= 97 && int(i) <= 122) || (int(i) >= 65 && int(i) <= 90) || (i >= 0 && i <= 47) || (i >= 58 && i <= 64) || (i >= 91 && i <= 96) || (i >= 123 && i <= 127)){
//             ne = char(i+n);
//         }
//         cout<<ne;
//     }
//     cout<<endl;
//     cout<<"Decrypting"<<endl;
//     string d_string;
//     cout<<"Enter a string: ";
//     cin>>d_string;
//     for(auto i:d_string){
//         if((int(i) >= 97 && int(i) <= 122) || (int(i) >= 65 && int(i) <= 90) || (i >= 0 && i <= 47) || (i >= 58 && i <= 64) || (i >= 91 && i <= 96) || (i >= 123 && i <= 127)){
//             ne = char(i-n);
//         }
//         cout<<ne;
//     }
//     return 0;
// }



// #include <iostream>
// #include <random>
// #include <ctime>
// using namespace std;

// int startL2() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 02\n" << endl;
//     return 0;
// }
// int main() {
//     startL2();
//     mt19937 gen(static_cast<unsigned int>(time(nullptr)));
//     int initial = 1;
//     int final = 10;
//     uniform_int_distribution<> dis(initial, final);

//     int random_number = dis(gen);
//     int user_input;
//     cout<<"Guess a number: ";
//     cin>>user_input;
//     if (random_number == user_input)
//     {
//         cout<<"Computer choice: "<<random_number<<endl<<"Your choice: "<<user_input<<endl<<"You wins!!";
//     } else{
//         cout<<"Computer choice: "<<random_number<<endl<<"Your choice: "<<user_input<<endl<<"You lose!!";
//     }
//     return 0;
// }


