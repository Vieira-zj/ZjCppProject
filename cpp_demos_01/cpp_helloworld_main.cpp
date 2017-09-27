/**
My hello world example, created at 2016-11-10
**/

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int hello_world_01_main(void)
//int main(void)
{
    cout << "Char a -> " << 'a' << endl;
    cout << "Char a -> " << int('a') << endl;
    cout << "String a -> " << "a" << endl;

    return 0;
}

int hello_world_02_main(void)
//int main(void)
{
    char food[20] = "carrots";
    strcpy(food, "flan");
    cout << "Output: " << food << endl; // flan
    cout << "Length: " << strlen(food) << endl; // 4

    return 0;
}

int* getAddress()
{
    int x = 9;
    cout << "x address -> " << &x << endl;
    return &x;
}

int hello_world_03_main(void)
//int main(void)
{
    cout << "Address test!" << endl;
    int *p;
    {
        p = getAddress(); // error
    }
    cout << "p = " << *p << endl;
    cout << "p address --> " << p << endl;

    return 0;
}

int hello_world_04_main(void)
//int main(void)
{
    int a = 10;
    int &r = a; // reference
    int *p = &a; // pointer
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
    cout << "p = " << *p << endl;

    // same address
    cout << "a address --> " << &a << endl;
    cout << "r address --> " << &r << endl;
    cout << "p address --> " << p << endl << endl;

    // all changed
    *p = 20;
    cout << "after updated: " << endl;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
    cout << "p = " << *p << endl;

    return 0;
}
