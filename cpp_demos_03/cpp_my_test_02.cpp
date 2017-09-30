#include <iostream>

using namespace std;

class CExample
{
private:
    int a;
public:
    // 构造函数
    CExample(int b = 0)
    {
        a = b;
        cout << "a int: " << a << endl;
    }
//    CExample() : a(0)
//    {
//        cout << "a: " << a << endl;
//    }

    // 拷贝构造函数
    CExample(const CExample& C)
    {
        a = C.a;
        cout << "copy a: " << a << endl;
    }

    CExample & operator=(const CExample& C)
    {
        a = C.a;
        cout << "operator= a: " << a << endl;
        return *this;
    }

    // 一般函数
    void Show() const
    {
        cout << "value:" << a << endl;
    }

    ~CExample()
    {
        cout << "destroy a: " << a << endl;
    }
};

CExample g_Fun()
{
    CExample temp(10);
    return temp;
}

void g_Show(CExample C)
{
    C.Show();
}

int my_test_main2(void)
//int main(void)
{
    cout << "example 1" << endl;
    CExample ret; // constructor
    ret.Show();
    g_Show(ret); // copy constructor

    cout << endl << "example 2" << endl;
    CExample temp(5); // constructor
    ret = temp; // =operator()

    cout << endl << "example 3" << endl;
    CExample tmp_c = g_Fun();
    tmp_c.Show();

    return 0;
}
