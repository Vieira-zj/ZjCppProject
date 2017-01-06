/**
2016-11-10
**/

#include <iostream>

using namespace std;

int const_main(void)
{
    const int a = 10;
//    int *p = &a;  // error: invalid conversion from 'const int*' to 'int*'
    int *p = (int *)&a;

    cout << "a value before update -> " << a << endl;
    *p = 11;
    cout << "a value after update -> " << a << endl;
    cout << "p value -> " << *p << endl;

    return 0;
}

int const_02_main(void)
//int main(void)
{
    const int c = 1;
    const int *p = &c;
    int b = c;
    b = 2;

    cout << "b = " << b << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
