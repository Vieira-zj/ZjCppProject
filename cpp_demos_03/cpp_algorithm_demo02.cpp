#include <stdio.h>

// get the first index for sub string in target string
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

void del_char(char *str, char c)
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

//int algorithm_main2(void)
int main(void)
{
    bool is_sub_string = false;
    if (is_sub_string)
    {
        char target[] = {'x','y','y','y','y','b','c','x'};
        int target_len = 8;
        char sub[] = {'a','b','c'};
        int sub_len = 3;
        int first_idx = sub_string(target, target_len, sub, sub_len);
        printf("The first index: %d", first_idx);
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
        char str[] = "abcdef";
        print_string(str);
        del_char(str, 'd');
        printf("%s\n", str);
    }

    return 0;
}
