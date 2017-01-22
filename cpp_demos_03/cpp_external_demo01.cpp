#include <iostream>
#include "cpp_external_header_demo.h"

int my_external_int = 1;

void my_external_class::my_external_display()
{
    using namespace std;

    cout << "my_external_class value: " << value << endl;
    cout << "my_external_class value by pointer: " << this->value << endl;
}
