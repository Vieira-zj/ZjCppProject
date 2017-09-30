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
    int len = sizeof(arr) / sizeof(int);
    cout << "array size ---> " << len << endl;
    for (int i = 0; i < len; ++i)
    {
        cout << "item ---> " << arr[i] << endl;
    }
}

// error
//void print_arr_4(int (&arr)[])
//{
//    cout << "array size ---> " << sizeof(arr) << endl;
//}

int arr_parms_main(void)
//int main(void)
{
    int tmp_arr[5] = {1,2,3,4,5};
    print_arr_1(tmp_arr);
    print_arr_2(tmp_arr, 5);
    print_arr_3(tmp_arr); // 20
//    print_arr_4(tmp_arr);


    cout << endl << "array init =>" << endl;
    int tmp_arr1[] = {1, 2, 3, 4, 5};

    for (int i = 0, len = 5; i < len; ++i)
    {
        cout << tmp_arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0, len = 5; i < len; ++i)
    {
        cout << *(tmp_arr1+i) << " ";
    }
    cout << endl;

    int *arr_p1 = &tmp_arr1[0];
    for (int i = 0, len = 5; i < len; ++i)
    {
        cout << *(arr_p1++) << " ";
    }
    cout << endl;

    int *arr_p2 = tmp_arr1;
    for (int i = 0, len = 5; i < len; ++i)
    {
        cout << arr_p2[i] << " ";
    }
    cout << endl;

    return 0;
}
