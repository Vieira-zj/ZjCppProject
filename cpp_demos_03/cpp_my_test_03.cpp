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
    cout << "test virtual function: " << endl;
    // sequence: base::foo() -> derived::foo() -> derived::foo()
    Base4* pB = new Derived4();
    pB->callFoo();
    if(pB) delete pB;


    cout << endl << "test reference value: " << endl;
    int i = 10;
    int &r = i;
    r = 100;
    cout << "r: " << r << ", i: " << i << endl;


    cout << endl << "test reference equals: " << endl;
    string a = "ZJ";
    string b = "ZJ";
    cout << "results: " << ((a == b) ? true : false) << endl;

    return 0;
}
