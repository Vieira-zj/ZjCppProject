#include<iostream>

using std::cout;
using std::endl;

class Base3
{
protected:
    int value;
public:
    Base3()
    {
        cout << "in Base" << endl;
    }
};

class DerivedA3: protected Base3
{
protected:
    int valueA;
public:
    DerivedA3()
    {
        cout << "in DerivedA" << endl;
    }
};

class DerivedB3
{
protected:
    int valueB;
public:
    DerivedB3()
    {
        cout << "in DerivedB" << endl;
    }
};

class TestClass
{
public:
    TestClass()
    {
        cout << "in TestClass" << endl;
    }
};

class MyClass: virtual DerivedA3, virtual DerivedB3
{
private:
    int my_value;
    TestClass testData;
public:
    MyClass()
    {
        cout << "in MyClass" << endl;
    }
};

int virtual_fn_main2(void)
//int main(void)
{
    Base3 base_obj;
    cout << "size of Base object " << sizeof(base_obj) << endl; // 4
    DerivedA3 derA_obj;
    cout << "size of DerivedA object " << sizeof(derA_obj) << endl; // 8
    DerivedB3 derB_obj;
    cout << "size of DerivedB object " << sizeof(derB_obj) << endl; // 4
    TestClass test_obj;
    cout << "size of TestClass object " << sizeof(test_obj) << endl; // 1
    MyClass my_obj;
    cout << "size of MyClass object " << sizeof(my_obj) << endl;
    // 4(derivedA) + 8(derivedB) + 8(self) + 4(virtual ptr) = 24

    return 0;
}
