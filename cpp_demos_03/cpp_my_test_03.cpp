#include <iostream>
using namespace std;

class Base4
{
public:
    Base4() { foo(); }
    virtual void foo(void) { cout << "Base::foo(void)" << endl; }
    virtual void callFoo(void) { foo(); }
    virtual ~Base4() {}
};

class Derived4 : public Base4
{
public:
    Derived4() { foo(); }
    void foo(void) { cout << "Derived::foo(void)" << endl; }
};

class A3
{
public:
    int value;
    A3(int x = 0) : value(x) {}
};

int my_test_main3(void)
//int main(void)
{
//    Base4* pB = new Derived4();
//    pB->callFoo();
//    if(pB) delete pB;


//    int i = 10;
//    int &r = i;
//    r = 100;
//    cout << "r: " << r << " i: " << i << endl;


//    string a = "ZJ";
//    string b = "ZJ";
//    if (a == b) cout << "true" << endl;
//    else cout << "false" << endl;

    return 0;
}
