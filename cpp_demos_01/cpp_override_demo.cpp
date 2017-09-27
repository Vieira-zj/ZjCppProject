/**
2016-11-10
**/

#include<iostream>

using namespace std;

class Shape
{
public:
    virtual void draw(int top = 1)
    {
        cout << "Shape: " << top << endl;
    }
};

class Rect : public Shape
{
public:
    virtual void draw(int top = 2)
    {
        cout << "Rect: " << top << endl;
    }
};

int override_main(void)
//int main(void)
{
    // #1, init object from heap
//    Rect *rp = new Rect;
//    Shape *sp = rp;

    // #2, init object from stack
    Rect r;
    Rect* rp = &r;
    Shape* sp = &r;

    r.draw(); // 2
    rp->draw(); // 2
    // var "top" value not be override, this value set at compile time
    sp->draw(); // 1

    return 0;
}
