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

class Left : public virtual Top
{
protected:
    int y;
public:
    Left(int m, int n) : Top(m) { y = n; cout << "Left" << endl; }
};

class Right : public virtual Top
{
protected:
    int z;
public:
    Right(int m, int n) : Top(m) { z = n; cout<<"Right"<<endl; }
};

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
    cout << "sizeof(b) " << sizeof(b) << "," << sizeof(Bottom) << endl;
    cout <<sizeof(Left) << "," << sizeof(Right) << "," << sizeof(Top) << endl;

    return 0;
}
