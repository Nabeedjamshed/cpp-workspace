#include <iostream>
using namespace std;

// This is abstract class bcz isse bnnaya hi islie gya hai ke isse derived class bnegi.abstract class means ek aesi class jis ko aap object create use krne ke lie use nhi krskte. isko islie design kigae hai ke is se or class inherite krain.
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
    virtual void display()=0; // This is pure virtual function, is ka matlab ye hai ke isse class se jo bhi derived class bnengi us mai is function ko redefined krna mandatory hai bca ye pure virtual function hai,agr nhi karenge tu compiler error throw krega.This display function is a do-nothing function means ye khud run nhi hoga bs ye ye keh rha hai ke aage jakr mujhe override krdena.S
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

    // CWH nabeed("Nabeed",343) //This will throws an error bcz abstract class ke object create nhi krskte.
}

/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.
*/