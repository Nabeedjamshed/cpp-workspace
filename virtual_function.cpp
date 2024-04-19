#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }
    virtual void display()
    {
        // cout<<"Buddy output";
    }
};

class CWHVideo : public CWH
{
    int videolength;

public:
    CWHVideo(string title, float rating, int videolength) : CWH(title, rating)
    {
        this->videolength = videolength;
    }
    void display()
    {
        cout << "The title of the video tutorial is: " << title << endl;
        cout << "The rating of the video is: " << rating << " out of 5 stars" << endl;
        cout << "The length of a video is: " << videolength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string title, float rating, int words) : CWH(title, rating)
    {
        this->words = words;
    }
    void display()
    {
        cout << "The title of the text tutorial is: " << title << endl;
        cout << "The rating of the text is: " << rating << " out of 5 stars" << endl;
        cout << "The words in a text is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo video(title, rating, vlen);
    video.display();
    cout << endl;

    title = "Django Tutorial";
    words = 433;
    rating = 4.29;
    CWHText text(title, rating, words);
    text.display();
    cout << endl;
    CWH *tut[2];
    tut[0] = &video;
    tut[1] = &text;
    tut[0]->display();
    tut[1]->display();

    return 0;
}
/*
In C++, inheritance is not strictly necessary for using virtual functions, but it is commonly associated with them.Virtual functions allow a derived class to provide its own implementation of a function defined in a base class. This enables polymorphic behavior, where a function call is resolved at runtime based on the actual type of the object, rather than just its declared type.

Inheritance is often used alongside virtual functions to create polymorphic hierarchies of classes. However, you can use virtual functions without inheritance in certain scenarios, such as when you have a single class with multiple virtual functions that you want to override in derived classes, or when you want to provide a default implementation for a function in a base class that can be overridden in a derived class.

***Rules for virtual functions***
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/