#include <iostream>

using namespace std;

class Parent
{
public:
    void Function1();
    virtual void Function2(); // 这里声明Function2是虚函数
};
void Parent::Function1()
{
    cout << "This is parent, function1" << endl;
}
void Parent::Function2()
{
    cout << "This is parent, function2" << endl;
}

class Child: public Parent
{
    void Function1();
    virtual void Function2();
};
void Child::Function1()
{
    cout << "This is child, function1" << endl;
}
void Child::Function2()
{
    cout << "This is child, function2" << endl;
}

class Child2: public Child
{
    void Function1();
    void Function2();
};
void Child2::Function1()
{
    cout << "This is child2, function1" << endl;
}
void Child2::Function2()
{
    cout << "This is child2, function2" << endl;
}

int virtual_fn_main(void)
//int main(void)
{
    Parent parent;
    Parent *p1;
    p1 = &parent;
    p1->Function1();
    p1->Function2();

    Child child;
    Parent *p2;
    p2 = &child; // 指向继承类对象
    p2->Function1(); // 这里在编译时会直接给出Parent::Function1()的入口地址
    p2->Function2(); // 注意这里，执行的是哪一个Function2

    Child2 child2;
    Parent &r = child2;
    r.Function1();
    r.Function2();

    return 0;
}
