// #include<iostream>
// using namespace std;

// struct Employee{
//     string destination;
//     char name[15];
//     int salary;
// };
// Employee getdata(Employee e1){
//     cout<<"Enter a name: ";
//     cin.get(e1.name, 15);
//     cout<<"Enter a destination: ";
//     cin>>e1.destination;
//     cout<<"Enter a salary: ";
//     cin>>e1.salary;
//     return e1;
// }
// int main() {
//     Employee e2;
//     Employee e3 = getdata(e2);
//     cout<<"Name: "<<e3.name<<endl;
//     cout<<"Destination: "<<e3.destination<<endl;
//     cout<<"Salary: "<<e3.salary<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void sum(int *p1, int *p2){
//     int c[5];
//     int *s;
//     s = c;
//     for (int i = 0; i < 5; i++)
//     {
//         *s = *p1 + *p2;
//         cout<<*p1<<" + "<<*p2<<" = "<<*s<<endl;
//         p1++;
//         p2++;
//     }
    
// }
// int main() {
//     int a[5] = {1,2,3,4,5};
//     int b[5] = {7,3,6,3,5};
//     int *ptr1;
//     int *ptr2;
//     ptr1 = a;
//     ptr2 = b;
//     sum(ptr1,ptr2);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char x;
//     int lcount = 0;
//     int ccount = 0;
//     int wcount = 1;
//     cout<<"Enter any phrase: ";
//     while (cin.get(x) && x != '\n')
//     {
//         ccount++;
//         if (x == ' ')
//         {
//             wcount++;
//         }
//         else{
//             lcount++;
//         }
//     }
//     cout<<wcount<<endl;
//     cout<<lcount<<endl;
//     cout<<ccount<<endl;
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int no;
//     cout<<"Enter a number: ";
//     cin>>no;
//     bool flag = 0;
//     if (no <2)
//     {
//         cout<<no<<" is not prime.";
//     }else{
//         for (int i = 2; i <= sqrt(no); i++)
//         {
//             if (no%i == 0)
//             {
//                 cout<<no<<" is not prime.";
//                 flag = 1;
//                 break;
//             }
            
//         }
//         if (flag == 0)
//         {
//         cout<<no<<" is prime.";
//         }
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter a number: ";
//         cin>>arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + arr[i];
//     }
//     float avg = sum / size;
//     cout<<"The sum is: "<<sum<<endl;
//     cout<<"The avg is: "<<avg<<endl;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int fac(int a[],int size){
//     int fact = 1;
//     for (int i = 0; i < size; i++)
//     {
//         fact = fact * a[i];
//     }
//     return fact;
// }
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int size = (sizeof(arr) / sizeof(arr[0]));
//     int result = fac(arr,size);
//     cout<<"The Factorial is: "<<result;
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
    // Room r1 = {{10, 3.2}, {25,4.9}};
    // r1.length.feet = 12;
    // cout<<r1.length.feet<<endl;
    // cout<<r1.length.inches<<endl;
    // cout<<r1.width.feet<<endl;
    // cout<<r1.width.inches<<endl;

    // Distance d1,d2,d3;
    // d1.feet = 10;
    // d2.feet = 12;
    // d1.inches = 1.2;
    // d2.inches = 4.2;

    // d3.feet = d1.feet + d2.feet;
    // d3.inches = d1.inches + d2.inches;
    // cout<<d3.feet<<endl;
    // cout<<d3.inches<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int rows1,columns1;
//     cout<<"Enter the rows: ";
//     cin>>rows1;
//     cout<<"Enter the columns: ";
//     cin>>columns1;
//     int arr1[rows1][columns1];
//     int rows2,columns2;
//     cout<<"Enter the rows: ";
//     cin>>rows2;
//     cout<<"Enter the columns: ";
//     cin>>columns2;
//     int arr2[rows2][columns2];
//     int add[rows1][columns2] = {};
//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < columns1; j++)
//         {
//             cout<<"Enter number of "<<i<<" rows and "<<j<<" columns: ";
//             cin>>arr1[i][j];
//         }
//     }
//     for (int i = 0; i < rows2; i++)
//     {
//         for (int j = 0; j < columns2; j++)
//         {
//             cout<<"Enter number of "<<i<<" rows and "<<j<<" columns: ";
//             cin>>arr2[i][j];
//         }
//     }
//     cout<<endl;
//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < columns2; j++)
//         {
//             add[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < columns2; j++)
//         {
//             cout<<add[i][j]<<" ";
//         }
//         cout<<endl;
//     }  
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *ptr = arr;

//     // Printing the original data in the array
//     cout << "Original array data:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl << endl;

//     // Taking input from the user to modify the array
//     for (int i = 0; i < 5; i++) {
//         cout << "Enter new data for element " << i + 1 << ": ";
//         cin >> *(ptr + i); // Taking input directly into the array using pointer arithmetic
//     }
//     cout << endl;

//     // Printing the modified array elements
//     cout << "Modified array data:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " "; // Accessing the elements using the array name
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int *ptr1 = &a;
//     cout<<*ptr1<<endl;
//     *ptr1 = 20;
//     cout<<*ptr1<<endl;
//     cout<<ptr1<<endl;
//     int b = 1;
//     ptr1 = &b;
//     cout<<ptr1;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     const int a = 10;
//     const int *const ptr = &a;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     const int *ptr = &a;
//     cout<<*ptr<<endl;
//     cout<<ptr<<endl;
//     a = 20;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int fact = 1;
//     int i = 1;
//     int no = 5;
//     do{
//         fact = fact * i;
//         i++;
//     }
//     while(i<=no);
//     cout<<fact;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct Employee
// {
//     string name;
//     int id;
//     int salary;
// };

// int main() {
//     Employee e1[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"Enter the data of "<<i<<" employee"<<endl;
//         cin>>e1->name;
//         cin>>e1->id;
//         cin>>e1->salary;
//         cout<<e1->name<<endl;
//         cout<<e1->id<<endl;
//         cout<<e1->salary<<endl;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<e1->name<<endl;
//         cout<<e1->id<<endl;
//         cout<<e1->salary<<endl;
//     }    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int *ptr = new int;
//     *ptr = 10;
//     cout<<*ptr<<endl;
//     delete ptr;
//     cout<<*ptr<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Circle{
//     private:
//         int radius,x_coordinate,y_coordinate;
//     public:
//         Circle(){
//             radius = 0;
//             x_coordinate = 0;
//             y_coordinate = 0;
//         }
//         Circle(int r, int x, int y){
//             radius = r;
//             x_coordinate = x;
//             y_coordinate = y;
//         }
//         int getradius(){
//             return radius;
//         }
//         void setradius(int r){
//             radius = r;
//         }
//         int getx(){
//             return x_coordinate;
//         }
//         void setx(int x){
//             x_coordinate = x;
//         }
//         int gety(){
//             return y_coordinate;
//         }
//         void sety(int y){
//             y_coordinate = y;
//         }
        
// };
// int main() {
//     // Circle c(5,2,3);
//     // c.setradius(10);
//     Circle c;
//     int r = c.getradius();
//     int x = c.getx();
//     int y = c.gety();
//     cout<<"Radius: "<<r<<endl;
//     cout<<"X-Coordinate: "<<x<<endl;
//     cout<<"Y-Coordinate: "<<y<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Father{
//     private:
//         string name;
//         int age;
//         int salary;
//     public:
//         Father(string n, int a, int s){
//             name = n;
//             age = a;
//             salary = s;
//         }
//         string getname(){
//             return name;
//         }
//         int getage(){
//             return age;
//         }
//         int getsalary(){
//             return salary;
//         }
// };
// class Son:public Father{
//     private:
//         string habbit;
//     public:
//         Son(string n, int a, int s, string h): Father(n, a, s){
//             habbit = h;
//         }
//         string gethabbit(){
//             return habbit;
//         }
// };
// int main() {
//     Son s("Nabeed", 19, 13405834, "Coding");
//     cout<<s.getname()<<endl;
//     cout<<s.getage()<<endl;
//     cout<<s.getsalary()<<endl;
//     cout<<s.gethabbit()<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//      virtual void sound(){
//         cout<<"I am an animal";
//      }
// };
// class Dog:public Animal{
//     public:
//         void sound(){
//         cout<<"I am a dog";
//      }
// };
// class Cat:public Animal{
//     public:
//         void sound(){
//         cout<<"I am a cat";
//      }
// };
// int main() {
//     Animal *a[2];
//     Dog d;
//     Cat c;
//     a[0] = &d;
//     a[1] = &c;
//     a[0]->sound();
//     a[1]->sound();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if (n<0)
//     {
//         cout<<"Negative number factorial is not exist.";
//     } else {
//         if (n == 0 || n == 1)
//         {
//             return 1;
//         } else {
//             return n * fact(n-1);
//         }
//     }
// }
// int main() {
//     int result = fact(-1);
//     cout<<result;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int *ptr = arr;
//     cout<<ptr;
//     return 0;
// }