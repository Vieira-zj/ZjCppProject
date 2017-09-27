#include <iostream>
#include <memory>

using namespace std;

int auto_ptr_01_main(void)
//int main(void)
{
    shared_ptr<int> pint1;
    cout << "count1 " << pint1.use_count() << endl; // 0

    {
        shared_ptr<int> pint2(new int(3));
        cout << "count2 " << pint2.use_count() << endl; // 1

        pint1 = pint2;
        cout << "count3 " << pint1.use_count() << endl; // 2
        cout << "count4 " << pint2.use_count() << endl; // 2
    } // point2 discoped

    cout << "count1 " << pint1.use_count() << endl; // 1
    cout << "value: " << *pint1 << endl;

    return 0;
}

int auto_ptr_02_main(void)
//int main(void)
{
    shared_ptr<int> sp(new int(10));
    cout << "SP count1 " << sp.use_count() << endl; // 1
    cout << "SP value1 " << *sp << endl; // 10
    weak_ptr<int> wp(sp);
    cout << "WP count1 " << wp.use_count() << endl; // 1

    if (!wp.expired())
    {
        shared_ptr<int> sp2 = wp.lock(); // get shared_ptr from weak_ptr
        *sp2 = 100;
        cout << "SP count2 " << sp.use_count() << endl; // 2
        cout << "SP value2 " << *sp << endl; // 100
        cout << "WP count2 " << wp.use_count() << endl; // 2
    }
    cout << "WP count3 " << wp.use_count() << endl; // 1
    cout << "SP value3 " << *sp << endl; // 100
    cout << "SP count3 " << sp.use_count() << endl; // 1

    return 0;
}
