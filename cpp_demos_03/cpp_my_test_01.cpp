#include <iostream>

using namespace std;

struct D
{
    int a;
    char c;
    double d;
};

void fn_test()
{
    static int n = 10;
    cout << n <<endl;
    n++;
}

class B
{
public:
	virtual void f(string x) const {cout << "B::f" << endl;}
};

class C : public B
{
public:
	virtual void f(int x) {cout << "D::f" << endl;}
};

void f(const int& i) { cout << "l_value ref: " << i << "\n"; }
void f(int&& i) { cout << "r_value ref: " << i << "\n"; }

int my_test_main(void)
//int main(void)
{
//    int *p = new int(10);
//    delete p;
//    p = nullptr;
//    delete p;


//    cout << "type size " << sizeof(double) << endl;
//    cout << "size is " << sizeof(D) << endl;


//    fn_test();
//    fn_test();
//    fn_test();


//    C *p = new C();
//    p->f(5);
////    p->f("5");
//    delete p;

//    B b = B();
//    b.f("test");

//    B b;
//    const B &r = b;
//    r.f("test");


//    const int &r = 9;
//    cout << r << endl;


//    int i = 7;
//    f(i);
//    f(9);


    char tmp_arr[] = "zhengjin";
    cout << "length: " << sizeof(tmp_arr) / sizeof(char) << endl;
    for (int i = 0, len = sizeof(tmp_arr) / sizeof(char); i < (len - 1); ++i)
    {
        cout << tmp_arr[i] << endl;
    }

    return 0;
}
