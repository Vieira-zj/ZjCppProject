#include <iostream>

using namespace std;

class Base1
{
private:
    int _x;
public:
    Base1() {}
    Base1(int x) : _x(x) { cout << "Base(x) _x=" << _x << endl; }
};

class DerivedA: virtual public Base1
{
    int _y;
public:
    DerivedA(int x = 0, int y = 1) : Base1(x), _y(y)
    {
        cout << "DerivedA(x,y) _y=" << _y << endl;
    }
};

class DerivedB: virtual public Base1
{
    int _z;
public:
    DerivedB(int x = 0, int z = 2) : Base1(x), _z(z)
    {
        cout << "DerivedB(x,z) _z=" << _z << endl;
    }
};

class Other
{
    int _o;
public:
    Other() : _o(3)
    {
         cout << "Other() _o=" << _o << endl;
    }
};

class DerivedFinal: public DerivedA, public DerivedB
{
    int _xyz;
    Other _other;
public:
    DerivedFinal(int x = 10, int y = 20, int z = 30, int o = 50) :
        Base1(x), DerivedA(x,y), DerivedB(x,z), _xyz(x * y * z)
        {
            cout << "DerivedFinal(x,y,z,o) _xyz=" << _xyz << endl;
        }
};

int constructor_main(void)
//int main(void)
{
    // sequence: Base1 -> DerivedA -> DerivedB -> Other -> DerivedFinal
    DerivedFinal df;

    return 0;
}
