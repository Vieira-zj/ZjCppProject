/**
Select Sort
*/
#include <stdio.h>

void print_array_value(const int *a, int arr_len);
void swap_by_reference(int &x, int &y);


/**
Simple Selection Sort
*/
int select_min_value_index(int *arr, int start_pos, int end_pos)
{
    int min_index = start_pos;
    for (int i = start_pos + 1; i < end_pos; ++i)
    {
        if (arr[min_index] > arr[i]) {
            min_index = i;
        }
    }

    return min_index;
}

void select_sort(int *arr, int arr_len)
{
    int key;
    for (int i = 0; i < (arr_len - 1); ++i)
    {
        key = select_min_value_index(arr, i, arr_len);
        if (key != i)
        {
            swap_by_reference(arr[key], arr[i]);
        }
        printf("At iteration => %d, ", (i + 1));
        print_array_value(arr, arr_len);
    }
}

//int main(void)
int sort_main3(void)
{
    int tmp_arr[] = {49,38,65,97,76,13,27,49,55,4};
    int arr_length = 10;

    printf("Before sort: \n");
    print_array_value(tmp_arr, arr_length);

    printf("Sorting:\n");
    select_sort(tmp_arr, arr_length);

    printf("After sort: \n");
    print_array_value(tmp_arr, arr_length);

    return 0;
}
