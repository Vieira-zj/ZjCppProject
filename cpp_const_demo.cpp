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
