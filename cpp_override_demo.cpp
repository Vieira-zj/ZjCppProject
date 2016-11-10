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
{
    // method 1, init object
//    Rect *rp = new Rect;
//    Shape *sp = rp;

    // method 2, init object
    Rect r;
    Rect* rp = &r;
    Shape* sp = &r;

    r.draw();
    rp->draw();
    sp->draw();  // 1

    return 0;
}
