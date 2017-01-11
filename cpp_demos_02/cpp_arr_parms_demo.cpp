#include <iostream>

using namespace std;

void print_arr_1(int arr[5])
{
    for (int i = 0; i < 5; ++i) {
        cout << "item ---> " << arr[i] << endl;
    }
}

void print_arr_2(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << "item ---> " << arr[i] << endl;
    }
}

void print_arr_3(int (&arr)[5])
{
    cout << "array size ---> " << sizeof(arr) << endl;
}

// error
//void print_arr_4(int (&arr)[])
//{
//    cout << "array size ---> " << sizeof(arr) << endl;
//}

int main(void)
{
    int tmp_arr[5] = {1,2,3,4,5};
    print_arr_1(tmp_arr);
    print_arr_2(tmp_arr, 5);
    print_arr_3(tmp_arr);
//    print_arr_4(tmp_arr);

    return 0;
}
