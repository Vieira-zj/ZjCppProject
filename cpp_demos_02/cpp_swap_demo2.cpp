#include <iostream>

using namespace std;

void call_by_val_ptr(int *p, int *q)
{
    int *t = p;
    p = q;
    q = t;
}

void display(const string &str)
{
    cout << str << endl;
}

int swap_main2(void)
//int main(void)
{
    // example 01
    int a = 1, b = 2;

    cout << "a = " << &a << endl;
    cout << "b = " << &b << endl;
    call_by_val_ptr(&a, &b);
    cout << "a = " << &a << endl;
    cout << "b = " << &b << endl;

    // example 02
    int x = 2, y = 3;
    int *p1 = &x;
    int *p2 = &y;
    int *p;

    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;
    p = p1;
    p1 = p2;
    p2 = p;
    cout << "p1 = " << *p1 << endl;
    cout << "p2 = " << *p2 << endl;

    // example 03
    int arr[5] = {1,2,3,4,5};
    cout << "size of arr[5] : " << sizeof(arr) << endl;

    // example 04
    int *pn = new int(100);
    cout << "p value " << *pn << endl;
    delete(pn);

    // int &pr = new int(100);

    // example 05
    string str = string("hello");
    display(str);
    display("ZHENGJIN");

    return 0;
}
