#include <iostream>

using namespace std;

class A2
{
private:
    int value;
public:
    A2() { cout << "int A default constructor." << endl; }
    A2(int x)
    {
        cout << "int A one parameter constructor." << endl;
        value = x;
        cout << "The value is " << value << endl;
    }
};

class B2
{
private:
    A2 a;
public:
    //#1
//    B2()
//    {
//        cout << "int B default constructor #1." << endl;
//        //A2 a(3);
//        A2 a = 3;
//    }

    //#2
    B2() : a(3) { cout << "int B default constructor #2." << endl; }
};

int cls_var_init_main(void)
//int main(void)
{
    B2 b;

    return 0;
}
