#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void callBakFunc(int &v)
{
    cout << v << ",";
}

int comp(const int &a, const int &b)
{
    return a < b;
}

int callback_main(void)
{
    vector<int> v(5);
    for (int i = 0; i < 5; ++i)
    {
        v[i] = rand() % 10;
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << ",";
    }
    cout << endl;

    for_each(v.begin(), v.end(), callBakFunc);
    cout << endl;

    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << ",";
    }
    cout << endl;

    return 0;
}
