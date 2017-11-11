#include <iostream>
#include <stdio.h>

// get the first index for sub string in target string.
int sub_string(char target_str[], int target_len, char sub_str[], int sub_len)
{
    for (int i = 0; i <= (target_len - sub_len); ++i)
    {
        bool is_found = true;
        for (int j = 0; j < sub_len; ++j)
        {
            if (target_str[i + j] != sub_str[j]) {
                is_found = false;
                break;
            }
        }
        printf("Iterator at %d\n", i);
        if (is_found) return i;
    }

    return -1;
}

char * sub_string2(char *target_str, char *sub_string)
{
    char *p_target_str, *p_sub_str;

    for (char *p_tmp = target_str; *p_tmp; ++p_tmp)
    {
        p_sub_str = sub_string;
        p_target_str = p_tmp;
        while (*p_target_str == *p_sub_str && *p_sub_str != '\0')
        {
            ++p_sub_str;
            ++p_target_str;
        }
        if (*p_sub_str == '\0')
        {
            return p_tmp;
        }
    }
    return NULL;
}

void print_string(const char * const str)
{
    const char *p_str = str;
    while(*p_str != '\0')
    {
        printf("%c", *p_str);
        ++p_str;
    }
    printf("\n");
}

// delete specified char in string
void del_char_in_str(char *str, char c)
{
    int j = 0;
    for (int i = 0; str[i]; ++i)
    {
        if(str[i] != c)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// sort number arrays, and all even numbers are in front of odds.
void odd_even_sort(int *pData, int len)
{
    int *pBegin = pData;
    int *pEnd = pData + len - 1;
    int tmp;

    while(pBegin < pEnd)
    {
        if (*pBegin % 2 == 0) {
            ++pBegin;
        } else if (*pEnd % 2 == 1) {
            --pEnd;
        } else {
            tmp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = tmp;
        }
    }
}

// combine two sorted arrays
int* merge_sorted_array(int *arr1, int len1, int *arr2, int len2)
{
    int *ret_arr = new int[len1 + len2];
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2)
    {
        if (arr1[i] <= arr2[j]) {
            ret_arr[k++] = arr1[i++];
        } else {
            ret_arr[k++] = arr2[j++];
        }
    }

    while (i < len1)
    {
        ret_arr[k++] = arr1[i++];
    }
    while (j < len2)
    {
        ret_arr[k++] = arr2[j++];
    }

    return ret_arr;
}


int algorithm_main2(void)
//int main(void)
{
    bool is_sub_string = false;
    if (is_sub_string)
    {
        char target[] = {'x','y','y','y','y','b','c','x'};
        int target_len = 8;
        char sub[] = {'a','b','c'};
        int sub_len = 3;
        int first_idx = sub_string(target, target_len, sub, sub_len);
        printf("first index: %d", first_idx);
    }

    bool is_sub_string2 = false;
    if (is_sub_string2)
    {
        char *p_target_string = "happy birthday to you!";
        print_string(p_target_string);
        char *p_sub_string = "birthday";
        print_string(p_sub_string);
        printf("sub string: %s\n", sub_string2(p_target_string, p_sub_string));
    }

    bool is_del_char = false;
    if (is_del_char)
    {
        char str[] = "abcddefd";
        print_string(str);
        del_char_in_str(str, 'd');
        printf("%s\n", str);
    }

    bool is_odd_even_sort = false;
    if (is_odd_even_sort)
    {
        int input_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int len = sizeof(input_arr) / sizeof(input_arr[0]);
        odd_even_sort(input_arr, len);

        for (int i = 0; i < len; ++i)
        {
            printf("%d ", input_arr[i]);
        }
        printf("\n");
    }

    bool is_merge_sorted_array = true;
    if (is_merge_sorted_array)
    {
        using namespace std;

        int arr1[] = { 1,2,2,3,5,6,7,7 };
        int arr2[] = { 1,2,4,5,8,8,9,10,11,12,12,13,14 };
        int len1 = sizeof(arr1) / sizeof(int);
        int len2 = sizeof(arr2) / sizeof(arr2[0]);
        int *ret_arr = merge_sorted_array(arr1, len1, arr2, len2);

        for (int i = 0, len = len1 + len2; i < len; ++i)
        {
            cout << ret_arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
