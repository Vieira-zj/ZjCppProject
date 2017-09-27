#include <iostream>

int add(int, int);

int pointer_main(void)
//int main(void)
{
    using namespace std;

    int updates = 6;
    int * p_updates = &updates;

    // #1
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_update = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    // #2
    int *tmp_p = &updates;
    cout << "Var value: " << *tmp_p << endl;
    cout << "Addr value: " << tmp_p << endl;
    cout << "Self addr: " << &tmp_p << endl;

    return 0;
}

int address_main(void)
//int main(void)
{
    using namespace std;

    int r = add(1, 3);
    cout << "r address --> " << &r << endl; // address diff
    cout << "r value --> " << r << endl;

    return 0;
}

int add(int a, int b)
{
    int c = a + b;
    std::cout << "c address --> " << &c << std::endl;
    return c;
}
