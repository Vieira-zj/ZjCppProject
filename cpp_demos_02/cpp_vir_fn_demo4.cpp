#include <stdio.h>

class A
{
public:
    void fn() { printf("fn in A\n"); }
    virtual void v_fn() { printf("virtual fn in A\n"); }
    virtual void v_fn2() {};
    virtual void v_fn3()=0;
};

class B : public A
{
public:
    void fn() { printf("fn in B\n"); }
    virtual void v_fn() { printf("virtual fn in B\n"); }
    void v_fn3() { printf("pure virtual fn in B\n"); }
};

class C : public B
{
    void v_fn() { printf("virtual fn in C\n"); }
    void v_fn3() { printf("pure virtual fn in C\n"); }
};

int virtual_fn_main4(void)
//int main(void)
{
    A *a = new C();
    a->fn();
    a->v_fn();
    a->v_fn3();

    return 0;
}
