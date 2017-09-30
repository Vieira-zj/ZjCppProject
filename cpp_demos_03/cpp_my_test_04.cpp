#include <iostream>

using namespace std;

class my_base
{
public:
    virtual void func() = 0;
    void func(int x) {cout << "func(int) in base" << endl;}
    void calldis() {display();}
    virtual ~my_base() {cout << "destroy in base" << endl;}
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
    virtual void func() {cout << "func() in derived" << endl;}
    ~my_derived() {cout << "destroy in derived" << endl;}
};

int my_test_main4(void)
//int main(void)
{
    cout << "method override test:" << endl;
    my_derived d;
    d.func();
    d.func(1);

    cout << endl << "virtual method test:" << endl;
    my_derived d2;
    my_base &r = d2;
    r.calldis();

    my_derived d3;
    my_base *p = &d3;
    p->calldis();

    my_base *pn = new my_derived();
    pn->calldis();
    delete pn;

    cout << endl << "constructor test:" << endl;
    string str = "test";
    my_derived d4 = my_derived(str);
    my_derived d5 = str;

    return 0;
}
