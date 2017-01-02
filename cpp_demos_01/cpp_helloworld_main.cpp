/**
My hello world example, at 2016-11-10
Status: /C++_4th_demo/iterator_demo.cpp
**/

#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

//int* getAddress()
//{
//    int x = 9;
//    cout << "x address -> " << x& << endl;
//    return &x;
//}

int hello_world_main(void)
//int main(void)
{
    // example
//    cout << "Char a -> " << 'a' << endl;
//    cout << "Char a -> " << int('a') << endl;
//    cout << "String a -> " << "a" << endl;


    // example
//    char food[20] = "carrots";
//    strcpy(food, "flan");
//    cout << "Output: " << food << endl;
//    cout << "Length: " << strlen(food) << endl;


    // example
//    cout << "Address test!" << endl;
//    int *p;
//    {
//        p = getAddress();
//    }
//    cout << "p = " << *p << endl;
//    cout << "p address --> " << p << endl << endl;


    // example
    int a = 10;
    int &r = a;  // reference
    int *p = &a;  // pointer
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
    cout << "p = " << *p << endl;

    cout << "a address --> " << &a << endl;
    cout << "r address --> " << &r << endl;
    cout << "p address --> " << p << endl << endl;

    *p = 20;
    cout << "after updated: " << endl;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
    cout << "p = " << *p << endl;

    return 0;
}
