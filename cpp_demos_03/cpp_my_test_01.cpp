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
    cout << n << endl;
    n++;
}

class BB1
{
public:
	virtual void f(string x) const {cout << "BB1::f" << endl;}
	virtual ~BB1() {}
};

class CC1 : public BB1
{
public:
	virtual void f(int x) {cout << "CC1::f" << endl;}
};

void f(const int& i) { cout << "l_value ref: " << i << "\n"; }
void f(int&& i) { cout << "r_value ref: " << i << "\n"; }

int my_test_main(void)
//int main(void)
{
    cout << endl << "test delete =>" << endl;
    int *p = new int(10);
    delete p;
    p = nullptr;
    delete p;


    cout << endl << "test sizeof struct =>" << endl;
    cout << "type size " << sizeof(double) << endl;
    cout << "size is " << sizeof(D) << endl;


    cout << endl << "static field in method =>" << endl;
    fn_test();
    fn_test();
    fn_test();


    cout << endl << "test virtual method, and override =>" << endl;
    BB1 b1 = BB1();
    b1.f("test");

    BB1 b2;
    const BB1 &rb2 = b2;
    rb2.f("test");

    CC1 *pcc = new CC1();
    pcc->f(5);
//    pcc->f("5"); // Error
    delete pcc;


    cout << endl << "test right value =>" << endl;
    const int &r = 9;
    cout << r << endl;

    int i = 7;
    f(i); // l_f
    f(9); // r_f


    cout << endl << "test char and string =>" << endl;
    char tmp_arr[] = "zhengjin";
    cout << "length: " << sizeof(tmp_arr) / sizeof(char) << endl;
    for (int i = 0, len = sizeof(tmp_arr) / sizeof(char); i < (len - 1); ++i) // exclude end tag
    {
        cout << tmp_arr[i] << endl;
    }

    return 0;
}
