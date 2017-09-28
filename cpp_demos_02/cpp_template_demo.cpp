#include <iostream>

using namespace std;

int my_max_ex(int a, int b)
{
    cout << "int my_max(int a, int b)" << endl;
    return a > b ? a : b;
}

template<typename T>
T my_max_ex(T a, T b)
{
    cout << "T my_max(T a, T b)" << endl;
    return a > b ? a : b;
}

template<class T>
T my_max_ex(T a, T b, T c)
{
    cout << "T my_max(T a, T b, T c)" << endl;
    return my_max_ex(my_max_ex(a, b), c);
}

int template_main_ex(void)
//int main(void)
{
    int a = 1;
    int b = 2;

    cout << my_max_ex(a, b) << endl;
    cout << my_max_ex<>(a, b) << endl;
    //cout << my_max_ex(3, 4.0) << endl;
    cout << my_max_ex(3.0, 4.0) << endl;
    cout << my_max_ex(5.0, 6.0, 7.0) << endl;
    cout << my_max_ex('a', 100) << endl;

    return 0;
}
