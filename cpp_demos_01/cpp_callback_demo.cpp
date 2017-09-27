#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void callBackFunc(int &v)
{
    cout << v << ",";
}

int comp(const int &a, const int &b)
{
    return a < b;
}

int callback_main(void)
//int main(void)
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
    cout << endl; // 1,7,4,0,9,

    for_each(v.begin(), v.end(), callBackFunc);
    cout << endl; // 1,7,4,0,9,

    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << ",";
    }
    cout << endl; // 0,1,4,7,9,

    return 0;
}
