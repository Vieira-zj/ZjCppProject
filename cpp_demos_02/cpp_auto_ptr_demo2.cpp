#include <iostream>
#include <memory>

using namespace std;

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

class A3
{
public:
    int value;
    A3() : value(0) {std::cout << "A::A" << std::endl;}
    //A3(A3 & a) {value = a.value; std::cout << "A::Copy" << std::endl;}
};

typedef auto_ptr<Test> TestAutoPtr;
typedef unique_ptr<Test> TestUniquePtr;
typedef shared_ptr<Test> TestSharedPtr;

void doSomething1(auto_ptr<Test> myPtr) {
    myPtr->m_value = 11;
}

void doSomething2(Test *myPtr) {
    myPtr->m_value = 11;
}

void doSomething3(Test myPtr) {
    myPtr.m_value = 11;
}

int auto_ptr_main2(void)
//int main(void)
{
    // example 01
    //A3 a;
    //A3 a = A3();

    //Test test;
    //Test myTest = Test(test);
    //myTest.m_value = 10;
    //doSomething3(myTest);

//    Test *myTest = new Test();
//    doSomething2(myTest);
//    delete(myTest);
//    myTest = nullptr;

    //auto_ptr<Test> myTest(new Test());
    //doSomething(myTest);
    //myTest->m_value = 10;

    // example 02
    shared_ptr<int> sp(new int(100));
    cout << *(sp.get()) << endl;
    cout << sizeof(sp) << endl;
    cout << typeid(sp).name() << endl;

    int i = 10;
    int *p = &i;
    cout << sizeof(p) << endl;
    cout << typeid(p).name() << endl;

    return 0;
}
