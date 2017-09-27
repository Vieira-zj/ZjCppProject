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
//int main(void)
{
    using namespace std;

    MyClass cls(9);
    cout << "Output: " << cls.Get_A() << endl; // 9

    return 0;
}
