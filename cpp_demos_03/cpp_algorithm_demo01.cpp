#include <iostream>

using namespace std;

// decimal to octal:
// 10 => 12
// 10 % 8 = 1 2
// 1

// 100 => 144
// 100 % 8 = 12 4
// 12 % 8 = 1 4
// 1

// 1000 = 1750
// 1000 % 8 = 125 0
// 125 % 8 = 15 5
// 15 % 8 = 1 7
// 1
void decimal_to_octal(int num)
{
    int a[10];
    int len = 0;
    while (num) // num > 0
    {
        a[len++] = num % 8;
        num /= 8; // 2 / 8 = 0
    }

    cout << "results: ";
    for (int i = len - 1; i >= 0; --i)
    {
        cout << a[i];
    }
    cout << endl;
}

int algorithm_main1(void)
//int main(void)
{
    // decimal to octal
    int test_num_1 = 18; // 22
    int test_num_2 = 9274; // 22072
    decimal_to_octal(test_num_1);
    decimal_to_octal(test_num_2);

    return 0;
}
