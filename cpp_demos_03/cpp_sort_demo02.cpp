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

void insert_sort(int *a, int arr_len)
{
    for (int i = 1; i < arr_len; ++i)
    {
        int tmp_pos = i;
        if (a[i] < a[tmp_pos - 1])
        {
            int tmp_int = a[i];
            while (tmp_int < a[tmp_pos - 1])
            {
                a[tmp_pos] = a[tmp_pos - 1];  // move element forward
                if (--tmp_pos == 0) break;
            }
            a[tmp_pos] = tmp_int;
        }
        printf("At iteration => %d, ", i);
        print_array_value(a, arr_len);
    }
}

int main(void)
{
    int tmp_arr[] = {49,38,65,97,76,13,27,49};
    int arr_length = 8;

    printf("Before sort: \n");
    print_array_value(tmp_arr, arr_length);

    printf("Sorting:\n");
    my_insert_sort(tmp_arr, arr_length);
    //insert_sort(tmp_arr, arr_length);

    printf("After sort: \n");
    print_array_value(tmp_arr, arr_length);

    return 0;
}
