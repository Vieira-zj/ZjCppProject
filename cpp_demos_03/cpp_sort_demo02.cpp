/**
Insert Sort
*/
#include <stdio.h>

void print_array_value(const int *a, int arr_len);
void swap_by_reference(int &x, int &y);


/**
my_insert_sort
*/
// arr[0] -> arr[end_pos - 1] is a sorted arr, and insert arr[end_pos] by exchange
void insert_last_value_in_sorted_arr(int *arr, int end_pos)
{
    // #1
    for (int j = 0; j < end_pos; ++j)
    {
        if (arr[end_pos] < arr[j])
        {
            swap_by_reference(arr[end_pos], arr[j]);
        }
    }

    // #2
//    for (int j = end_pos - 1; j >= 0; --j)
//    {
//        // TODO:
//    }
}

void my_insert_sort(int *arr, int arr_len)
{
    for (int i = 1; i < arr_len; ++i)
    {
        insert_last_value_in_sorted_arr(arr, i);
        print_array_value(arr, arr_len);
    }
}


/**
insert_sort
*/
void move_specified_ele_into_sorted_arr(int *a, int pos)
{
    if (a[pos] < a[pos - 1])
    {
        int tmp_int = a[pos];
        while (tmp_int < a[pos - 1])
        {
            a[pos] = a[pos - 1];  // move element forward
            if (--pos == 0) break;
        }
        a[pos] = tmp_int;
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
my_shell_insert_sort
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


/**
shell_insert_sort
*/
void shell_insert_sort(int *arr, int arr_len, int dk)
{
    // TODO: 2/17
}

typedef void(*pFunc)(int *arr, int arr_len, int dk);

void shell_sort(int *arr, int arr_len, pFunc p_shell_insert_sort_fn)
{
    int dk = (arr_len + 1) / 2;
    int i = 0;
    while (dk > 1)
    {
        p_shell_insert_sort_fn(arr, arr_len, dk);
        printf("At iteration => %d, and dk => %d: ", ++i, dk);
        print_array_value(arr, arr_len);
        dk = (dk + 1) / 2;
    }
    p_shell_insert_sort_fn(arr, arr_len, 1);
}

int main(void)
//int sort_main2(void)
{
    int tmp_arr[] = {49,38,65,97,76,13,27,49,55,4};
    int arr_length = 10;

    printf("Before sort: \n");
    print_array_value(tmp_arr, arr_length);

    printf("Sorting:\n");
    my_insert_sort(tmp_arr, arr_length);
    //insert_sort(tmp_arr, arr_length);

    //shell_sort(tmp_arr, arr_length, my_shell_insert_sort);

    printf("After sort: \n");
    print_array_value(tmp_arr, arr_length);

    return 0;
}
