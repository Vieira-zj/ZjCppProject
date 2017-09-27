/**
2016-11-10
**/

#include <iostream>

using namespace std;

int const_main(void)
//int main(void)
{
    const int a = 10;
//    int *p = &a;  // error: invalid conversion from 'const int*' to 'int*'
    int *p = (int *)&a;

    cout << "a value before update -> " << a << endl; // 10
    *p = 11;
    cout << "a value after update -> " << a << endl; // 10
    cout << "p value -> " << *p << endl; // 11

    return 0;
}

int const_02_main(void)
//int main(void)
{
    const int c = 1;
    const int *p = &c;
    int b = c;
    b = 2;

    cout << "b = " << b << endl; // 2
    cout << "*p = " << *p << endl; // 1

    return 0;
}

int ref_main(void)
//int main(void)
{
    int a = 10;
    int &r = a;

    cout << "r = " << r << endl; // 10
    a = 100;
    cout << "r = " << r << endl; // 100
}
