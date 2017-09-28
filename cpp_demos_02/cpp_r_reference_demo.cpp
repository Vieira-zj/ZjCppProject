#include <iostream>

void lfn(int& i) { std::cout << "left value ref: " << i << std::endl; }
void lfn_c(const int& i) { std::cout << "left value ref with const: " << i << std::endl; }
void rfn(int&& i) { std::cout << "right value ref: " << i << std::endl; }

int r_reference_main(void)
//int main(void)
{
    int i = 77;

    lfn(i);
    //lfn(99); // error, right value arg

    lfn_c(i);
    lfn_c(99);

    //rfn(i); // error, left value arg
    rfn(99);

//    const int x = 88;
//    rfn(x); // error, left value arg

    return 0;
}
