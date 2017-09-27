/**
Create at 2017/1/6
**/

#include <iostream>

using namespace std;

void swapp(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void swapp2(int *a, int *b)
{
    cout << "a address in swap() --> " << &a << endl;
    cout << "b address in swap() --> " << &b << endl;
    int c = *a;
    *a = *b;
    *b = c;
}

void swapr(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int my_max(int a, int b)
{
    cout << "int Max(int a, int b)" << endl;
    return a > b ? a : b;
}

template<typename T>
int my_max(T a, T b)
{
    cout << "T Max(T a, T b)" << endl;
    return a > b ? a : b;
}

template<typename T>
int my_max(T a, T b, T c)
{
    cout << "T Max(T a, T b, T c)" << endl;
    return my_max(a, my_max(b, c));
}

int cpp_swap_main(void)
//int main(void)
{
    int a = 1, b = 2;
    swapr(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int x = 1, y = 2;
    swapp(&x, &y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    int m = 1, n = 2;
    int *p1 = &m;
    int *p2 = &n;
    // address diff from in swap()
    cout << "p1 address out swap() --> " << &p1 << endl;
    cout << "p2 address out swap() --> " << &p2 << endl;
    swapp2(p1, p2);
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

    cout << my_max(a, b) << endl; // call int method
    cout << my_max<>(a, b) << endl; // call template method
    cout << my_max(3.0, 4.0) << endl;
    cout << my_max(3.0, 4) << endl;
    cout << my_max(5.0, 6.0, 7.0) << endl;
    cout << my_max('a', 100) << endl;

    return 0;
}
