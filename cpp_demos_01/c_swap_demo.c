/**
Include example for C
2016-11-10
**/

#include <stdio.h>

#define SWAP_V2(a, b) (a += b, b = a - b, a -= b)

#define SWAP_V3(a, b) {a += b; b = a - b; a -= b;}

void swap_v1(int *val_1, int *val_2)
{
    if (val_1 == val_2)
    {
        return;
    }

    int temp = *val_1;
    *val_1 = *val_2;
    *val_2 = temp;
}

int c_swap_main(void)
{
    int test_1 = 10, test_2 = 100;

//    swap_v1(&test_1, &test_2);
//    SWAP_V2(test_1, test_2);
//    SWAP_V3(test_1, test_2);
    (test_1 += test_2, test_2 = test_1 - test_2, test_1 -= test_2);

    printf("Now the test_1 is %d, test_2 is %d \n", test_1, test_2);

    printf("The file full path is %s\n", __FILE__);

    return 0;
}
