/**
Data size example, created at 2017/01/09
Status: /C++_7th_demo/enum.cpp
**/
#include <iostream>

using namespace std;

void fn();
static int n;

typedef struct
{
    double salary;
    int index[4];
} test_data;

typedef struct
{
    test_data test_1;
    int test_2;
} test_data_2;

int hello_world_main2(void)
//int main(void)
{
    double d = 2000;
    int arr[4] = {1,2,3,4};

    n  = 20;
    cout << n << endl;
    fn();

    cout << "The size of array: " << sizeof(arr) << endl;  // 16
    cout << "The size of double: " << sizeof(d) << endl;  // 8
    cout << "The size of test_data: " << sizeof(test_data) << endl;  // 8 + 16 = 24
    cout << "The size of test_data_2: " << sizeof(test_data_2) << endl;  // 8 + 16 + 8 = 32

    return 0;
}

void fn()
{
    n++;
    cout << n << endl;
}
