#include <iostream>

using namespace std;

class Top
{
protected:
    int x;
public:
    Top(int n) : x(n) { cout << "Top" << endl; }
    virtual ~Top() {}
};
// 4(int) + 4(virtual fn)

class Left : public virtual Top
{
protected:
    int y;
public:
    Left(int m, int n) : Top(m) { y = n; cout << "Left" << endl; }
};
// 8(Top) + 4(int) + 4(virtual ptr)

class Right : public virtual Top
{
protected:
    int z;
public:
    Right(int m, int n) : Top(m) { z = n; cout<<"Right"<<endl; }
};
// 8(Top) + 4(int) + 4(virtual ptr)

class Bottom : public Left, public Right
{
    int w;
public:
    Bottom(int i, int j, int k, int m) : Top(i), Left(i, j), Right(i, k), w(m)
    {
        cout << "Bottom" << endl;
    }
};

int virtual_fn_main3(void)
//int main(void)
{
    Bottom b(1,2,3,4);
    cout << "sizeof(b) " << sizeof(b) << "," << sizeof(Bottom) << endl; // 28
    cout <<sizeof(Left) << "," << sizeof(Right) << "," << sizeof(Top) << endl; // 16,16,8

    return 0;
}
