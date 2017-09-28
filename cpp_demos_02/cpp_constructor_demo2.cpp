#include <iostream>
using namespace std;

class Base2
{
public:
    Base2()
    {
        foo();
    }
    virtual void foo(void)
    {
        cout << "Base::foo(void)" << endl;
    }
    virtual void callFoo()
    {
        foo();
    }
    virtual ~Base2() {}
};

class Derived2: public Base2
{
public:
    Derived2()
    {
        foo();
    }
    virtual void foo(void)
    {
        cout << "Derived::foo(void)" << endl;
    }
};

int constructor_main2(void)
//int main(void)
{
    Base2 *pB = new Derived2; // Base::foo(), Drived::foo()
    pB->callFoo(); // Drived::foo()
    if (pB)
    {
        delete pB;
    }

    return 0;
}
