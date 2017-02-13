/**
Insert Sort
*/
#include <stdio.h>

void print_array_value(const int *a, int arr_len);
void swap_by_reference(int &x, int &y);

void my_insert_sort(int *a, int arr_len)
{
    for (int i = 1; i < arr_len; ++i)
    {
        for (int j = 0; j < (i + 1); ++j)
        {
            if (a[i] < a[j])
            {
                swap_by_reference(a[i], a[j]);
            }
        }
        print_array_value(a, arr_len);
    }
}

void move_specified_ele_into_sorted_arr(int *a, int position)
{
        int tmp_pos = position;
        if (a[position] < a[tmp_pos - 1])
        {
            int tmp_int = a[position];
            while (tmp_int < a[tmp_pos - 1])
            {
                a[tmp_pos] = a[tmp_pos - 1];  // move element forward
                if (--tmp_pos == 0) break;
            }
            a[tmp_pos] = tmp_int;
        }
}

void insert_sort(int *a, int arr_len)
{
    for (int i = 1; i < arr_len; ++i)
    {
        move_specified_ele_into_sorted_arr(a, i);
        printf("At iteration => %d, ", i);
        print_array_value(a, arr_len);
    }
}

/**
Shell Sort
*/
void my_shell_insert_sort(int *arr, int arr_len, int dk)
{
    for (int i = dk; i < arr_len; i++)
    {
        if (arr[i] < arr[i - dk])
        {
            swap_by_reference(arr[i], arr[i - dk]);
        }
    }
}

void shell_insert_sort(int *arr, int arr_len, int dk)
{
    for (int i = dk; i < arr_len; i++)
    {
        if (arr[i] < arr[i - dk])
        {
            // TODO: move element to top
        }
    }
}

void shell_sort(int *arr, int arr_len)
{
    int dk = arr_len / 2;
    int i = 0;
    while (dk >= 1)
    {
        my_shell_insert_sort(arr, arr_len, dk);
        dk = dk / 2;
        printf("At iteration => %d, ", ++i);
        print_array_value(arr, arr_len);
    }
}

int main(void)
//int sort_main2(void)
{
    int tmp_arr[] = {49,38,65,97,76,13,27,49};
    int arr_length = 8;

    printf("Before sort: \n");
    print_array_value(tmp_arr, arr_length);

    printf("Sorting:\n");
    //my_insert_sort(tmp_arr, arr_length);
    //insert_sort(tmp_arr, arr_length);

    shell_sort(tmp_arr, arr_length);

    printf("After sort: \n");
    print_array_value(tmp_arr, arr_length);

    return 0;
}
