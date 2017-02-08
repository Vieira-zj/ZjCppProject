/**
Bubble Sort

Sort01
Before sort: {3,1,5,7,2,4,9,6}
After sort:
1 => {1 ,3,5,7,2,4,9,6}
2 => {1,2 ,5,7,3,4,9,6}
3 => {1,2 ,3,7,5,4,9,6}

Sort02
Before sort: {3,1,5,7,2,4,9,6}
After sort:
1 => {1,3,5,2,4,7,6, 9}
2 => {1,3,2,4,5,6, 7,9}
3 => {1,2,3,4,5, 6,7,9}
*/

#include <iostream>

using namespace std;

void print_array_value(const int *a, int length)
{
    cout << "value: ";
    for (int i = 0; i < (length - 1); ++i)
    {
        cout << *(a + i) << ",";
    }
    cout << *(a + length - 1) << endl;
}

void my_sort(int *a, int length)
{
    for (int i = 0; i < (length - 1); ++i)
    {
        for (int j = i + 1; j < length; ++j)
        {
            // get min value
            if (a[i] > a[j])
            {
                int tmp_int = a[i];
                a[i] = a[j];
                a[j] = tmp_int;
            }
        }
        cout << "at iteration: " << (i + 1) << endl;
        print_array_value(a, length);
    }
}

void bubble_sort(int *a, int length)
{
    for (int i = 0; i < (length - 1); ++i)
    {
        for (int j = 0; j < (length - i - 1); ++j)
        {
            // get max value by compare j and j+1 element
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        cout << "at iteration: " << (i + 1) << endl;
        print_array_value(a, length);
    }
}

int main(void)
{
    int tmp_arr[] = {3,1,5,7,2,4,9,6};
    int arr_length = 8;

    cout << "Before sort: " << endl;
    print_array_value(tmp_arr, arr_length);

    cout << "Sorting" << endl;
    //my_sort(tmp_arr, arr_length);
    bubble_sort(tmp_arr, arr_length);

    cout << "After sort: " << endl;
    print_array_value(tmp_arr, arr_length);

    return 0;
}
