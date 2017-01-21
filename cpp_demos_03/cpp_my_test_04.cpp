#include <iostream>

using namespace std;

class my_base
{
public:
    virtual void func() = 0;
    void func(int x) {cout << "func(int) in base" << endl;}
    void calldis() {display();}
private:
    virtual void display() const {cout << "display() in base" << endl;}
};

class my_derived : public my_base
{
private:
    string &s;
    virtual void display() const {cout << "display() in derived" << endl;}
public:
    my_derived(string str = "ZJ") : s(str) {cout << "derived() " << s << endl;}
    using my_base::func;
    virtual void func() {cout << "func() in derived" << endl; }
};

int my_test_main4(void)
//int main(void)
{
    my_derived d;
    d.func();
    d.func(1);

//    my_derived d;
//    my_base &r = d;
//    r.calldis();

//    my_derived d;
//    my_base *p = &d;
//    p->calldis();

//    my_base *pn = new my_derived();
//    pn->calldis();
//    delete pn;

//    string str = "zheng";
//    my_derived d = my_derived(str);
//    my_derived d1;

    return 0;
}
