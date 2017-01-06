#include <iostream>

class MyClass
{
private:
    int a;
public:
    MyClass(int x = 0)
    {
        this->a = x;
    }

    int Get_A() { return this->a; }
};

int class_this_main(void)
{
    using namespace std;

    MyClass cls(9);
    cout << "Output: " << cls.Get_A() << endl;

    return 0;
}
