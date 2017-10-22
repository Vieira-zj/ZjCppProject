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

// 0, 1, 1, 2, 3, 5, 8, 13, 21
void fibonacci(int num)
{
    int n1 = 0, n2 = 1, tmp;
    cout << n1 << ", " << n2;
    while (1)
    {
        tmp = n2;
        n2 = n1 + n2;
        n1 = tmp;
        if (n2 > num) { break; }
        cout << ", " << n2;
    }
    cout << endl;
}

// 12321
void palindrome(int num)
{
    int results = 0, origin = num, tmp;
    while (num)
    {
        tmp = num % 10;
        results = results * 10 + tmp;
        num /= 10;
    }

    if (results == origin) {
        cout << "palindrome: true" << endl;
        return;
    }
    cout << "palindrome: false" << endl;
}

// 29
void prime(int num)
{
    bool is_prime = true;
    for (int i = 2; i <= num/2; ++i)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << num << " is prime: true" << endl;
        return;
    }
    cout << num << " is prime: false" << endl;
}


//int algorithm_main1(void)
int main(void)
{
    // decimal to octal
    bool is_decimal_to_octal = false;
    if (is_decimal_to_octal)
    {
        int test_num_1 = 18; // 22
        int test_num_2 = 9274; // 22072
        decimal_to_octal(test_num_1);
        decimal_to_octal(test_num_2);
    }

    bool is_fibonacci = false;
    if (is_fibonacci)
    {
        fibonacci(22);
    }

    bool is_palindrome = false;
    if (is_palindrome)
    {
        palindrome(12321);
    }

    bool is_prime = true;
    if (is_prime)
    {
        prime(29);
    }

    return 0;
}
