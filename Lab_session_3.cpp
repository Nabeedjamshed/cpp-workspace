// // LAB 03
#include <iostream>
using namespace std;

int startl3()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Start of Lab 03\n" << endl;
    return 0;
}
struct Person
{
    string name;
    int age;
};

int main()
{
    startl3();
    Person p;
    p.name = "Nabeed Ali";
    p.age = 19;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    return 0;
}

// LAB 03
// #include <iostream>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// struct Rectangle
// {
//     float length;
//     float width;
// };
// int main()
// {
//     startL3();
//     Rectangle a;
//     cout << "Enter a length: ";
//     cin >> a.length;
//     cout << "Enter a width: ";
//     cin >> a.width;
//     float area = a.length * a.width;
//     cout << "The area of a rectangle is: " << area << endl;
//     return 0;
// }

// LAB 03
// #include <iostream>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// struct Product
// {
//     string productName;
//     int price;
//     int quantity;
// };
// int main()
// {
//     startL3();
//     Product p;
//     cout << "Enter the name of a product: ";
//     cin >> p.productName;
//     cout << "Enter a price: ";
//     cin >> p.price;
//     cout << "Enter a quantity: ";
//     cin >> p.quantity;
//     int total_cost = p.price * p.quantity;
//     cout << "The total cost of " << p.productName << " is " << total_cost << endl;
//     return 0;
// }

// LAB 03
// #include <iostream>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// float sum(float arr[])
// {
//     float add = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         add += arr[i];
//     }
//     return add;
// }
// struct Employee
// {
//     int employeeID[5];
//     string name[5];
//     string department[5];
//     float salary[5];
// };
// int main()
// {
//     startL3();
//     Employee e;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter details for student " << (i + 1) << endl;
//         cout << "Enter the employeeID: ";
//         cin >> e.employeeID[i];
//         cout << "Enter the name: ";
//         cin >> e.name[i];
//         cout << "Enter the department: ";
//         cin >> e.department[i];
//         cout << "Enter the salary: ";
//         cin >> e.salary[i];
//         cout << endl;
//     }
//     cout << "----------------------" << endl;
//     cout << "!! Displaying Details !!" << endl;
//     cout << "----------------------" << endl;
//     for (int j = 0; j < 5; j++)
//     {
//         cout << endl;
//         cout << "EmployeeID: " << e.employeeID[j] << endl;
//         cout << "Employee Name: " << e.name[j] << endl;
//         cout << "Department: " << e.department[j] << endl;
//         cout << "Salary: " << e.salary[j] << endl;
//     }
//     float sum_of_salary = sum(e.salary);
//     float average = sum_of_salary / 5;
//     cout << endl;
//     cout << "The average salary of all employees is: " << average;
//     return 0;
// }

// LAB 03
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// struct Student
// {
//     int rollNumber[3];
//     string name[3];
//     int age[3];
//     int marks[3];
// };
// int main()
// {
//     startL3();
//     map<string, int> max_marks_name;
//     vector<int> max_marks;
//     vector<Student> students;
//     Student s;
//     bool found = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter details of student " << i + 1 << endl;
//         cout << "Enter the roll number: ";
//         cin >> s.rollNumber[i];
//         cout << "Enter the name: ";
//         cin >> s.name[i];
//         cout << "Enter the age: ";
//         cin >> s.age[i];
//         cout << "Enter the marks: ";
//         cin >> s.marks[i];
//         max_marks_name[s.name[i]] = s.marks[i];
//         max_marks.push_back(s.marks[i]);
//         students.push_back(s);
//         cout << endl;
//     }
//     cout << "----------------------" << endl;
//     cout << "!! Displaying Details !!" << endl;
//     cout << "----------------------" << endl;
//     for (int j = 0; j < 3; j++)
//     {
//         cout << "Roll Number: " << s.rollNumber[j] << endl;
//         cout << "Name: " << s.name[j] << endl;
//         cout << "Age: " << s.age[j] << endl;
//         cout << "Marks: " << s.marks[j] << endl;
//         cout << endl;
//     }

//     int max_marks_value = *max_element(max_marks.begin(), max_marks.end());
//     for (auto student : students)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             if (student.marks[i] == max_marks_value)
//             {
//                 cout << "The student with the highest marks is: " << student.name[i] << " and maximum marks is " << student.marks[i] << endl;
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 1)
//         {
//             break;
//         }
//     }
//     cout << endl;
//     return 0;
// }

// LAB 03
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// struct Book
// {
//     string title[3];
//     string author[3];
//     string genre[3];
//     int yearOfPublication[3];
// };
// int main()
// {
//     startL3();
//     map<string, int> earliest_publish_book;
//     vector<int> min_year;
//     vector<Book> books;
//     Book b;
//     bool found = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter details of book " << i + 1 << endl;
//         cout << "Enter title of a book: ";
//         cin >> b.title[i];
//         cout << "Enter author's name: ";
//         cin >> b.author[i];
//         cout << "Enter the genre: ";
//         cin >> b.genre[i];
//         cout << "Enter Year of Publication: ";
//         cin >> b.yearOfPublication[i];
//         earliest_publish_book[b.title[i]] = b.yearOfPublication[i];
//         min_year.push_back(b.yearOfPublication[i]);
//         books.push_back(b);
//         cout << endl;
//     }
//     cout << "----------------------" << endl;
//     cout << "!! Displaying Details !!" << endl;
//     cout << "----------------------" << endl;
//     for (int j = 0; j < 3; j++)
//     {
//         cout << "Book Title: " << b.title[j] << endl;
//         cout << "Author Name: " << b.author[j] << endl;
//         cout << "Genre of a Book: " << b.genre[j] << endl;
//         cout << "Year of Publication: " << b.yearOfPublication[j] << endl;
//         cout << endl;
//     }
//     int minimum = *min_element(min_year.begin(), min_year.end());
//     for (auto book : books)
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             if (book.yearOfPublication[i] == minimum)
//             {
//                 cout << "The book with the earliest publication year is " << book.title[i] << " and the year is " << book.yearOfPublication[i];
//                 found = 1;
//                 break;
//             }
//         }
//         if (found == 1)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// LAB 03
// #include <iostream>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// struct Number
// {
//     int num;
// };
// void swap(Number n1, Number n2)
// {
//     Number temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
// }
// int main()
// {
//     startL3();
//     Number num1, num2;
//     cout << "Enter the value of number 1: ";
//     cin >> num1.num;
//     cout << "Enter the value of number 2: ";
//     cin >> num2.num;
//     cout << "Numbers before swaping " << num1.num << " and " << num2.num << endl;
//     swap(num1.num, num2.num);
//     cout << "Numbers after swaping " << num1.num << " and " << num2.num << endl;
//     return 0;
// }