// #include <iostream>
// #include <vector>
// #include <cstring>

// using namespace std;

// const int BOOK_TITLE_SIZE = 50;
// const int AUTHOR_SIZE = 50;
// const int PATRON_SIZE = 50;
// const int MAXIMUM_NAME_SIZE = 50;
// const int MAX_PATRONS = 50;

// class Book
// {
//   public:
//     int publication_id;
//     char booktitle[BOOK_TITLE_SIZE];
//     char author[AUTHOR_SIZE];
//     char patron[MAX_PATRONS][MAXIMUM_NAME_SIZE];
//     int patron_count;

//     Book()
//     {
//       publication_id = 0;
//       patron_count = 0;
//       strcpy(booktitle, "");
//       strcpy(author, "");
//     }

//     Book(int id, char *title, char *auth, char *pat)
//     {
//       publication_id = id;
//       patron_count = 0;
//       strcpy(booktitle, title);
//       strcpy(author, auth);
//       addpat(pat);
//     }

//     Book(const Book &obj)
//     {
//       publication_id = obj.publication_id;
//       patron_count = obj.patron_count;
//       strcpy(booktitle, obj.booktitle);
//       strcpy(author, obj.author);
//       for (int i = 0; i < patron_count; ++i)
//       {
//         strcpy(patron[i], obj.patron[i]);
//       }
//     }

//     int getPublicationID() const
//     {
//       return publication_id;
//     }

//     void display()
//     {
//       cout << "ID: " << publication_id << ", Title: " << booktitle << ", Author: " << author << ", Patron's: ";
//       for (int i = 0; i < patron_count; ++i)
//       {
//         cout << patron[i] << ", ";
//       }
//       cout << endl;
//     }

//     void addpat(char *newPatron)
//     {
//       if (patron_count < MAX_PATRONS)
//       {
//         strcpy(patron[patron_count++], newPatron);
//       }
//     }
//   };

// class Library
// {
//   private:
//     vector<Book> books;

//   public:
//     void addBook(Book &newBook)
//     {
//       for (auto &book : books)
//       {
//         if (book.publication_id == newBook.publication_id)
//         {
//           cout << "Book with this Publication ID already exists!" << endl;
//           return;
//         }
//       }
//       books.push_back(newBook);
//       cout << "Book added successfully!" << endl;
//     }

//     void editBook(int id)
//     {
//       for (auto &book : books)
//       {
//         if (book.publication_id == id)
//         {
//           int choice;
//           cout << "Which detail do you want to edit?\n";
//           cout << "1. Book Title\n";
//           cout << "2. Author Name\n";
//           cout << "3. Add Patron\n";
//           cout << "Enter your choice: ";
//           cin >> choice;
//           cin.ignore();

//           switch (choice)
//           {
//           case 1:
//             cout << "Enter new Book Title: ";
//             cin.getline(book.booktitle, BOOK_TITLE_SIZE);
//             cout << "Book title updated successfully!" << endl;
//             break;
//           case 2:
//             cout << "Enter new Author Name: ";
//             cin.getline(book.author, AUTHOR_SIZE);
//             cout << "Author name updated successfully!" << endl;
//             break;
//           case 3:
//             char newPatron[MAXIMUM_NAME_SIZE];
//             cout << "Enter new Patron: ";
//             cin.getline(newPatron, MAXIMUM_NAME_SIZE);
//             book.addpat(newPatron);
//             cout << "Patron added successfully!" << endl;
//             break;
//           default:
//             cout << "Invalid choice!" << endl;
//             break;
//           }
//           return;
//         }
//       }
//       cout << "Book with this ID does not exist!" << endl;
//     }

//     void deleteBook(int id)
//     {
//       for (int i = 0; i < books.size(); ++i)
//       {
//         if (books[i].publication_id == id)
//         {
//           books.erase(books.begin() + i);
//           cout << "Book deleted successfully!" << endl;
//           return;
//         }
//       }
//       cout << "Book with this ID does not exist!" << endl;
//     }

//     void displayBooks()
//     {
//       if (books.empty())
//       {
//         cout << "Library is empty!" << endl;
//       }
//       else
//       {
//         cout << "** List of Books **" << endl;
//         for (auto &book : books)
//         {
//           book.display();
//         }
//       }
//     }
//   };

// int main()
// {
//   Library library;
//   int choice;

//   do
//   {
//     cout << endl << "** E-Library Management System **" << endl;
//     cout << "1. Add Book" << endl;
//     cout << "2. Edit Details of an Available Book" << endl;
//     cout << "3. Delete Book" << endl;
//     cout << "4. Display Books" << endl;
//     cout << "5. Exit" << endl;
//     cout << "Enter your choice: ";
//     cin >> choice;
//     cin.ignore();

//     switch (choice)
//     {
//     case 1:
//     {
//       int id;
//       char title[BOOK_TITLE_SIZE];
//       char author[AUTHOR_SIZE];
//       char patron[MAXIMUM_NAME_SIZE];
//       cout<<endl;
//       cout << "Enter Book Details" << endl;
//       cout << "Enter Publication ID: ";
//       cin >> id;
//       cin.ignore();
//       cout << "Enter Book Title: ";
//       cin.getline(title, BOOK_TITLE_SIZE);
//       cout << "Enter Author Name: ";
//       cin.getline(author, AUTHOR_SIZE);
//       cout << "Enter Patron: ";
//       cin.getline(patron, MAXIMUM_NAME_SIZE);

//       Book newBook(id, title, author, patron);
//       library.addBook(newBook);
//       break;
//     }
//     case 2:
//     {
//       int id;
//       cout << "Enter Book ID to edit: ";
//       cin >> id;
//       library.editBook(id);
//       break;
//     }
//     case 3:
//     {
//       int id;
//       cout << "Enter Book ID to delete: ";
//       cin >> id;
//       library.deleteBook(id);
//       break;
//     }
//     case 4:
//       library.displayBooks();
//       break;
//     case 5:
//       cout << "Exiting program..." << endl;
//       break;
//     default:
//       cout << "Invalid choice!" << endl;
//     }
//   } while (choice != 5);

//   return 0;
// }

// #include <iostream>
// using namespace std;

// class ComboLock {
// private:
//     int numbers[3];
//     int currentNumber;
//     int step;

// public:
//     ComboLock(int secret1, int secret2, int secret3) {
//         numbers[0] = secret1;
//         numbers[1] = secret2;
//         numbers[2] = secret3;
//         reset();
//     }

//     void reset() {
//         currentNumber = 0;
//         step = 0;
//     }

//     void turnLeft(int ticks) {
//         currentNumber = (currentNumber - ticks + 40) % 40;
//         if (step == 1 && currentNumber == numbers[1]) {
//             step++;
//         } else {
//             step = 0;
//         }
//     }

//     void turnRight(int ticks) {
//         currentNumber = (currentNumber + ticks) % 40;
//         if ((step == 0 && currentNumber == numbers[0]) || (step == 2 && currentNumber == numbers[2])) {
//             step++;
//         } else {
//             step = 0;
//         }
//     }

//     bool open() {
//         return step == 3;
//     }
// };

// int main() {
//     int secret1, secret2, secret3;
//     cout << "Enter the first secret number (between 0 and 39): ";
//     cin >> secret1;
//     cout << "Enter the second secret number (between 0 and 39): ";
//     cin >> secret2;
//     cout << "Enter the third secret number (between 0 and 39): ";
//     cin >> secret3;

//     ComboLock lock(secret1, secret2, secret3);

//     int ticks;
//     cout << "Enter the number of ticks to turn right to the first secret number: ";
//     cin >> ticks;
//     lock.turnRight(ticks);  // Turn right to first secret number

//     cout << "Enter the number of ticks to turn left to the second secret number: ";
//     cin >> ticks;
//     lock.turnLeft(ticks);   // Turn left to second secret number

//     cout << "Enter the number of ticks to turn right to the third secret number: ";
//     cin >> ticks;
//     lock.turnRight(ticks);  // Turn right to third secret number

//     if (lock.open())
//         cout << "The lock is open!" << endl;
//     else
//         cout << "Incorrect combination. The lock remains closed." << endl;

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

class ComboLock
{
    private:
        int number1, number2, number3;
        int dialPosition;
        vector<pair<char, int>> dialMoves;

    public:
        ComboLock(int number1, int number2, int number3)
        {
            this->number1 = number1;
            this->number2 = number2;
            this->number3 = number3;
            reset();
        }

        void reset()
        {
            dialPosition = 0;
            dialMoves.clear();
        }

        void turnLeft(int ticks)
        {
            dialPosition = (dialPosition + ticks) % 40;
            dialMoves.push_back({'L', dialPosition});
        }

        void turnRight(int ticks)
        {
            dialPosition = (dialPosition - ticks + 40) % 40;
            dialMoves.push_back({'R', dialPosition});
        }

        bool open()
        {
            if (dialMoves.size() != 3)
            {
                return false;
            }
            if (dialMoves[0].first == 'R' && dialMoves[0].second == number1 &&
                dialMoves[1].first == 'L' && dialMoves[1].second == number2 &&
                dialMoves[2].first == 'R' && dialMoves[2].second == number3)
            {
                return true;
            }
            return false;
        }
    };

int main()
{
    int srt1, srt2, srt3;
    cout << "Enter the first secret number (between 0 and 39): ";
    cin >> srt1;
    cout << "Enter the second secret number (between 0 and 39): ";
    cin >> srt2;
    cout << "Enter the third secret number (between 0 and 39): ";
    cin >> srt3;

    ComboLock combinationLock(srt1, srt2, srt3);
    combinationLock.reset();

    int ticks1, ticks2, ticks3;
    cout << "Enter the number of ticks to turn right to the first secret number: ";
    cin >> ticks1;
    combinationLock.turnRight(ticks1);

    cout << "Enter the number of ticks to turn left to the second secret number: ";
    cin >> ticks2;
    combinationLock.turnLeft(ticks2);
    cout << "Enter the number of ticks to turn right to the third secret number: ";
    cin >> ticks3;
    combinationLock.turnRight(ticks3);
    if (combinationLock.open())
        cout << "The lock is open!" << endl;
    else
        cout << "Incorrect combination. The lock remains closed." << endl;

    return 0;
}
