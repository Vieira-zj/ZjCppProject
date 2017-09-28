#include <iostream>

using namespace std;

int my_add(int a, int b)
{
    return a + b;
}

int my_add_r(int &a, int &b)
{
    return a + b;
}

int my_add_const_r(const int &a, const int &b)
{
    return a + b;
}

int const_var_main(void)
//int main(void)
{
    cout << my_add_const_r(1, 2) << endl;

    int a = 1, b = 2;
    cout << my_add_const_r(a, b) << endl;

    const int x = 1, y = 2;
    cout << my_add(x, y) << endl;
    // cout << my_add_r(x, y) << endl; // error, const to non-const
    cout << my_add_const_r(x, y) << endl;

    const int *p = &x;
    cout << my_add(*p, *p) << endl;
    //cout << my_add_r(*p, *p) << endl; // error
    cout << my_add_const_r(*p, *p) << endl;

    const int &r = y;
    cout << my_add(r, r) << endl;
    cout << my_add_const_r(r, r) << endl;

    return 0;
}
