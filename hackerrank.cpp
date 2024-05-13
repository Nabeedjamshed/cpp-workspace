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


#include <iostream>
using namespace std;

int* maximumAddress(int a[], int size) {
    int *maxAddr = &a[0]; // Initialize maxAddr to point to the first element's address
    for (int i = 0; i < size; i++) {
        if (*maxAddr < a[i]) {
            maxAddr = &a[i]; // Update maxAddr to point to the current maximum's address
        }
    }
    return maxAddr; // Return the address of the element containing the maximum value
}

int main() {
    // startL4();

    int a[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number for the array: ";
        cin >> a[i];
    }

    int size = sizeof(a) / sizeof(a[0]);
    int *maxAddr = maximumAddress(a, size);

    // Access the maximum value using the returned address
    cout << "The maximum value of the array is: " << *maxAddr << endl;

    // Optional: Print the address itself (if needed)
    cout << "Address of the maximum value: " << maxAddr << endl;

    return 0;
}
