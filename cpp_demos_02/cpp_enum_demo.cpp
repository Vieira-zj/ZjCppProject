#include <iostream>

enum COLOR
{
    red,
    black,
    blue
};

enum DAYS
{
    monday,
    tuesday,
    saturday
};

int enum_main(void)
//int main(void)
{
    COLOR c = red;
    std::cout << "c value: " << c << std::endl;
    if (c == red)
//    if (c == monday)
    {
        std::cout << "the color is red." << std::endl;
    }
    else
    {
        std::cout << "the color is Monday." << std::endl;
    }

    return 0;
}
