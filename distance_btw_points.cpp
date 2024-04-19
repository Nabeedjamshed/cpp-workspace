#include<iostream>
#include<cmath>
using namespace std;

class Point;
class Calculator{
    public:
    int distance(Point, Point);
};
class Point{
    int x, y;
    public:
    friend class Calculator;
    Point(int a, int b) {
        x = a;
        y = b;
    }
    void display() {
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

int Calculator:: distance(Point o1, Point o2) {
        int diff1, diff2;
        diff1 = (o2.x - o1.x);
        diff2 = (o2.y - o1.y);
        int sq1, sq2;
        sq1 = pow(diff1, 2);
        sq2 = pow(diff2, 2);
        int add;
        add = sq1 + sq2;
        float sr;
        sr = sqrt(add);
        cout<<"The distance between two points is: "<<sr;
    };

int main() {
    int a, b;
    cout<<"Enter the value of X1: ";
    cin>>a;
    cout<<"Enter the value of Y1: ";
    cin>>b;
    Point p(a, b);
    p.display();
    int c, d;
    cout<<"Enter the value of X2: ";
    cin>>c;
    cout<<"Enter the value of Y2: ";
    cin>>d;

    Point q(c ,d);
    q.display();
    Calculator cal;
    cal.distance(p, q);
    return 0;
}