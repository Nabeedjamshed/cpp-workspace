#include<iostream>
using namespace std;
int main() {
    string name;
    cout<< "Enter the your name: ";
    cin>>name;
    string f_name;
    cout<< "Enter the ypur father name: ";
    cin>>f_name;
    int roll_no;
    cout<<"Enter the roll number: ";
    cin>>roll_no;
    int math_marks;
    cout<<"Enter the marks of Math: ";
    cin>>math_marks;
    int eng_marks;
    cout<<"Enter the marks of English: ";
    cin>>eng_marks;
    int phy_marks;
    cout<<"Enter the marks of Physics: ";
    cin>>phy_marks;
    int chm_marks;
    cout<<"Enter the marks of Chemistry: ";
    cin>>chm_marks;
    int pst_marks;
    cout<<"Enter the marks of Pst: ";
    cin>>pst_marks;
    cout<<"_________________________\n";
    cout<<"Name:\t\t"<<name<<'\n';
    cout<<"Father Name:\t"<<f_name<<'\n';
    cout<<"Roll No. :\t"<<roll_no<<'\n';
    cout<<"Subjects\t"<<"Marks Out of 100\n";
    cout<<"Math\t\t"<<math_marks<<'\n';
    cout<<"English\t\t"<<eng_marks<<'\n';
    cout<<"Physics\t\t"<<phy_marks<<'\n';
    cout<<"Chemistry\t"<<chm_marks<<'\n';
    cout<<"Pst\t\t"<<pst_marks<<'\n';
    cout<<"Total Marks: "<< 500 <<'\n';
    int obtained_marks = math_marks + eng_marks+ phy_marks + chm_marks + pst_marks;
    cout<<"Obtained Marks: "<< obtained_marks<<'\n';
    float percentage = obtained_marks * 100 / 500;
    cout<<"Percentage: "<< percentage<<'%'<<'\n';
    cout<<"_________________________\n";
    if (percentage >= 90 and percentage <= 100) {
        cout<<"Congratz you get A1 Grade!!"<<'\n';
    }
    else if (percentage >= 80 and percentage <= 90) {
        cout<<"You get A Grade!!!"<<'\n';
    }
    else if (percentage >= 70 and percentage <= 80) {
        cout<<"You get B Grade!!!"<<'\n';
    }
    else if (percentage >= 60 and percentage <= 70) {
        cout<<"You get C Grade!!!"<<'\n';
    }
    else if (percentage >= 50 and percentage <= 60) {
        cout<<"You get D Grade!!!"<<'\n';
    }
    else if (percentage > 100) {
        cout<<"Invalid Data"<<'\n';
    }
    else {
        cout<<"You are Fail!"<<'\n';
    }
    cout<<"Thank You\n";
    cout<<"_________________________";
    return 0;
}