#include <iostream>

using namespace std;

typedef struct
{
    double salary;  // 8
    int index[4];  // 16
} test_data_x;

typedef struct
{
    test_data_x test_1;  // 24
    int test_2;  // 8
} test_data_x2;

typedef struct
{
    int index[4];  // 16
    double store_1;  // 8
    int store_2;  // 8
} test_data_3;

typedef struct
{
    test_data_3 test_3;  // 32
    int test_4;  // 8
} test_data_4;

inline int my_func_min(int a, int b)
{
    return a < b ? a : b;
}

int sizeof_main()
//int main(void)
{
    cout << "The size of test_data_x " << sizeof(test_data_x) << endl;
    cout << "The size of test_data_x2 " << sizeof(test_data_x2) << endl;
    cout << "The size of test_data_3 " << sizeof(test_data_3) << endl;
    cout << "The size of test_data_4 " << sizeof(test_data_4) << endl;

    int a = 1;
    int b = 3;
    int c = my_func_min(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
