#include <iostream>
#include <stdio.h>

using namespace std;

class AA01
{
private:
    int value;
public:
    explicit AA01()
    {
        cout << "AA01() constructor invoked" << endl;
        value = 0;
    }

    explicit AA01(int input_val)
    {
        cout << "AA01(int) copy constructor invoked" << endl;
        value = input_val;
    }

    AA01 operator=(const int input_val)
    {
        cout << "AA01 operator=(const int) invoked" << endl;
        value = input_val;
        return *this;
    }

    int get_value()
    {
        return this->value;
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

    void display_value()
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

    void display_value()
    {
        cout << "Output: " << a.get_value() << endl;
    };
};

BB02::BB02():a(5)
{
    cout << "BB02():a(5) invoked" << endl;
}

class CC01
{
private:
    int value;
public:
    CC01(int input_val)
    {
        cout << "CC01(int) copy constructor invoked" << endl;
        value = input_val;
    }

    // pass reference!
    CC01(CC01 &cc)
    {
        cout << "CC01(CC01) copy constructor invoked" << endl;
        value = cc.get_value();
    }

    CC01 operator=(const int input_val)
    {
        cout << "CC01 operator=(const int) invoked" << endl;
        value = input_val;
        return *this;
    }

    int get_value()
    {
        return value;
    }
};

int cpp_class_vars_init_main(void)
//int main(void)
{
    // #1, invoke constructor and operator=()
    AA01 a1;
    a1 = 2;

    AA01 a2(a1);
    printf("a2 value: %d\n", a2.get_value());

    AA01 a3(3);
    // Error when copy constructor is declared as explicit
//    AA01 a4 = 3;
    printf("\n");

    // #2
    BB01 b1;
    b1.display_value();

    BB02 b2;
    b2.display_value();
    printf("\n");

    // #3
    CC01 c1(3);
    printf("c1 value: %d\n", c1.get_value());
    CC01 c2(c1);
    printf("c2 value: %d\n", c2.get_value());
    CC01 c3 = c1;
    printf("c3 value: %d\n", c3.get_value());

    return 0;
}
