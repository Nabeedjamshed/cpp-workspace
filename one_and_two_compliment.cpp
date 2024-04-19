#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_binary();
    void one_compliment();
    void two_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter the number: ";
    cin >> s;
}

void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' and s.at(i) != '1')
        {
            cout << "Invalid binary format";
            exit(0);
        }
    }
}

void binary ::one_compliment()
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::two_compliment()
{
    chk_binary();
    int i;
    for (i = s.length() - 1; i >= 0; i--)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
            break;
        }
        else
        {
            s.at(i) = '0';
        }
    }
    if (i == -1)
    {
        s = '1' + s;
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    cout << "Binary number" << endl;
    b.display();
    b.one_compliment();
    cout << "One's compliment binary number" << endl;
    b.display();
    b.two_compliment();
    cout << "Two's compliment binary number" << endl;
    b.display();
    return 0;
}