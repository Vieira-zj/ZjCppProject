#include <iostream>

using namespace std;

class A2
{
private:
    int value;
public:
    A2() { cout << "call A default constructor." << endl; }
    explicit A2(int x)
    {
        cout << "call A one parameter constructor." << endl;
        value = x;
    }
    int getValue() { return this->value; }
    void operator=(int x)
    {
        cout << "call A operator= method." << endl;
        value = x;
    }
};

class B2
{
private:
    A2 a;
public:
    B2()
    {
        cout << "call B default constructor." << endl;
        // #1, invoke A2(int)
        //a = A2(3);
        // #2, A2(int) is declared as explicit, and invoke A2 operator=
        a = 3;
    }

    B2(int i) : a(i)
    {
        cout << "call B one parameter constructor." << endl;
    }

    void display()
    {
        cout << "value: " << a.getValue() << endl;
    }
};

int cls_var_init_main(void)
//t main(void)
{
    B2 b1; // sequence: A2() -> B2() -> A2(int)
    b1.display();
    cout << endl;
    B2 b2 = 10; // sequence: A2(int) -> B2(int)
    b2.display();

    return 0;
}
