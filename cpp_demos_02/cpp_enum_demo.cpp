#include <iostream>

enum COLOR
{
    red,
    black,
    blue
};

enum class DAYS
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
    if (c == red) std::cout << "the color is red." << std::endl;

    DAYS d = DAYS::monday;
    if (d == DAYS::monday) std::cout << "the day is Monday." << std::endl;

    return 0;
}
