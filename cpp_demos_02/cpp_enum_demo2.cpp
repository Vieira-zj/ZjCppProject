#include <iostream>

using namespace std;

//enum COLOR2
//{
//    RED,
//    YELLOW,
//    BLUE,
//};

typedef enum
{
    RED,
    YELLOW,
    BLUE
} COLOR3;

int enum_main2(void)
//int main(void)
{
    int my_color = YELLOW;
    if (my_color == RED)
    {
        cout << "The color is red." << endl;
    } else if (my_color == YELLOW)
    {
        cout << "The color is yellow." << endl;
    } else if (my_color == BLUE)
    {
        cout << "The color is blue." << endl;
    } else
    {
        cout << "The color is not defined." << endl;
    }

    return 0;
}
