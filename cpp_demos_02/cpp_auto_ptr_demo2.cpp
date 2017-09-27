#include <iostream>
#include <memory>

using namespace std;

class A3
{
public:
    int value;
    A3() : value(0) {std::cout << "A::A" << std::endl;}
};

int object_init_main(void)
//int main(void)
{
    // #1
    A3 a;
    cout << "value: " << a.value << endl;
    // #2
    A3 b = A3();
    cout << "value: " << b.value << endl;

    return 0;
}

class Test
{
public:
    int m_value;
    Test():m_value(0) { std::cout << "Test::Test()" << std::endl; }
    Test(int x):m_value(x) { std::cout << "Test::Test(int)" << std::endl; }
    Test(const Test &t):m_value(t.m_value) { std::cout << "Test::Copy" << std::endl; }
    Test & operator=(const Test &t) { m_value = t.m_value; std::cout << "Test::=" << std::endl; return *this; }
    ~Test() { std::cout << "Test::~Test destructor" << std::endl; }
};

typedef unique_ptr<Test> TestUniquePtr;
typedef shared_ptr<Test> TestSharedPtr;

void doSomething1(Test myPtr) {
    myPtr.m_value = 11;
}

void doSomething2(Test *myPtr) {
    myPtr->m_value = 11;
}

void doSomething3(TestUniquePtr &myPtr) {
    myPtr->m_value = 11;
}

int auto_ptr_01_main2(void)
//int main(void)
{
    Test test;
    Test myTest = Test(test); // Test::Copy
    myTest.m_value = 10;
    doSomething1(myTest); // Test::Copy

    return 0;
} // destructor

int auto_ptr_02_main2(void)
//int main(void)
{
    Test *myTest = new Test(); // constructor
    doSomething2(myTest);
    delete(myTest); // destructor
    myTest = nullptr;

    return 0;
}

int auto_ptr_03_main2(void)
//int main(void)
{
    TestUniquePtr myTest(new Test());
    doSomething3(myTest);
    myTest->m_value = 10;

    return 0;
}

int auto_ptr_04_main2(void)
//int main(void)
{
    shared_ptr<int> sp(new int(100));
    cout << *(sp.get()) << endl;
    cout << sizeof(sp) << endl; // 8
    cout << typeid(sp).name() << endl;

    int i = 10;
    int *p = &i;
    cout << sizeof(p) << endl; // 4

    return 0;
}
