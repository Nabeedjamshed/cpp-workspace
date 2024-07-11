// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int startl11()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 11\n" << endl;
//     return 0;
// }
// class Book
// {
//     private:
//         string title;
//         string author;

//     public:
//         Book(string title, string author)
//         {
//             this->title = title;
//             this->author = author;
//         }

//         string get_info()
//         {
//             return title + " by " + author;
//         }
// };

// class Library
// {
//     private:
//         vector<Book *> books;

//     public:
//         void add_book(Book *book)
//         {
//             books.push_back(book);
//         }

//         void display_books()
//         {
//             if (books.empty())
//             {
//                 cout << "No books in the library." << endl;
//             }
//             else
//             {
//                 cout << "Books in the library:" << endl;
//                 for (auto &book : books)
//                 {
//                     cout << "- " << book->get_info() << endl;
//                 }
//             }
//         }

//         ~Library()
//         {
//             for (auto &book : books)
//             {
//                 delete book;
//             }
//             books.clear();
//         }
// };

// int main()
// {
//     startl11();
//     Book *book1 = new Book("Seven Habits", "Homer");
//     Book *book2 = new Book("Eat that Frog", "John Henry");
//     Book *book3 = new Book("Rode to Hell", "V Cookify");
//     Library library;
//     library.add_book(book1);
//     library.add_book(book2);
//     library.add_book(book3);
//     library.display_books();
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int startL11()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 11\n" << endl;
//     return 0;
// }
// class Date
// {
//     public:
//         int day, month, year;

//         Date()
//         {
//             day = 0;
//             month = 0;
//             year = 0;
//         }
//         Date(int d, int m, int y)
//         {
//             day = d;
//             month = m;
//             year = y;
//         }

//         void display() const
//         {
//             cout << day << "/" << month << "/" << year;
//         }
// };

// class Book
// {
//     public:
//         string title;
//         string author;
//         Date publicationDate;

//         Book(string t, string a, Date &d)
//         {
//             title = t;
//             author = a;
//             publicationDate = d;
//         }

//         void display()
//         {
//             cout << "Title: " << title << endl
//                 << "Author: " << author << endl
//                 << "Publication Date: ";
//             publicationDate.display();
//             cout << endl;
//         }
// };

// int main()
// {
//     startL11();
//     Date pubDate(4, 7, 2024);
//     Book book("Eat that Frog", "John Henry", pubDate);
//     book.display();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int startL11()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 11\n" << endl;
    return 0;
}
class Song
{
    private:
        string title;
        string artist;
        string duration;

    public:
        Song(string title, string artist, string duration)
        {
            this->title = title;
            this->artist = artist;
            this->duration = duration;
        }

        string get_info()
        {
            return title + " - " + artist + " [" + duration + "]";
        }
};

class Playlist
{
    private:
        vector<Song> songs;

    public:
        void add_song(Song song)
        {
            songs.push_back(song);
        }

        void display_playlist()
        {
            if (songs.empty())
            {
                cout << "Playlist is empty." << endl;
            }
            else
            {
                cout << "Playlist:" << endl;
                for (auto &song : songs)
                {
                    cout << "- " << song.get_info() << endl;
                }
            }
        }
};

int main()
{
    startL11();
    Song song1("Song 1", "Artist 1", "3:45");
    Song song2("Song 2", "Artist 2", "4:20");
    Song song3("Song 3", "Artist 3", "2:55");

    Playlist playlist;

    playlist.add_song(song1);
    playlist.add_song(song2);
    playlist.add_song(song3);

    playlist.display_playlist();

    return 0;
}
