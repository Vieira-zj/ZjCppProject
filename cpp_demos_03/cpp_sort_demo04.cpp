#include <stdio.h>

int get_first_index_for_sub_string(char target_str[], int target_len, char sub_str[], int sub_len)
{
    for (int i = 0; i < target_len; ++i)
    {
        bool is_found = true;
        for (int j = 0; j < sub_len; ++j)
        {
            if (target_str[i + j] != sub_str[j]) {
                is_found = false;
                break;
            }
        }
        if (is_found) return i;
    }

    return -1;
}

int main(void)
{
    // get the first index for sub string in target string
    char target[] = {'x','y','y','y','a','b','c','x'};
    int target_len = 7;
    char sub[] = {'a','b','c'};
    int sub_len = 3;
    int first_idx = get_first_index_for_sub_string(target, target_len, sub, sub_len);
    printf("The first index: %d", first_idx);

    return 0;
}
