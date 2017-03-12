#include <stdio.h>

int get_first_index_for_sub_string(char target_str[], int target_len, char sub_str[], int sub_len)
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

int sort_main4()
//int main(void)
{
    // get the first index for sub string in target string
    char target[] = {'x','y','y','y','y','b','c','x'};
    int target_len = 8;
    char sub[] = {'a','b','c'};
    int sub_len = 3;
    int first_idx = get_first_index_for_sub_string(target, target_len, sub, sub_len);
    printf("The first index: %d", first_idx);

    return 0;
}
