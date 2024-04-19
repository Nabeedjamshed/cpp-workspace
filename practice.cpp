// #include<iostream>
// using namespace std;

// int main() {
//     int marks[] = {23,44,51,62};
// int* p = marks;  //  yha & marks ke saath nhi likhna error aaega. Agr ye array nhi just ek variable hota tu & aata.
// for(int i=0;i<4;i++) {
//     cout<<"The address of marks "<<i<<" is "<<(p+i)<<endl;  // yha p li jga &marks bhi likhe skte error nhi aaega but address change aaega
// }
// cout<<endl;

// int* q = marks;
// for(int j=0;j<4;j++) {
//     cout<<"The value of marks "<<j<<" is "<<*(q+j)<<endl;
// }
// for(int i = 0;i<4;i++) {
//     cout<<marks[i]<<endl;
// }
// int* p = marks;
// cout<<"The value of marks is "<<*p<<endl;
// p++;
// cout<<"The value of marks is "<<*(++p);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// typedef struct employee
// {
//     string name;
//     int eid;
//     float salary;
//     char favChar;
// } se;

// int main() {
//     se nabeed;
//     nabeed.name = "Nabeed JAmshed";
//     nabeed.eid = 101;
//     nabeed.salary = 10000000;
//     nabeed.favChar = 'c';
//     cout<<"Name: "<<nabeed.name<<endl;
//     cout<<"Employee ID: "<<nabeed.eid<<endl;
//     cout<<"Salary: "<<nabeed.salary<<endl;
//     cout<<"Favourite Character: "<<nabeed.favChar<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
//******By value*********
// void swp(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swp(x,y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y;
//     return 0;
// }

//******By Reference using pointers**********
// void swp(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swp(&x,&y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y;
//     return 0;
// }
// int b = 3;
// int* a= &b;

//******By Reference using reference variables**********
// void swp(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swp(x,y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y;
//     return 0;
// }

//****** Return By Reference **********
// int& swp(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a; // (a) as a reference return horha ye x ka reference hai a ki value as a reference 56 hogae hai tu x ki value bhi 56 hojaegi.
// }
// int main() {
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swp(x,y) = 56;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     switch (n)
//     {
//     case 0:
//         cout<<"zero";
//         break;
//     case 1:
//         cout<<"one";
//         break;
//     case 2:
//         cout<<"two";
//         break;
//     case 3:
//         cout<<"three";
//         break;
//     case 4:
//         cout<<"four";
//         break;
//     case 5:
//         cout<<"five";
//         break;
//     case 6:
//         cout<<"six";
//         break;
//     case 7:
//         cout<<"seven";
//         break;
//     case 8:
//         cout<<"eight";
//         break;
//     case 9:
//         cout<<"nine";
//         break;

//     default:
//         if(n%2 == 0) {
//             cout<<"even";
//         }
//         else {
//             cout<<"odd";
//         }
//         break;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int a,b,c,d;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     cin>>d;
//     cout<<max(max(a, b), max(c, d)); // --> in c++ pairs ki form mai maximum niklta hai.
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class binary
// {
//     private:
//         string s;
//     public:
//         void read();
//         void chk_binary();
//         void one_compliment();
//         void two_compliment();
//         void display();
// };

// void binary :: read()
// {
//     cout<<"Enter the number: ";
//     cin>>s;
// }

// void binary :: chk_binary()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i) != '0' and s.at(i) != '1')
//          {
//             cout<<"Invalid binary format";
//             exit(0);
//         }
//     }
// }

// void binary :: one_compliment()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else {
//             s.at(i) = '0';
//         }
//     }
// }

// void binary :: two_compliment()
// {
//     int i;
//     int n = s.length();
//     for(i = n-1; i >= 0; i--)
//     {
//         if(s.at(i) == '0')
//         {
//             s.at(i) = '1';
//             break;
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     if(i == -1)
//     {
//         s = '1' + s;
//     }
//     }
// }

// void binary :: display()
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }
// int main()
// {
//     binary b;
//     b.read();
//     b.chk_binary();
//     cout<<"Binary number!!"<<endl;
//     b.display();
//     b.one_compliment();
//     cout<<"One's compliment of a binary number!!"<<endl;
//     b.display();
//     b.two_compliment();
//     cout<<"Two's compliment of a binary number!!"<<endl;
//     b.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void merge(int arr[], int left, int mid, int right)
// {
//     int n1, n2;
//     n1 = mid - left + 1;
//     n2 = right - mid;
//     int a[n1];
//     int b[n2];
//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[left + i];
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }
//     int i, j, k;
//     i = 0, j = 0, k = left;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];
//         j++;
//         k++;
//     }
// }

// void merge_sort(int arr[], int left, int right)
// {
//     if (left < right)
//     {
//         int mid = (left + right) / 2;
//         merge_sort(arr, left, mid);
//         merge_sort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the total numbers of an array: ";
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter the numbers: ";
//         cin >> arr[i];
//     }
//     cout << endl;
//     cout << "Input Array!!" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Sorted Array!!" << endl;
//     merge_sort(arr, 0, n - 1);
//     for (int j = 0; j < n; j++)
//     {
//         cout << arr[j] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Complex;
// class Calculator{
//     public:
//     int sumrealdata(Complex, Complex);
//     int sumcomplexdata(Complex, Complex);
// };
// class Complex{
//     int a,b;
//     friend int Calculator :: sumrealdata(Complex, Complex);
//     friend int Calculator :: sumcomplexdata(Complex, Complex);

//     public:
//     int setdata(int v1, int v2) {
//         a = v1;
//         b = v2;
//     }
// };
// int Calculator::sumrealdata(Complex o1, Complex o2) {
//     return (o1.a+o2.a);
// }
// int Calculator::sumcomplexdata(Complex o1, Complex o2) {
//     return (o1.b+o2.b);
// }
// int main() {
//     Complex c1, c2;
//     c1.setdata(2, 4);
//     c2.setdata(4,7);
//     Calculator cal;
//     int sum;
//     sum = cal.sumrealdata(c1, c2);
//     cout<<"The sum of the real part is: "<<sum<<endl;
//     int res;
//     res = cal.sumcomplexdata(c1, c2);
//     cout<<"The sum of the real part is: "<<res<<endl;

//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int a;
//     cout<<"Enter the number: ";
//     cin>>a;
//     int sq = pow(a, 2);
//     cout<<"Square is: "<<sq;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void facto(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//         cout<<i<<"! is "<<fact<<endl;
//     }
// }
// int main() {
//     facto(10);

//     return 0;
// }

// #include <iostream>
// #include <cctype>
// using namespace std;

// int main()
// {
//     string n;
//     cout << "Enter a phrase: ";
//     getline(cin, n);
//     int totalchr = n.length();
//     int totalletters = 0;
//     int totalwords = 0;
//     for (char c : n)
//     {
//         if (isalpha(c))
//         {
//             totalletters++;
//         }
//         if (isspace(c))
//         {
//             totalwords++;
//         }
//     }
//     totalwords++;

//     cout << "Total characters are: " << totalchr << endl;
//     cout << "Total letters are: " << totalletters << endl;
//     cout << "Total words are: " << totalwords << endl;
//     return 0;
// }


// #include<iostream>
// #include<cctype>
// using namespace std;

// int main() {
//     char x;
//     int wcount = 1;
//     int ccount = 0;
//     int lcount = 0;
//     cout<<"Enter the phrase: ";
//     while(cin.get(x) && x != '\n') {
//         if (x == ' ')
//         {
//             wcount++;
//         }
        
//         else
//         {
//             ccount++;
//         }
//         if(isalpha(x)){
//             lcount++;
//         }
//     }
//     cout<<"Total words are: "<<wcount<<endl;
//     cout<<"Total char are: "<<ccount<<endl;
//     cout<<"Total letters are: "<<lcount<<endl;
//     return 0;
// }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     vector <int> l;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int n1;
//         cin>>n1;
//         l.push_back(n1);
//     }

//     sort(l.begin(),l.end());
//     for (auto x:l) { // auto ka matlab hai ke compile time variable ki data type decide hogi, auto ki jga int, float etc bhi likh skte age x ki datatype ko fix krna chate.S
//         cout<<x<<" ";
//     }
//     return 0;
// }



// #include <iostream>

// using namespace std;

// class Rectangle{
//     public:
//     int width,heigth;
//      void display(){
//           cout<<width<<""<<heigth<<endl;
//         }
// };
// class RectangleArea:public Rectangle{
//     public:
//         void read_input(){
//             cin>>width>>heigth;
//         }
//         void display(){
//             int result;
//             result = width * heigth;
//             cout<<result;
//         }
// };


// int main(){
//     RectangleArea r_area;
//     r_area.read_input();
//     r_area.Rectangle::display();
//     r_area.display();
    
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     vector <int> l;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int n1;
//         cin>>n1;
//         l.push_back(n1);
//     }
//     reverse(l.begin(),l.end());
//     for(auto x:l){
//         cout<<x<<" ";
//     }
//     return 0;
// }   


// #include<iostream>
// using namespace std;

// int main() {
//     int n1,n2;
//     cin>>n1;
//     cin>>n2;
//     string inttoword(int num)
//     {
//         string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//         for (n1; n1 <= n2; n1++)
//         {
//             if (n1>= 1 && n1<=9)
//             {
//                 return words[n1];
//             }
        
//         }
//     }
    
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     string s1,s2,s4;
//     cin>>s1;
//     cin>>s2;
//     s4 = s1;
//     cout<<s1.size()<<" "<<s2.size()<<endl;
//     string s3 = s1 + s2;
//     cout<<s3<<endl;
//     s1[0] = s2[0];
//     cout<<s1<<" ";
//     s2[0] = s4[0];
//     cout<<s2;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter a number: ";
//         cin>>a[i];
//     }
//     int sum = 0;
//     int avg = 0;
//     for(int i:a){
//         sum = sum + i;
//     }
//     avg = sum / (sizeof(a)/4);
//     cout<<avg<<endl;
//     return 0;
// }   


// #include<iostream>
// using namespace std;

// int avg(int b[],int size){
//     int sum=0;
//     for (int i = 0; i < size;i++)
//     {
//         sum += b[i];
//     }
//     int avg = sum/size;
//     return avg; 
// }
// int main() {
//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter a number: ";
//         cin>>a[i];
//     }
//     int average;
//     int size;
//     size = (sizeof(a)/4);
//     average = avg(a,size);
//     cout<<average<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// struct Distance{
//     int feet;
//     float inches;
// };
// struct Room{
//     Distance length;
//     Distance width;
// };

// int main() {
//     // values v;
//     // v.feet = 2;
//     // v.inches = 3.4;
//     // cout<<v.feet<<endl<<v.inches<<endl;

//     // Room Bedroom = {{4,3.4},{5,6.3}};
//     Room dining;
//     dining.length.feet = 4;
//     dining.length.inches = 3.4;
//     dining.width.feet = 6;
//     dining.width.inches = 2.4;
//     cout<<dining.length.feet<<endl<<dining.length.inches<<endl<<dining.width.feet<<endl<<dining.width.inches<<endl;
//     return 0;
// }