// #include<iostream>
// using namespace std;

// class Car{
//     private:
//         string brand,model;
//         int year;
//     public:
//         Car(string b,string m, int y){
//             brand = b;
//             model = m;
//             year = y;
//         }
//         void getdata(){
//             cout<<"Brand: "<<brand<<endl;
//             cout<<"Model: "<<model<<endl;
//             cout<<"Year: "<<year<<endl;
//         }
// };
// class Driver{
//     public:
//         void drive(Car &c){
//             int speed = 100;
//             cout<<"Speed: "<<speed;
//         }
// };
// int main() {
//     Car c1("Toyota", "Yaris", 2020);
//     c1.getdata();
//     Driver d1;
//     d1.drive(c1);
//     return 0;
// }



// Aggregation

// #include<iostream>
// using namespace std;

// class Teacher{
//     private:
//         string name; int salary;
//     public:
//         Teacher(string n, int s){
//             name = n;
//             salary = s;
//         }
// };
// class Department{
//     private:
//         string math, physics, chemistry;
//         Teacher *p;
//     public:
//         void setdepartment(Teacher *ptr){
//             p = ptr;
//         }

// };
// int main() {
//     Teacher t1("Asma", 10000);
//     Department d1;
//     d1.setdepartment(&t1);
//     return 0;
// }



#include<iostream>
using namespace std;

class Instructor{
    private:
        string name; int phone_no;
    public:
        Instructor(string n="", int p=0){
            name = n;
            phone_no = p;
        }
        void setData(string n, int p){
            name = n;
            phone_no = p;
        }
        void print(void){
            cout<<"Name of instructor is: "<<name<<endl;
            cout<<"Phone no of instructor is: "<<phone_no<<endl;
        }
};

class TextBook{
    private:
        string title; int pages;
    public:
        TextBook(string t="", int pg=0){
            title = t;
            pages = pg;
        }
        void set_BookData(string t, int pg){
            title = t;
            pages = pg;
        }
        void print(void){
            cout<<"Book title is: "<<title<<endl;
            cout<<"Book pages: "<<pages<<endl;
        }
};

class Courses{
    private:
        string course_name; 
        Instructor inst;
        TextBook text;
    public:
        Courses(string n, int p, string t, int pg, string c=""){
            course_name = c;
            inst.setData(n,p);
            text.set_BookData(t,pg);
        }
        void setCourse(string n, int p, string t, int pg, string c=""){
            course_name = c;
            inst.setData(n,p);
            text.set_BookData(t,pg);
        }
        void print(void){
            cout<<"Course Name is: "<<course_name<<endl;
            inst.print();
            text.print();
        }
};
int main() {
    Courses c("Nabeed", 031021, "Object Oriented Programming", 1200, "OOP");
    c.print();
    return 0;
}