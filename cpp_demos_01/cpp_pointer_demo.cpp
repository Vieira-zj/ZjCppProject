#include <iostream>

int add(int, int);

int pointer_main(void)
{
    using namespace std;

    int updates = 6;
    int * p_updates = &updates;

    // express values two way
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // express values two way
    cout << "Address: &updates = " << &updates;
    cout << ", p_update = " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}

int reference_main(void)
//int main(void)
{
    using namespace std;

    int r = add(1, 3);
    cout << "r address --> " << &r << endl;
    cout << "r value --> " << r << endl;

    return 0;
}

int add(int a, int b)
{
    int c = a + b;
    std::cout << "c address --> " << &c << std::endl;
    return c;
}
