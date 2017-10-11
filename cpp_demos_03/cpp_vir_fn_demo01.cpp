#include <iostream>

using namespace std;

enum shapeColor {RED, GREEN, BLUE};

class TestShape
{
public:
    virtual void draw(shapeColor color = RED) const = 0;
    virtual ~TestShape() {};
};

class TestRectangle : public TestShape
{
public:
    virtual void draw(shapeColor color = GREEN) const;
    virtual ~TestRectangle() {};
};

void TestRectangle::draw(shapeColor color) const
{
    cout << "draw in TestRectangle, color: " << color << endl;
}

class TestCircle : public TestShape
{
public:
    virtual void draw(shapeColor color) const
    {
        cout << "draw in TestCircle, color: " << color << endl; // in-line
    }
    virtual ~TestCircle() {};
};

int vir_fn_main(void)
//int main(void)
{
    // default argument values are not inherit from Shape, because it's static bind
    // #1
    // type as Driver
    TestRectangle rectangle = TestRectangle();
    rectangle.draw(); // green

    // type as Base
    TestShape* pr = new TestRectangle();
    pr->draw(); // red
    delete pr;

    // #2
    TestCircle circle = TestCircle();
    circle.draw(BLUE); // blue

    TestShape* pc = new TestCircle;
    pc->draw(); // red
    delete pc;

    return 0;
}
