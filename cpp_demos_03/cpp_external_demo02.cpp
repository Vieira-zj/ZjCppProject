#include <iostream>
#include "cpp_external_header_demo.h"

using namespace std;

extern int my_external_int; // from demo01

int my_external_demo_add(int num);

int external_main(void)
//int main(void)
{
    cout << "my_external_int: " << my_external_int << endl;
    cout << "my_internal_static_int: " << my_external_demo_add(my_internal_static_int) << endl;
    cout << "my_internal_const_int: " << my_external_demo_add(my_internal_const_int) << endl;


    my_external_class my_class(10);
    my_class.my_external_display();


    cout << "external demo" << endl;
    return 0;
};

int my_external_demo_add(int num)
{
    return num + 2;
}
