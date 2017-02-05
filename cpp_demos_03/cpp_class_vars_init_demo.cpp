#include <iostream>

using namespace std;

class AA01
{
private:
    int value;
public:
    explicit AA01()
    {
        cout << "AA01() invoked" << endl;
    }

    explicit AA01(int input_val)
    {
        cout << "AA01(int) invoked" << endl;
        value = input_val;
    }

    AA01 operator=(const int input_val)
    {
        cout << "operator=(const int input_val) invoked" << endl;
        value = input_val;
        return *this;
    }

    int get_value()
    {
        return value;
    }
};

class BB01
{
private:
    AA01 a;
public:
    explicit BB01()
    {
        cout << "BB01() invoked" << endl;
        a = 4;
    }

    display_value()
    {
        cout << "Output: " << a.get_value() << endl;
    };
};

class BB02
{
private:
    AA01 a;
public:
    explicit BB02();

    display_value()
    {
        cout << "Output: " << a.get_value() << endl;
    };
};

BB02::BB02():a(5)
{
    cout << "BB02():a(5) invoked" << endl;
}

int cpp_class_vars_init_main(void)
//int main(void)
{
    BB01 b1;
    b1.display_value();

    BB02 b2;
    b2.display_value();

    return 0;
}
