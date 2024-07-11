// // #include<iostream>
// // using namespace std;
// // int main() {
// //     int n;
// //     cin>>n;
// //     int n1[n];

// //     int reverse = 0;
    
// //     while (n>0)
// //     {
// //         int x;
// //         cin>>n1[x];
// //         for (int i = 0; i < n; i++)
// //         {
// //             int lastdigit = n1[i]%10;
// //             reverse = reverse*10 + lastdigit;
// //             x = x/10;
// //         }
// //     }
// //     cout<<reverse<<endl;
// // }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int startL3()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 03\n" << endl;
//     return 0;
// }
// // Define the structure Book
// struct Book {
//     string title;
//     string author;
//     string genre;
//     int yearOfPublication;
// };

// int main() {
//     startL3();
//     // Create an array of 3 Book structures
//     Book books[3];

//     // Input data for each book
//     for (int i = 0; i < 3; ++i) {
//         cout << "Enter details for Book " << i + 1 << ":" << endl;
//         cout << "Enter title of a book: ";
//         getline(cin, books[i].title);
//         cout << "Enter author's name: ";
//         getline(cin, books[i].author);
//         cout << "Enter the genre: ";
//         getline(cin, books[i].genre);
//         cout << "Enter Year of Publication: ";
//         cin >> books[i].yearOfPublication;
//         cin.ignore(); // Ignore newline character after reading the year
//         cout << endl;
//     }
//     cout << "----------------------" << endl;
//     cout << "!! Displaying Details !!" << endl;
//     cout << "----------------------" << endl;
//     for (int i = 0; i < 3; ++i) {
//         cout << "Book Title: " << books[i].title << endl;
//         cout << "Author Name: " << books[i].author << endl;
//         cout << "Genre of a Book: " << books[i].genre << endl;
//         cout << "Year of Publication: " << books[i].yearOfPublication << endl << endl;
//     }

//     // Find the book with the earliest publication year
//     int minYear = books[0].yearOfPublication;
//     string earliestBookTitle = books[0].title;
//     for (int i = 1; i < 3; ++i) {
//         if (books[i].yearOfPublication < minYear) {
//             minYear = books[i].yearOfPublication;
//             earliestBookTitle = books[i].title;
//         }
//     }

//     // Display the book with the earliest publication year
//     // cout << "Book with the earliest publication year is: " << earliestBookTitle << " (" << minYear << ")" << endl;
//     cout << "The book with the earliest publication year is " << earliestBookTitle << " and the year is " << minYear;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int* maximumAddress(int a[], int size) {
//     int *maxAddr = &a[0]; // Initialize maxAddr to point to the first element's address
//     for (int i = 0; i < size; i++) {
//         if (*maxAddr < a[i]) {
//             maxAddr = &a[i]; // Update maxAddr to point to the current maximum's address
//         }
//     }
//     return maxAddr; // Return the address of the element containing the maximum value
// }

// int main() {
//     // startL4();

//     int a[5];
//     for (int i = 0; i < 5; i++) {
//         cout << "Enter a number for the array: ";
//         cin >> a[i];
//     }

//     int size = sizeof(a) / sizeof(a[0]);
//     int *maxAddr = maximumAddress(a, size);

//     // Access the maximum value using the returned address
//     cout << "The maximum value of the array is: " << *maxAddr << endl;

//     // Optional: Print the address itself (if needed)
//     cout << "Address of the maximum value: " << maxAddr << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class date{
//     private:
//         int days, month, year;
//     public:
//         date(int m,int d,int y){
//             days = d;
//             year = (y > 2000 && y < 2050) ? y : 2001;
//             month = (m > 0 && m < 13) ? m : 1;
//         }
//         void check(){
//             int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//             int a = arr[month];
//             if (days == a)
//             {
//                 cout<<days<<" : "<<month<<" : "<<year<<endl;
//             } else {
//                 cout<<"Invalid input";
//             }
//         }
// };
// int main() {
//     date d(2,28,2005);
//     d.check();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main() {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {9,4,2,2,1};
//     int *ptr1 = arr1;
//     int *ptr2 = arr2;
//     int size = int(sizeof(arr1) / sizeof(arr1[0]));
//     int mult[] = {};
//     for (int i = 0; i < size; i++)
//     {
//         mult[i] = (*ptr1)*(*ptr2);
//         ptr1++;
//         ptr2++;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<mult[i]<<" ";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows, columns;
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> columns;
//     int arr[rows][columns];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;
//     cout << "Original Matrix" << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << "After Transpose" << endl;
//     for (int j = 0; j < columns; j++)
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int countPrimes(int n){
//     if (n<=1)
//     {
//         return 0;
//     } else if (n == 2)
//     {
//         return 1;
//     } else{    
//     int p[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (p[i] == 0)
//         {
//             for (int j = i*i; j <=n; j+=i)
//             {
//                 p[j] = 1;
//             }   
//         }
//     }
//     int count = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         if (p[i] == 0)
//         {
//             count += 1;
//         }
//     }  
//     return count;
//     }
// }
// int main() {
//     int num;
//     cin>>num;
//     countPrimes(num);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm> // For std::max

// int findMaxSubarraySum(const std::vector<int>& nums) {
//     if (nums.empty()) {
//         return 0;
//     }

//     int maxCurrent = nums[0];
//     int maxGlobal = nums[0];

//     for (size_t i = 1; i < nums.size(); ++i) {
//         maxCurrent = std::max(nums[i], maxCurrent + nums[i]);
//         if (maxCurrent > maxGlobal) {
//             maxGlobal = maxCurrent;
//         }
//     }

//     return maxGlobal;
// }

// int main() {
//     std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

//     int maxSum = findMaxSubarraySum(nums);
//     std::cout << "Maximum contiguous subarray sum is " << maxSum << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   string str_n = to_string(n);

//   cout << "The integer converted to string is: " << str_n << endl;

//   return 0;
// }

// n = int(input())
// copy_n = n
// str_n = str(n)
// lenght = len(str_n)
// l = []
// for i in str_n:
//     l.append(int(i))
// add = 0
// for j in l:
//     add += pow(j,int(lenght))
// if n == add:
//     print("Armstrong")
// else:
//     print("Non armstrong")


// #include<iostream>
// #include<vector>
// using namespace std;

// class Car{
//   private:
//     string name;
//     string model;
//     int year;
//   public:
//     Car(string n, string m, int y){
//       name = n;
//       model = m;
//       year = y;
//     }
//     void print(){
//       cout<<"Name: "<<name<<endl;
//       cout<<"Model: "<<model<<endl;
//       cout<<"Year: "<<year<<endl;
//     }
// };

// class Garrage{
//   private:
//     vector<Car> car;
//   public:
//     void addclass(){
//       int year;
//       string name,model;
//       cin>>name>>model>>year;
//       Car c1(name,model,year);
//       car.push_back(c1);
//     }
//     void show(){
//       for(auto& c:car){
//         cout<<c<<endl;
//       }
//     }

// };
// int main() {

//   return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

class Book{
  private:
    string title,author;
    int isbn;
  public:
    Book(string title,string author,int isbn){
      this->title = title;
      this->author = author;
      this->isbn = isbn;
    }
    
    string tit(string title){
      return title;
    }
    string tit(string author){
      return author ;
    }
    int tit(int isbn){
      return isbn;
    }
};

class Library{
  vector <Book> book;
  public: 
    void addbook(){
      string titl,author;
      int isbn;
      cin>>titl>>author>>isbn;

      Book b(titl,author,isbn);
      book.push_back(b);
    }

    void listbook(){
      for(auto& b:book){
        cout<<b.title<<endl;
      }
    }

};
int main() {

  return 0;
}