#include <iostream>

using namespace std;

float temp;

float fn1(float r);
float &fn2(float r);
float *fn3(float);

float fn1(float r)
{
    temp = (float) (r * r * 3.14);
    return temp;
}

float &fn2(float r)
//定义函数fn2，它以引用方式返回函数值
{
    temp = (float) (r * r * 3.14);
    return temp;
}

float *fn3(float r)
{
    temp = (float) (r * r * 3.14);
    return &temp;
}

//float &fn4(float r)
//{
//    float tmp = (float)(r * r * 3.14);
//    return tmp;
//}
//
//float *fn5(float r)
//{
//    float tmp = (float) (r * r * 3.14);
//    return &tmp;
//}

int reference_main2(void)
//int main(void)
{
    // 第1种情况，系统生成要返回值的副本（即临时变量）
    float a = fn1(10.0);
    //float &b = fn1(10.0); //第2种情况，可能会出错（不同C++系统有不同规定）
    const float &b = fn1(10.0);

    //可以从被调函数中返回一个全局变量的引用
    float c = fn2(10.0);  //第3种情况，系统不生成返回值的副本
    float &d = fn2(10.0); //第4种情况，系统不生成返回值的副本

    cout << "a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;
    //a=314, b=314, c=314, d=314

    float *e = fn3(10.0);
    cout << "e=" << *e << endl;
    //e=314

    //不能从被调函数中返回一个临时变量或局部变量的引用
    //float &f = fn4(10.0);
    //cout << "f=" << f << endl;

    //float *g = fn5(10.0);
    //cout << "g=" << *g << endl;

    return 0;
}
