#include <iostream>

using namespace std;

void print_arr_1(int input_arr[5])
{
    for (int i = 0; i < 5; ++i) {
        cout << input_arr[i] << " ";
    }
    cout << endl;
}

void print_arr_2(int input_arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << input_arr[i] << " ";
    }
    cout << endl;
}

void print_arr_3(int (&input_arr)[5])
{
    int len = sizeof(input_arr) / sizeof(int);
    cout << "array size: " << len << endl;
    for (int i = 0; i < len; ++i)
    {
        cout << input_arr[i] << " ";
    }
    cout << endl;
}

void update_arr_item_1(int input_arr[], int idx)
{
    input_arr[idx] = 10;
}

void update_arr_item_2(int* input_arr, int idx)
{
    input_arr[idx] = 20;
}

int* return_arr_test()
{
    int *p_ret_arr = new int[5];
    for (int i = 0; i <= 5; ++i)
    {
        p_ret_arr[i] = i + 4;
    }
    return p_ret_arr;
}

int arr_test_main(void)
//int main(void)
{
    cout << "print and update array =>" << endl;
    int tmp_arr[5] = {1,2,3,4,5};
    print_arr_1(tmp_arr);

    update_arr_item_1(tmp_arr, 1);
    print_arr_2(tmp_arr, 5);

    update_arr_item_2(tmp_arr, 3);
    print_arr_3(tmp_arr); // 20

    cout << "\nreturn array =>" << endl;
    int *p_ret_arr = return_arr_test();
    print_arr_2(p_ret_arr, 5);

    cout << endl << "iterator on array =>" << endl;
    int tmp_new_arr[] = {2,4,6,8,10};
    int len = sizeof(tmp_new_arr) / sizeof(tmp_new_arr[0]);

    for (int i = 0; i < len; ++i)
    {
        cout << tmp_new_arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < len; ++i)
    {
        cout << *(tmp_new_arr+i) << " ";
    }
    cout << endl;

    int *arr_p1 = &tmp_new_arr[0];
    for (int i = 0; i < len; ++i)
    {
        cout << *(arr_p1++) << " ";
    }
    cout << endl;

    int *arr_p2 = tmp_new_arr;
    for (int i = 0; i < len; ++i)
    {
        cout << arr_p2[i] << " ";
    }
    cout << endl;

    return 0;
}
