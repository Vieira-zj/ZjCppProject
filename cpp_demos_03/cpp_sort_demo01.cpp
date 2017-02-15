/**
Exchange Sort
*/
#include <iostream>

using namespace std;

void print_array_value(const int *a, int arr_len)
{
    cout << "value: ";
    for (int i = 0; i < (arr_len - 1); ++i)
    {
        cout << *(a + i) << ",";
    }
    cout << *(a + arr_len - 1) << endl;
}

void print_array_value(const int *a, int low, int high)
{
    cout << "value: ";
    for (int i = low; i < high; ++i)
    {
        cout << *(a + i) << ",";
    }
    cout << *(a + high) << endl;
}

void swap_by_reference(int &x, int &y)
{
    int tmp_int = x;
    x = y;
    y = tmp_int;
}

/**
my_exchange_sort

Before sort: {3,1,5,7,2,4,9,6}
After sort:
1 => {1 | ,3,5,7,2,4,9,6}
2 => {1,2 | ,5,7,3,4,9,6}
3 => {1,2,3 | ,7,5,4,9,6}
...
*/
// Get min value and set to arr[0] by exchange
bool set_min_value_at_first_in_arr(int *arr, int start_pos, int end_pos)
{
    bool isExchange = false;
    for (int j = (start_pos + 1); j < end_pos; ++j)
    {
        if (arr[start_pos] > arr[j])
        {
            isExchange = true;
            swap_by_reference(arr[start_pos], arr[j]);
        }
    }

    return isExchange;
}

void my_exchange_sort(int *arr, int arr_len)
{
    for (int i = 0; i < (arr_len - 1); ++i)
    {
        if (!set_min_value_at_first_in_arr(arr, i, arr_len)) break;
        cout << "at iteration: " << (i + 1) << endl;
        print_array_value(arr, arr_len);
    }
}


/**
bubble_sort

Before sort: {3,1,5,7,2,4,9,6}
After sort:
1 => {1,3,5,2,4,7,6, | 9}
2 => {1,3,2,4,5,6, | 7,9}
3 => {1,2,3,4,5, | 6,7,9}
...
*/
// get max value by compare and exchange j and j+1 elements, and set to arr[last_pos]
bool set_max_value_to_last_by_exchange_one_by_one(int *arr, int end_pos)
{
    bool isExchange = false;
    for (int j = 0; j < end_pos; ++j)
    {
        if (arr[j] > arr[j + 1])
        {
            isExchange = true;
            swap_by_reference(arr[j], arr[j + 1]);
        }
    }

    return isExchange;
}

void bubble_sort(int *arr, int arr_len)
{
    for (int i = 0; i < (arr_len - 1); ++i)
    {
        if (!set_max_value_to_last_by_exchange_one_by_one(arr, (arr_len - i - 1)))
        {
            break;
        }
        cout << "at iteration: " << (i + 1) << endl;
        print_array_value(arr, arr_len);
    }
}


/**
quick_sort
*/
int quick_sort_partition(int *arr, int low, int high)
{
    int privotKey = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] >= privotKey) --high;
        swap_by_reference(arr[low], arr[high]);
        while (low < high && arr[low] <= privotKey) ++low;
        swap_by_reference(arr[low], arr[high]);
    }

    return low;  // low == high
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int privotLoc = quick_sort_partition(arr, low, high);
        print_array_value(arr, low, high);
        quick_sort(arr, low, (privotLoc - 1));
        quick_sort(arr, (privotLoc + 1), high);
    }
}


//int main(void)
int sort_main(void)
{
    int tmp_arr[] = {3,1,5,7,2,4,9,6};
    int arr_length = 8;

    cout << "Before sort: " << endl;
    print_array_value(tmp_arr, arr_length);

    cout << "Sorting" << endl;
    //my_exchange_sort(tmp_arr, arr_length);
    //bubble_sort(tmp_arr, arr_length);
    quick_sort(tmp_arr, 0, (arr_length - 1));

    cout << "After sort: " << endl;
    print_array_value(tmp_arr, arr_length);

    return 0;
}
